class Solution {
public:
    int myAtoi(string s) {
        string str ="" ;
        int idx = 0 ;  
        for(int i = 0 ; i < s.length() ; i++){ // ignore  whitespace 
            if(s[i] == ' '){
                continue ; 
            }
            else{
                idx = i ; 
                break ; 
            }
        }
        s = s.substr(idx) ; 
        str = "";

        for(int i = 0; i < s.length(); i++) {
            if((s[i] == '-' || s[i] == '+') && i == 0) {
                str = str + s[i];
            }
            else if(s[i] >= '0' && s[i] <= '9') {
                str = str + s[i];
            }
            else {
                break;
            }
        }
        if(str == "" || str == "-" || str == "+") { return 0; }
        long long num = 0 ; 
        int sign = 1; int start = 0;
        if(str[0] == '-'){
            sign = -1 ;
            start =1 ; 
        }
        else if( str[0] == '+'){
            sign = 1 ; 
            start = 1;
        }
        for( int i = start ;i < str.length() ;i++){
            num = (num*10) + (str[i] -'0') ; 
            if(sign == 1 && num > INT_MAX){
                return INT_MAX ;
            }
            else if( sign == -1 && (-1*num) < INT_MIN){
                return INT_MIN ; 
            }
        }
    return sign*num ; 
    }
};