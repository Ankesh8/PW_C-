void displayrec(stack<int> &st){
  if (st.size()==0) return;
  int x = st.top();
  cout<<st.top()<<" ";
  st.pop();
  displayrec(st);
  st.push(x);
}