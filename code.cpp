class Solution {
public:
    int countWord(string &s)
    {
        int count=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                count++;
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) 
    {
        int max_count=0;
        for(int i=0;i<sentences.size();i++)
            max_count=max(countWord(sentences[i]),max_count);
        return max_count;
    }
};
