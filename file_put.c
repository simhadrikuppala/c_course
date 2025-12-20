#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("putfile.txt", "r");
    if (ptr == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
   char ch=fgetc(ptr);
    printf("the value of put file is :%c",ch);
    fclose(ptr);
    return 0;
}