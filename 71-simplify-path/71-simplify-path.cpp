class Solution {
public:
    string simplifyPath(string &path) {
        
        stack<string> stk; string ans = "/";
       
        
        int i = 0; int len = path.size();
        
        
        
        while(i < len) {
            if(i  < len - 3 && path[i] == '/' && path[i + 1]  == '.' && path[i  + 2] == '.' && path[i + 3] == '/' || (
                
                i == len - 3 && path[i] == '/' && path[i + 1] == '.' && path[i + 2] == '.'
            
            )) {
                if(!stk.empty()) stk.pop();
                i+=3;
                
            }
            else if(i < len - 1 && path[i] == '/' && path[i + 1] == '/') i++; 
            else if(i < len - 2 && path[i] == '/' && path[i + 1] == '.' && path[i + 2] == '/' || (
             i == len - 2 && path[i] == '/' && path[i + 1] == '.'
            )) i+=2;
            else {
                i++;
                string currentDirectoryName = "";
                while(i < len && path[i] != '/') {
                    currentDirectoryName.push_back(path[i]);
                    i++;
                }
                
                stk.push(currentDirectoryName);
            }
            
        }
        stack<string> stk2;
        string res = "";
        while(!stk.empty()) {
            stk2.push(stk.top());
            stk.pop();
        }
        
        while(!stk2.empty()) {
            res.push_back('/');
            res+=stk2.top(); stk2.pop();
        }
        
        if(res.back() == '/') res = res.substr(0, res.length() -1);
        if(res.empty()) res.push_back('/');
        
        return res;    
        
            
                
    }
};