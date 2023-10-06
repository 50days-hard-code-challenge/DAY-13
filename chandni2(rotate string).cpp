class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m){
            return false;
        }
        string temp=s+s;
        if(temp.find(goal)==-1){
            return false;
        }
        else{
        return true;
    }
    }
};
