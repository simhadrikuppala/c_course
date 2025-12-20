#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("writefile.txt", "w");
    if (ptr == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    int i = 55;
    fprintf(ptr, "%d", i);
    fclose(ptr);
    return 0;
}