#include <stdio.h>
#include "lr.h"
#define N 3
#define K 3

int laba1(void)
{
    float l,t1,t2,v;

    scanf("%f", &l);
    scanf("%f", &t1);
    scanf("%f", &t2);

    v=(l/t1-l/t2)/2;

    printf ("%f", v);
}

float s(float l,float t1,float t2){
	float v;
 	v=(l/t1-l/t2)/2;
 	return v;
}
int dop1(void)
{
 	float l, t1, t2;
 	scanf("%f", &l);
 	scanf("%f", &t1);
 	scanf("%f", &t2);
 	printf ("%f", s(l,t1,t2));
 	return 0;
}

int laba2(void)
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

int dop2(void)
{
 float s, a;
 int n,z,chislitel,znamenatel,i;
 printf("n=");
 scanf("%d", &n);
 s = 0;
 z = 1;
 chislitel=3;
 znamenatel=1;

 for (i=1;i<=n;++i)
 {
 a = (float) chislitel/znamenatel;
 s = s + a*z;
 z = -z;
 chislitel++;
 znamenatel+=3;
 }
 printf("s = %f\n", s);
 return 0;
}

int laba3(void){
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


int dop3(void) {
 	int slovo = 0;
 	int in_word = 0;
 	int c;
 	while ((c = getchar()) != EOF) {
 		if (c == 'a' || c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o')
 			in_word = 1;

 		if ((c == ' ' || c == '\n') && in_word == 1) {
 			slovo++;
 			in_word = 0;
 		}
 	}

 printf("%d", slovo);
 return 0;
}


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
int laba4(void) {
 	char str[100];
 	int n;
 	fgets(str, sizeof(str), stdin);
 	printf("Ââåäèòå ìàêñèìàëüíóþ äëèíó ñëîâà: ");
 	scanf("%d", &n);
 	printShortWords(str, n);
 	return 0;
}

void printshortwords(char str[], int n) {
 int i = 0;
 int wordCount = 0;
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
 wordCount++;
 }
 } else {
 printf("%c", str[i]);
 i++;
 }
 }
}
int dop4(void) {
 char str[100];
 int n;
 fgets(str, sizeof(str), stdin);
 scanf("%d", &n);
 printshortwords(str, n);
 return 0;
}

int laba5(void) {
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


int dop5(void) {
int arr[10];
int i, temp;
int ismirrored = 1;
int hasRegression = 0;


for(i = 0; i < 10; i++) {
scanf("%d", &arr[i]);
}


for(i = 0; i < 10; i++) {
printf("%d ", arr[i]);
}

for(i = 0; i < 5; i++) {
if(arr[i] < arr[9-i]){
ismirrored = 0;
break;
}
else if(arr[i] > arr[9-i]){
hasRegression = 1;
break;
}
temp = arr[i];
arr[i] = arr[9 - i];
arr[9 - i] = temp;
}

if(hasRegression){
} else {
for(i = 0; i < 10; i++) {
printf("%d ", arr[i]);
}
}

return 0;
}


int laba6(void) {
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



void selectionsort(int arr[], int n) {
int i, j, minindex, temp;

for (i = 0; i < n - 1; i++) {
minindex = i;
for (j = i + 1; j < n; j++) {
if (arr[j] < arr[minindex]) {
minindex = j;
}
}
temp = arr[minindex];
arr[minindex] = arr[i];
arr[i] = temp;
}
}

int dop6() {
int arr[2][3];

printf("Âåäèòå\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
scanf("%d", &arr[i][j]);
}
}


for (int i = 0; i < 2; i++) {
selectionsort(arr[i], 3);
}

printf("\nÂûâåäåíî\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}

return 0;
}

unsigned int reversebits(unsigned int num, unsigned int bits)
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

int laba7(void)
{
    unsigned int num;

    printf("Ââåäèòå ÷èñëî: ");
    scanf("%u", &num);

    unsigned int bits = sizeof(num) * 8;

    printf("Ðåâåðñèâíîå ÷èñëî: %u\n", reversebits(num, bits));

    return 0;
}
