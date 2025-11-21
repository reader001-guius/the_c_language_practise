#include <stdio.h>
int main(){
    int m,n;
    int arr1[100],arr2[100];
    int same[100];
    int num=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            if(arr1[k]==arr2[l]){
                same[num]=arr2[l];
                num++;
                break;}
            }
        }
    for(int a=0;a<num;a++){
        for(int b=a+1;b<num;){
            if(same[a]==same[b]){
                for(int c=b;c<num-1;c++){
                    same[c]=same[c+1];
                }
                num--;
            }else{
                b++;
            }
        }  
    }
    for(int s=0;s<num;s++){
        printf("%d ",same[s]);
    }   
    if(num==0){
        printf("No Answer");
    }
    return 0;
}