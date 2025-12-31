#include <stdio.h>
int main(){
    int a[10],key,i,found=0;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        printf("enter key:");
        scanf("%d",&key);
        for(i=0;i<=10;i++)
        if(a[i]==key){
            found=1;
            break;
        }
        if(found==1)
            printf("Element found at position %d\n",i+1);
        else
            printf("Element not found\n");
    }
    return 0;
}