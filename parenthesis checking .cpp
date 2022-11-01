bool isValid(string s) {
        stack<char> str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                str.push(s[i]);
            }
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(str.size()==0){
                    return false;
                }else{
                    if(str.top()=='['&&s[i]==']'||str.top()=='('&&s[i]==')'||str.top()=='{'&&s[i]=='}'){
                        str.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(str.size()==0){
            return true;
        }else{
            return false;
        }
    }
