 bool ValidCorner(const vector<vector<int> >& mat)
    {
        // Your code goes here
        
        int N=mat.size();
        int M=mat[0].size();
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(mat[i][j]==1)
                {
                    for(int k=i+1;k<N;k++)
                    {
                        for(int l=j+1;l<M;l++)
                        {
                            if(mat[i][l]==1 && mat[k][j]==1 && mat[k][l]==1)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
        return 0;
        
    }