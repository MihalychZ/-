#include "header.h"

unsigned int reverseBits(unsigned int num, unsigned int bits)
{
    unsigned int reversed = 0;

    for (int i = 0; i < bits; i++)
    {
        if(num & (1 << i))
        {
            reversed |= (1 << (bits - 1 - i));
        }
    }

    return reversed;
}

int labaseven(void)
{
    unsigned int num = 10;
    unsigned int bits = sizeof(num) * 8;

    printf("Ич %u\n", num);
    printf("Р %u\n", reverseBits(num, bits));

    return 0;
}

#include "header.h"

#define N 3
#define K 3

int labasix(void) {
    int x[N][K];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < K; j++)
            scanf("%d", &x[i][j]);
    for (int i = 0; i < N; i++) {
        int m = 1;
        for (int j = 0; j < K / 2; j++)
            if (x[i][j] != x[i][K - j - 1]) {
                m = 0;
                break;
            }
        if (m)
            for (int j = 0; j < K; j++)
                x[i][j] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++)
            printf("%d ", x[i][j]);
        printf("\n");
    }
    return 0;
}

#include "header.h"

int labafive(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, temp;

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include "header.h"

void printShortWords(char str[], int n) {
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            int start = i;
            while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                i++;
            }
            int end = i - 1;
            if (end - start + 1 <= n) {
                for (int k = start; k <= end; k++) {
                    printf("%c", str[k]);
                }
            }
        } else {
            printf("%c", str[i]);
            i++;
        }
    }
}

int labafour(void) {
    char str[100];
    int n;

    fgets(str, sizeof(str), stdin);

    printf("Введите максимальную длину слова: ");
    scanf("%d", &n);

    printShortWords(str, n);

    return 0;
}

#include "header.h"
 
int labathree(void){
    int c = 0;
    int slovo = 0;
    int flag = 0;
    while ((c = getchar()) != EOF){
        if (c == 'a' || c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o'){
            flag = 1;
        }
            if((c == ' ' || c == '.' || c == ',' || c == '\n') && flag == 1){
            slovo++;
            flag = 0;
        }
    }
    printf("%d", slovo);
    }
#include "header.h"

int labatwo(void)
{ 
    float s, a;
    int n,z,chislitel,znamenatel,i;

    printf("n=");
    scanf("%d", &n);

    s = 0;
    z = 1;
    chislitel=3;
    znamenatel=1;
    i=n;

    while (i>0)
    { 
        a = (float) chislitel/znamenatel;
        s = s + a*z;
        z = -z;
        chislitel++;
        znamenatel+=3;
        i--;
    } 

    printf("s = %f\n", s);

    return 0;
}

#include "header.h"

int labaone(void)
{
    float l,t1,t2,v;
    
    scanf("%f", &l);
    scanf("%f", &t1);
    scanf("%f", &t2);

    v=(l/t1-l/t2)/2;
    
    printf ("%f", v);
}
