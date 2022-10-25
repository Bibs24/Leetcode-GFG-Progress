class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        str1 = ""
        str2 = ""
        return (str1.join(word1) == str2.join(word2))
        