 for(int i=m-1;i>=0;i--){
    if(i%2==0)
    {
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
      }
    }
    else{
      for(int j=n-1;j>=0;j--){
        cout<<a[i][j]<<" ";
      }
    }
  }