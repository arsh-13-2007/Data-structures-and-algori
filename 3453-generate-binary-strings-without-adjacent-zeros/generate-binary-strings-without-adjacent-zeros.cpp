class Solution {
public:
    void convert(vector<string>&ans,int n , string str){
        if(str.length() == n ){
            ans.push_back({str}) ;
            return ;
        }
            if(str.empty() || str.back() != '0'){
            str= str +'0' ; 
            convert(ans , n , str ) ; 
            str.pop_back() ;   
            }
           
            str = str +'1' ; 
            convert(ans , n , str  ); 
            str.pop_back() ; 
    
    }
    vector<string> validStrings(int n) {
        vector<string>ans ; 
        string str = "" ; 
        convert(ans , n , str );
    return ans ; 
    }
};