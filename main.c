//
//  main.c
//  newproj
//
//  Created by Sergey on 03.02.15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BUFFER 700

int l;

void printArray(int a[], int len){
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    puts("");
}

void intToArray(int value, int s[]) {
    int k = -1;
    while (value) {
        s[++k] = value % 10;
        value /= 10;
    }
    l = k + 1;
}

void sumArray(int number, int a[], int l) {
    a[0] += number;
    for (int i = 0; i < l + 1; i++) {
        if (a[i] / 10 != 0) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
    }
    if (a[l] + 1 != 0) l++;
    
}

void reverse(int a[], int l) {
    int b[l];
    int k = -1;
    for (int i = l - 1; i >= 0; i--) b[++k] = a[i];
    for (int i = 0; i < l; i++) a[i] = b[i];
    
}

int main () {
    int b[] = {13, 4, 52, 54, 2, 5423, 132, 94};
    char mas[BUFFER];
    int n;
    scanf("%d", &n);
    intToArray(n, mas);
    int bas;
    scanf("%d", &bas);
    sumArray(bas, mas, l);
    reverse(mas, l);
    puts("Rezulte:");
    printArray(mas, l);
    
}