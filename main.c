#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
int main()
{
    int *a;  // указатель на массив
    int i,j,n,b,c,d,k;
    int q = 0;
    system("chcp 1251");
    system("cls");
    printf("Введите мощность множества: ");
    scanf("%d", &n);
    // Выделение памяти
    a = (int*)malloc(n * sizeof(int));
    // Ввод элементов массива
    for (i = 0; i<n; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
        c=a[i];
        while(c!=0){
            d=c%10;
            if((d!=1)&&(d!=0)){
                printf("Ошибка, введите число в двоичной системе\n");
                i--;
                break;}
            c=c/10;
        }
        q++;
        if(q!=0){
            for(j = i-1; j >= 0; j--){
                if(a[i]==a[j]){
                    printf("Обнаружено повторение\n");
                    i--;
                    break;
                }
            }
        }
    }
      // Вывод элементов массива
    for (i = 0; i<n; i++){
        printf("%d,", a[i]);}
        printf("\n");
    for (i = 0; i<n; i++){
        c = a[i];
        k=0;
        b=0;
        while(c!=0){
            b+=c%10*pow(2,k);
            k++;
            c=c/10;
        }
        printf("%d, ", b);
    }
    free(a);
    return 0;
}
