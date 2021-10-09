#include <stdio.h>
#include <math.h>
#include "includes.h"


char upper_to_lower(char x){

char lcase;

  lcase = x + 32; //ASCII value of A = 65, a = 97 // 97-65=32

  return lcase;

}

float area_of_circle(float r){

float area;

area = PI * RADIUS(r); // area = Pi*r*r;

return area;
}

float simple_interest(float p, float t, float r){

float si;

si = (p * t * r) / 100;  //SI = (PTR)/100;

return si;

}

float compound_interest(float p, float t, float r){

float ci;

ci = p * (pow((1 + r / 100), t)); // CI = P[1 + R/100](pow T)

return ci;
}

float celsius_to_fahrenheit(float c){

float fahrenheit;

fahrenheit = ((9 * c)/ 5) + 32; // fahrenheit = ((9*celsius) /5)+ 32;

return fahrenheit;

}

float fahrenheit_to_celsius(float f){

float celsius;

celsius = (f - 32) * 5 / 9; // celsius = (f - 32) * 5/9;

return celsius;

}

int is_even_or_odd(int num){

 if(num % 2 == 0)
    return 1;    //return 1; if its even
 else
    return 2;   //return 2; if its odd

}

int is_leap_year_or_not(int y){

if((y%4 == 0 )&& (y%100 != 0 || y%400 == 0)){
    return 1;  //return 1; if its leap year
}else{
   return 2;  //return 2; if its not leap year
}

}

int left_shift_operator(int n){

    int i;

    for(i = 0; i <= n; i++){  // 1 << 0 = 2^0; 1 << 1 = 2^1; 1 << 2 = 2^2;
        printf("%d ",(1<<i)); // for n = 5, 2^0 = 1; 2^1 = 2; 2^2 = 4; 2^3 = 8; 2^4 = 16; 2^5 = 32;
    }

 return n;
}
