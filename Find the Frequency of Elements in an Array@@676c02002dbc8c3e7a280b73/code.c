#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n], f[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[n]);
        f[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(f[i] == -1)
            int count =1;
            for(int j=i+1;j<n;j++)
                if(a[i] == a[j]){
                    count++;
                    f[j]=0;
                }
                f[i]= count;       
    }
    for(int i=0;i<n;i++){
        if(f[i]!=0){
            printf("%d %d\n",a[i],f[i]);
        }
    }
}