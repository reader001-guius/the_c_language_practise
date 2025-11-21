#include <stdio.h>
int main(){
    int m,n;
    int i=0,l=0,j=0;
    int arr1[100],arr2[100],arr3[200];
    scanf("%d",&m);
    for(int p=0;p<m;p++){
        scanf("%d",&arr1[p]);
    }
    scanf("%d",&n);
    for(int q=0;q<n;q++){
        scanf("%d",&arr2[q]);
    }
    while (i < m && l < n) {
        if (arr1[i] <= arr2[l]) {
            arr3[j] = arr1[i];
            i++; 
        } else {
            arr3[j] = arr2[l];
            l++; 
        }
        j++; 
    }
        while (i < m) {
        arr3[j] = arr1[i];
        i++;
        j++;
    }  
    while (l < n) {
        arr3[j] = arr2[l];
        l++;
        j++;
    }
    for(int s=0; s<j; s++){
        printf("%d", arr3[s]);
        if (s < j - 1) {
            printf(" ");
        }}
    return 0;
}