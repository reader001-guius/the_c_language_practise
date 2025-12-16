#include <stdio.h>
int main(){
    int num,n;
    int sum=0;
    int arr[100];
    scanf("%d",&num);
    int j=0;
    n=num;
    while(n!=0){
        int n1=n%10;
        int fact=1;
        for(int i=1;i<=n1;i++){
            fact=fact*i;
        }
        arr[j]=fact;
        sum=sum+fact;
        n=n/10;
        j++;
}
printf("%d,",num);
for(int i=0;i<j-1;i++){
    printf("%d+",arr[i]);
}
printf("%d=%d\n",arr[j-1],sum);
if(sum==num){
    printf("Yes");
}
else{
    printf("No");
}
return 0;
}


