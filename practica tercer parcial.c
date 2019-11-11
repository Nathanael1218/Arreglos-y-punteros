#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int a[5];
    int* ptrAO;
    ptrAO = &a[0];
    printf("\n\n intrododuce ");
    for(int i=0;i<5;i++){
       printf("intrododuce el valor de %d",i); scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("\n %d",a[i]);
    }
    int b[5]={1,2,3,4,5};
    int* ptrBO;
    ptrBO = &b[0];
    printf("\n\n  el valor de B[0] es: %d\n ",*ptrBO);
    printf("\n\n  el valor de b[2] es: %d\n ",(*ptrBO+2));
    printf("\n\n  el valor de B[0] es: %d\n ",*ptrBO+1);
    for(int i=0;i<5;i++){
        printf("intrododuce el valor de B[%d]",i); scanf("%d",&*ptrBO+1);
    }
    int c[5];
    for(int i=0;i<5;i++){
        c[i]=*(ptrAO+i)+*(ptrBO+i);
    }
    for(int i=0;i<5;i++){
        printf("\n %d",c[i]);
    }
}
