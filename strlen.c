#include <stdio.h>
int main() {
    char str []= "c programming";
    int count = 0;
     
    while (str[count] != '\0'){
        ++count;
    }
      printf("lenth of string: %d\n", count);
        
        return 0;
}