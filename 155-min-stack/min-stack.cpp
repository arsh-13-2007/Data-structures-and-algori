class MinStack {
public: 
    stack<int>s ; 
    stack<int>min_st  ; 
    MinStack() {
        
    }
    void push(int value) {
        s.push(value) ;
        if(min_st.empty()){
            min_st.push(value) ; 
        }
        else if ( min_st.top() >= value){
            min_st.push(value) ; 
        }

    }
    
    void pop() {
        if(s.top() == min_st.top()){
            s.pop() ; 
            min_st.pop() ; 
        }
        else{
            s.pop() ; 
        }
    }
    
    int top() {
       return s.top() ; 
    }
    
    int getMin() {
        return min_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */