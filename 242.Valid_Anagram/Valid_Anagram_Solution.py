class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        container_s, container_t = {}, {}
        for i in range(len(s)):
            container_s[s[i]]  = 1 + container_s.get(s[i],0)
            container_t[t[i]]  = 1 + container_t.get(t[i],0)
        for j in container_s:
            if container_s[j] != container_t.get(j,0):
                return False
        return True
            