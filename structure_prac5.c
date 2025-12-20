#include<stdio.h> 
struct complex{
    float r;
    float c;
};
void display(struct complex v[5],struct complex v1[5]){
    printf("enter the complex number ");
    scanf("%fi + %fj",&v[0].r,&v1[1].c);
    printf("enter the complex number ");
    scanf("%fi + %fj",&v1[1].r,&v[0].c);


}   
int main(){
    struct complex v[5],v1[5];
    display(v,v1);
    printf("%fi+ %fj\n",v[0].r,v1[0].c);
    printf("%fi+ %fj\n",v1[1].r,v[1].c);

    return 0;
}
