void Solution::setZeroes(vector<vector<int> > &A) {
    map<int,int>row;
    map<int,int>col;

    int m = A.size();
    int n = A[0].size();

    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(A[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(auto r : row){
        for(int i=0;i<n;i++)
        {
            A[r.first][i] = 0;
        }
    }

    for(auto c : col){
        for(int i=0;i<m;i++)
        {
            A[i][c.first] = 0;
        }
    }

}
