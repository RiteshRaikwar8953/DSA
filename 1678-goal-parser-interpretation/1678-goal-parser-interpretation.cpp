class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        int i = 0;
        string ans = "";
        while(i<n){
            if(command[i]=='G') ans.push_back('G');
            else if(command[i]=='(' && command[i+1]==')') ans.push_back('o');
            else if(command[i]=='a') ans.push_back('a');
            else if(command[i]=='l') ans.push_back('l');
            else{
                i++;
                continue;
            }
            i++;
        }
        return ans;
    }
};