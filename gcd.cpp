//
// Created by Vy Phan on 2018-09-14.
//
#include <iostream>
#include "gcd.h"

int gcd(const int a, const int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}