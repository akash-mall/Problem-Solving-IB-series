void Solution::rotate(vector<vector<int> > &A) {
   int n = A.size();

   //transpose
   for(int i=0;i<n;++i)
   {
       for(int j=i+1;j<n;++j)
       {
           swap(A[i][j],A[j][i]);
       }
   }
   //rearrange columns
   int k=0;
   for(int i=n-1;k<i;--i,++k)
   {
       for(int j=0;j<n;++j)
       {
           swap(A[j][i],A[j][k]);
       }
   }
}
