class Solution {
public:
    string toGoatLatin(string sentence) 
    {
        string res;
        string word;
        int l=1;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                if(word.size()==0)
                {
                    continue;
                }
                if(word[0]=='a' or word[0]=='e' or word[0]=='i' or word[0]=='o'
                 or word[0]=='u' or word[0]=='A' or word[0]=='E' or word[0]=='I' 
                  or word[0]=='O' or word[0]=='U' )
                {
                    word+="ma";
                    for(int j=0;j<l;j++)
                    {
                        word+='a';
                    }
                    l++;
                    res+=word;
                    res+=' ';
                }
                else{
                    char c=word[0];
                    word.erase(0,1);
                    cout<<word<<"  ";
                    word+=c;
                    word+="ma";
                    for(int j=0;j<l;j++)
                    {
                        word+='a';
                    }
                    l++;
                    res+=word;
                    res+=' ';
                }
                word="";
                continue;
            }
            word+=sentence[i];
        }
         if(word[0]=='a' or word[0]=='e' or word[0]=='i' or word[0]=='o'
                 or word[0]=='u' or word[0]=='A' or word[0]=='E' or word[0]=='I' 
                  or word[0]=='O' or word[0]=='U' )
                {
                    word+="ma";
                    for(int j=0;j<l;j++)
                    {
                        word+='a';
                    }
                    l++;
                    res+=word;
                }
                else{
                    char c=word[0];
                    word.erase(0,1);
                    cout<<word<<"  ";
                    word+=c;
                    word+="ma";
                    for(int j=0;j<l;j++)
                    {
                        word+='a';
                    }
                    l++;
                    res+=word;
                }
     return res;   
    }
};