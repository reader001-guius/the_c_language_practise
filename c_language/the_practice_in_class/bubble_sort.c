#include <stdio.h>
int main() {
  int table[7];
  for(int i=0;i<7;i++) {
    scanf("%d", &table[i]);
  }
  for(int k=1;k<6;k++){
    for(int f=0;f<7-1-k;f++){
    if (table[f]>table[f+1]){
        int temp=table[f];
        table[f]=table[f+1];
        table[f+1]=temp;
    } 
}}
for(int m=0;m<7;m++){
    printf("%d ",table[m]);
}
return 0;
 }

    
    
  
  