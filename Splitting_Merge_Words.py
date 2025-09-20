from multiprocessing import Process, Queue

class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for ch in word:
            if ch not in node.children:
                node.children[ch] = TrieNode()
            node = node.children[ch]
        node.is_end_of_word = True

    def search(self, word):
        node = self.root
        for ch in word:
            if ch not in node.children:
                return False
            node = node.children[ch]  # Correctly update to the child TrieNode
        return True
    
    def delete(self, word):
        node = self.root
        for ch in word:
            if ch not in node.children:
                return
            else:
                node = node.children[ch]
        node.is_end_of_word = False

    def starts_with(self, prefix):
        node = self.root
        for ch in prefix:
            if ch not in node.children:
                return False
            node = node.children[ch]
        return True

    def collect_words(self):
        def dfs(node, prefix, words):
            if node.is_end_of_word:
                words.append(prefix)
            for ch, child in node.children.items():
                dfs(child, prefix + ch, words)

        words = []
        dfs(self.root, "", words)
        return words

def word_break(s, word_dict):
    n = len(s)
    dp = [False] * (n + 1)
    dp[0] = True
    backtrack = [-1] * (n + 1)

    for i in range(1, n + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_dict:
                dp[i] = True
                backtrack[i] = j
                break

    if not dp[n]:
        return None  # cannot split

    # reconstruct
    words = []
    k = n
    while k > 0:
        j = backtrack[k]
        words.append(s[j:k])
        k = j
    return list(reversed(words))

if __name__ == "__main__":
    dictionary = {"hello", "world", "python"}
    print(type(dictionary))
    trie = Trie()
    for word in dictionary:
        trie.insert(word)
    trie.insert("Dat")
    collect_words = trie.collect_words()
    print(type(collect_words))
    #print(dictionary)
    #print(word_break("helloDatpython", collect_words))



