#include <stdio.h>
int same_set(int a[],int b[],int len){
    int same=1;
    for(int i=1;i<len;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(int k=1;k<len;k++){
        int l=k-1;
        int temp=b[k];
        while(l>=0&&b[l]>temp){
            b[l+1]=b[l];
            l--;
        }
        b[l+1]=temp;
    }
    for(int m=0;m<len;m++){
        if(a[m]!=b[m]){
            break;
            same=0;
        }
    }
    return same;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100],b[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    printf("%d",same_set(a,b,n));
}





    