//
// Created by João on 18/04/2024.
//
#include <stdio.h>
#include <math.h>

int maiorNum (float a, float b){
    double big1;
    big1 = (a + b + sqrt(pow(a - b, 2)))/2;
    return big1;
}

int main (){
    float a, b, c, x, y;

    scanf("%f %f %f", &a, &b, &c);
    x = maiorNum(a, b);
    y = maiorNum(x, c);
    printf("%.0f eh o maior\n", y);

    return 0;
}