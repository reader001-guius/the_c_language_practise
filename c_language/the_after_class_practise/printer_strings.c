#include <stdio.h>
#include <stdlib.h>
int my_strlen(char arr[]){
    int i=0;
    for(;arr[i]!='\0';i++){
    }
    return i;
}
void my_strcpy(char arr1[],char arr2[]){
    for(int i=0;arr1[i]!='\0';i++){
        arr2[i]=arr1[i];
    }
}
void my_strcat(char arr1[],char arr2[]){
    int len=my_strlen(arr1);
    int i=0;
    for(;arr2[i]!='\0';i++){
        arr1[len+i]=arr2[i];
    }
    arr1[len+i]='\0';
}
int main(){
    char arr1[100];
    char arr2[100];

    scanf("%s",arr1);
    scanf("%s",arr2);
    printf("Length of first string: %d\n",my_strlen(arr1));
    printf("Length of second string: %d\n",my_strlen(arr2));
    char arr3[100];
    my_strcpy(arr1,arr3);
    printf("Copied string: %s\n",arr3);
    my_strcat(arr1,arr2);
    printf("Concatenated string: %s\n",arr1);
    return 0;
}