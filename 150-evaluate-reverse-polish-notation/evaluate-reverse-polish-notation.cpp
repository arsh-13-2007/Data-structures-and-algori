class Solution {
public:
    int cal(int a , int b , char str){
        if (str == '+') {return a+b  ; }
        else if (str =='-'){return a -b ; }
        else if ( str == '*') {return a*b ;}
        else if(str == '/'){ return  a / b  ; }
        return -1 ; 
    }
    int evalRPN(vector<string>&nums) {
        stack<int>s ; 

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] =="+" || nums[i] == "-" || nums[i] == "*"|| nums[i] =="/"){
                int x = s.top(); 
                s.pop() ; 
                int y = s.top() ;
                s.pop() ; 
                s.push(cal(y, x , nums[i][0])) ; 
            }
            else{
                s.push(stoi(nums[i])) ; 
            }
        }
    return s.top()  ; 
    }
};