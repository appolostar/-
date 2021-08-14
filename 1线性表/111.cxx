

#include<bits/stdc++.h>
using namespace std;
int a[100001], n=0,m=0,l=0;
int ans=1;
void work(){
	 scanf("%d %d", &n,&m);
         ans=1;
         for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
				if(a[i]==m){
				l=-1;
				}
         }
		 sort(a, a + n);
         int temp = a[0];
         for (int i = 0; i < n; i++){
            if (temp != a[i]){
                ans=ans+1;
                temp = a[i];
            }
         }
      printf("%d\n",ans*2-1);
}
	 


int main(void)
{
	
	int t;
	cin>>t;
	while(t--){
		work();
		}

}

