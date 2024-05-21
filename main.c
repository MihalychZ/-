#include <stdio.h>
#include "lr.h"
#define N 3
#define K 3

int main()
{
    int c;
    scanf("%d", &c);
    switch(c){
    case 1: return laba1();
    case 2: return dop1();
    case 3: return laba2();
    case 4: return dop2();
    case 5: return laba3();
    case 6: return dop3();
    case 7: return laba4();
    case 8: return dop4();
    case 9: return laba5();
    case 10: return dop5();
    case 11: return laba6();
    case 12: return dop6();
    case 13: return laba7();
    }

    return 0;
}
