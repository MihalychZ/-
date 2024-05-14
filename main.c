#include "header.h"

int main(){
    printf(" %u",0);
    char s;
    scanf("%c",&s);
    if (s == '1')
        return labaone();
    if (s == '2')
        return labatwo();
    if (s == '3')
        return labathree();
    if (s == '4')
        return labafour();
    if (s == '5')
        return labafive();
    if (s == '6')
        return labasix();
    if (s == '7')
        return labaseven();
    else{
        return 0;
    }
}
