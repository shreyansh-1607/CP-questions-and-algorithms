// You are given an array arr[] of integers, the task is to find the next greater element for each element of the array in order of their appearance in the array. 
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1.

vector<int> nextLargerElement(vector<int>& arr)
{
      stack<int> st;
      int n= arr.size();
      vector<int> nge(n, -1);
      for(int i= 0; i<n; i++)
      {
          while(!st.empty() && arr[i] > arr[st.top()])
          {
              nge[st.top()]= arr[i];
              st.pop();
          }
          st.push(i);
      }
      return nge;
}

//eg:- 4  5  2  25  7  8
//nge= 5 25 25  -1  8  -1
