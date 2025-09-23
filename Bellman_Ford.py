import sys

def bellman_ford(V, edges, src):
    dist = [sys.maxsize] * (V + 1) 
    parent = [-1] * (V + 1)       
    dist[src] = 0

    for _ in range(V - 1):
        for u, v, wt in edges:
            if dist[u] != sys.maxsize and dist[u] + wt < dist[v]:
                dist[v] = dist[u] + wt
                parent[v] = u

    for u, v, wt in edges:
        if dist[u] != sys.maxsize and dist[u] + wt < dist[v]:
            print("Graph contains negative weight cycle")
            return None, None

    return dist[1:], parent


def reconstruct_path(parent, src, target):
    path = []
    while target != -1:
        path.append(target)
        if target == src:
            break
        target = parent[target]
    path.reverse()
    return path


if __name__ == "__main__":
    V = 7
    src = 1
    edges = [
        [1, 2, 6], [1, 3, 5], [1, 4, 5],
        [4, 3, -2], [4, 6, -1], [6, 7, 3],
        [3, 2, -2], [3, 5, 1], [2, 5, -1],
        [5, 7, 3]
    ]
    dist, parent = bellman_ford(V, edges, src)

    if dist:
        print("Distances:", dist)
        target = 7
        path = reconstruct_path(parent, src, target)
        print(f"Shortest path {src} → {target}:", path)