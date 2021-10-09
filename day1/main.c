#include <stdio.h>
//#include <stdlib.h>

#include <assert.h>
#include "includes.h"

void test_uppertolower();
void test_areaofcircle();
void test_simpleandcompound();
void test_celsiusfahrenheit();
void test_evenorodd();
void test_leapyear();


int main()
{
 //  test_uppertolower();  //1. convert upper case to lower.

 //  test_areaofcircle();  //2. calculate area of circle.

  // test_simpleandcompound(); //3. calculate simple and compound interest.

 //  test_celsiusfahrenheit(); //4. convert celsius to fahrenheit and vice-versa.

 // test_evenorodd();  //5. check entered number is even or odd.

  //   test_leapyear(); //6. check entered year is leap year or not.

     assert(left_shift_operator(5) == 5); //7. find power of 2^N using left shift operator.

    return 0;
}


void test_uppertolower(){

assert(upper_to_lower('C') == 'c');
assert(upper_to_lower('A') == 'a');
assert(upper_to_lower('J') == 'j');
assert(upper_to_lower('Z') == 'z');
assert(upper_to_lower('X') == 'x');
}

void test_areaofcircle(){

    printf("%f\n", area_of_circle(5));
    printf("%f\n", area_of_circle(3.3));  //use printf for float
    printf("%f\n", area_of_circle(7));
    printf("%f\n", area_of_circle(9.6));
    assert(area_of_circle(5) == 78.5);
 //  assert(area_of_circle(3.3) == 34.194599);  //will not work for float and double
 //  assert(area_of_circle(7) == 153.860001);  //will work for int and char
 //  assert(area_of_circle(9.6) == 289.382416);
}

void test_simpleandcompound(){

    printf("%f\n", simple_interest(5000,12.5,6.7));
    printf("%f\n", simple_interest(1000,24,10.7));
    printf("%f\n", simple_interest(10000,4.5,2.7));
    printf("%f\n", simple_interest(6000,10.5,4.7));

    printf("%f\n", compound_interest(5000,12.5,6.7));
    printf("%f\n", compound_interest(1200,2,5.4));
    printf("%f\n", compound_interest(10000,4.5,2.7));
    printf("%f\n", compound_interest(6000,10.5,4.7));

}

void test_celsiusfahrenheit(){

    printf("%f\n", celsius_to_fahrenheit(25));
    printf("%f\n", celsius_to_fahrenheit(32));
    printf("%f\n", celsius_to_fahrenheit(27));
    printf("%f\n", celsius_to_fahrenheit(21));

    printf("%f\n", fahrenheit_to_celsius(77));
    printf("%f\n", fahrenheit_to_celsius(90));
    printf("%f\n", fahrenheit_to_celsius(99));
    printf("%f\n", fahrenheit_to_celsius(94));

}

void test_evenorodd(){

assert(is_even_or_odd(2) == 1);
assert(is_even_or_odd(3) == 2);
assert(is_even_or_odd(8) == 1);
assert(is_even_or_odd(9) == 2);

}

void test_leapyear(){

assert(is_leap_year_or_not(2019) == 2);
assert(is_leap_year_or_not(2020) == 1);
assert(is_leap_year_or_not(2000) == 1);
assert(is_leap_year_or_not(2014) == 2);

}
