#include<iostream>
    #define N 10
    #include<cstring>
    using namespace std;
    int a[N];
    int t=1;
    int n;	
    int m;

    void  Iter_backtrack(){
    	memset(a,0,sizeof(a));
    	t=1;
    	while(t!=0){
    		if(a[t]<n){
    			a[t]=a[t]+1;
    			if(a[t]<=n){
    				if(t==m){
    					for(int i=1;i<=m;i++)
    						cout<<a[i]<<" ";
    					cout<<endl; 
    				}else	t++;
    			} 
    		}else{
    			a[t]=0;
    			t--; 
    		} 
    	} 
    }
    int main(){
		printf("一串数中的最大数为：");
		scanf("%d",&n);
		printf("位数为：");
		scanf("%d",&m);
    	Iter_backtrack();
    	return 0;
}