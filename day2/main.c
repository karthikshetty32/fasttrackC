#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "header.h"

void test_sumof5digits();

void test_reversenumber();

void test_occuranceofnumber();

void test_palindrome();

void test_generateprimenumber();

void test_sumofseries();

void test_armstrongnumbers();

void test_amicable();

void test_volume();

void test_electricty_bill();

int main()
{
 // test_sumof5digits(); //1. sum of five digits number

 // test_reversenumber(); //2. reverse the number

 // test_occuranceofnumber(); //3. occurance of number

 //  test_palindrome();  //4. check palindrome

 // test_generateprimenumber(); //5. generate prime number

 // test_sumofseries(); //6. sum of series

  // test_armstrongnumbers(); //7. Armstrong numbers

  // test_amicable();  //8. Amicable numbers

 //   test_volume(); //10. volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone

    test_electricty_bill(); //11. To generate electricity charge

    return 0;
}


void test_sumof5digits(){

assert(sum_of_five_digits(12345) == 15);
assert(sum_of_five_digits(56789) == 35);
assert(sum_of_five_digits(98056) == 28);

}


void test_reversenumber(){

assert(reverse_number(12345) == 54321);
assert(reverse_number(56789) == 98765);
assert(reverse_number(980156) == 651089);

}

void test_occuranceofnumber(){

assert(occurrence_of_digit(34358393,3) == 4);
assert(occurrence_of_digit(56587995,5) == 3);
assert(occurrence_of_digit(69943529,9) == 2);
}

void test_palindrome(){

assert(palindrome_check(12321) == 1);
assert(palindrome_check(98765) == 0);
assert(palindrome_check(56788765) == 1);
assert(palindrome_check(345687) == 0);
}

void test_generateprimenumber(){

//generate_prime_numbers(5);
assert(generate_prime_numbers(5) == 5);
assert(generate_prime_numbers(15) == 15);

}

void test_sumofseries(){

assert(display_sum_of_series(4) == 1234);
assert(display_sum_of_series(3) == 123);

}

void test_armstrongnumbers(){

 assert(armstrong_numbers(153) == ARMSTRONG);
 assert(armstrong_numbers(125) == NOT);
}

void test_amicable(){

  assert(amicable_numbers(220, 284) == AMICABLE);
  assert(amicable_numbers(220, 285) == NOT);
}

void test_volume()
{
    printf("the volume of the given shape is %f", volume_of_shapes(3));
}

void test_electricty_bill()
{
    assert(electricity_charge(150)==150);
    assert(electricity_charge(210)==215);
    assert(electricity_charge(320)==390);
    printf("ABCD %f",electricity_charge(277));
    //assert(electricity_charge(320)==390);
}
