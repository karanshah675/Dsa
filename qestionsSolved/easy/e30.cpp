// https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=problem-list-v2&envId=string
class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<char> vowels = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (find(vowels.begin(), vowels.end(), s[i]) == vowels.end())
            {
                i++;
            }
            else if (find(vowels.begin(), vowels.end(), s[j]) == vowels.end())
            {
                j--;
            }
            else
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
// time:O(n)
// space : O(1)

// without find

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' || c == 'A' ||
               c == 'E' || c == 'I' || c == 'O' ||
               c == 'U';
    }

    string reverseVowels(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (!isVowel(s[i]))
            {
                i++;
            }
            else if (!isVowel(s[j]))
            {
                j--;
            }
            else
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
// time : O(n)
// space : O(1)