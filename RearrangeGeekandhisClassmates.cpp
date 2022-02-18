void prank(long long a[], int n){
        // code here
        vector<int>v(n,0);
        unordered_map<long long,long long>umap;
        for(long long i=0;i<n;i++)
        {
           umap[a[i]]=i;
        }
        
        for(long long i=0;i<n;i++)
        {
            //swap(a[i],a[umap[i]]);
            v[umap[i]]=a[i];
            //swap(a[i],a[umap[i]]);
            
        }
        for(long long i=0;i<n;i++)
        {
            a[i]=v[i];
        }
        
        
    }