// Method - 1

// vector<int> ans(n,-1);
// for(int i =0; i<n; i++)
// {
//     for(int j = i+1; j<n; j++)
//     {
//         if(arr[j]>arr[i])
//         {
//             ans[i]= arr[j];
//             break;
//         }
//     }
// }

// return ans;

// Method - 2

Stack<int> st;
Vector<int> arr(n, -1);

for (int i = 0; i < n; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }