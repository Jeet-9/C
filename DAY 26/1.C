// Online C compiler to run C program online
#include<stdio.h>

int main() {
int arr[]={5,10,15,20,25};
int *p=&arr;
for(int i = 4; i >=0; i--){
    printf("%d\n",*(p+i));
}
return 0;
}