class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)return true;
        stack<char>stk;

        for(char ch:s)
        {
            if(ch=='('||ch=='{'||ch=='[')
                stk.push(ch);
            else
            {
                if(stk.empty())return false;
                if(ch==')'&&stk.top()!='(' )return false;
                else if(ch=='}'&&stk.top()!='{')return false;
                else if(ch==']'&&stk.top()!='[')return false;
                else
                stk.pop();
            }
        }
        if(stk.size()==0)
        return true;
        else
            return false;
    }
}
