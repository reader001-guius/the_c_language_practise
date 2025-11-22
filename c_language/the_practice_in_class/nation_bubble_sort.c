#include <stdio.h>
#include <string.h>
void bubble_sort(char *na_points[100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(na_points[j],na_points[j+1])>0){
                char *temp=na_points[j];
                na_points[j]=na_points[j+1];
                na_points[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char *na_points[100];
    char nation[100][100];
    for(int i=0;i<n;i++){
        scanf("%s",nation[i]);
        na_points[i]=nation[i];
    }
    bubble_sort(na_points,n);
    for(int k=0;k<n;k++){
        printf("%s\n",na_points[k]);
    }
    return 0;
}

