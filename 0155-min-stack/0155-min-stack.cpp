// Method - 1
/*
class MinStack {
    stack<pair<int, int>>st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val, val});
        }
        else{
            st.push({val, min(val, st.top().second)});
        }
    }
    
    void pop() {
        if (!st.empty()) {
            st.pop();
        }
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
*/

// Method 2
class MinStack {
    stack<long long>st;
    long long min = LLONG_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(val);
        }
        else{
            if(min < val){
                st.push(val);
            }
            else{
                st.push(2LL * val - min);
                min = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        long long n = st.top();
        st.pop();
        if(n < min){
            min = 2 * min - n;
        }
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        long long n = st.top();

        if (n >= min) {
            return (int)n;    
        } 
        else {
        return (int)min; 
        }
    }
    
    int getMin() {
        return (int)min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */