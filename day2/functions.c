
#include "header.h"

int sum_of_five_digits(unsigned int input){
//input = 12345 // sum=15

    int sum = 0;
    int power = 10000, reminder, digit_in_hand;
    int count = 0;

     while(count < 5)
   // while(power != 0)
    {
        reminder = input % power;  //reminder 2345
        digit_in_hand = input/ power; //quoitent 1
        sum = sum + digit_in_hand;  //sum + quoitent
        input = reminder; //input = remaining reminder
        power = power / 10; // decrement power by 10
        count++; //loop 5 times
    }
    return sum;
}



int reverse_number(unsigned int input){
//input = 12345   //reverse = 54321
int reminder, reverse  = 0;

  while(input != 0){
   reminder = input % 10; //get last digit
   reverse = reverse*10 + reminder; //sum + reminder(50 + 4)
   input = input/10; //quoitent

  }
  return reverse;
}

int occurrence_of_digit(unsigned int input, unsigned int number){
//input = 34353893 //number= 3-->count will be 4 times

int reminder, count=0;

while(input != 0){
    reminder = input % 10;

    if(number == reminder){
        count++;
        input = input / 10;
    }

}
  return count;

}

int palindrome_check(unsigned int input){
 //input = 12321 //output = 12321

 int reversed;

 reversed = reverse_number(input);

 if(reversed == input){
    return 1;
 }
  return 0;
}


int is_primenumber(int number){

  int i;

  for(i=2; i <= number/2; i++){
     if(number%2 == 0){
        return 0;
     }
     return 1;
  }
}


int generate_prime_numbers(unsigned int limit){
    int input = 2, count = 0;

    while(count < limit){
         if(is_primenumber(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }
    return count;
}

int display_sum_of_series(unsigned int value)
{
    int temp , i = 1, j , power , sum =0; //taking a temporary variable to store the data
    while (i <= value) //while number is not reached the value
    {
        temp = 0; //Initializing the temporary variable to 0 This variable will hold the value of the element of the series
                    //after every for loop
        power = 1; // Initializing the power variable to 1 to start with unit value digit

        for(j = 0; j < i; j++) //Getting the sequence of 1 11 111 for the given  number by doing 1 1+10 1+10+100 .....
        {
           temp = temp + power; //generating the number of the series
           power = power * 10; //Incrementing the power to move towards LHS
        }

        //printf("%d \t", temp);
        sum = sum + temp; //Summing up the numbers of the series
        i++;
    }
    return sum;
}

int armstrong_numbers(unsigned int number)
{
    int temp, reminder,sum=0;
    temp = number; //storing the number in a temporary variable
    while (temp != 0)
    {
        reminder = temp % 10; //Taking digit by digit from RHS
        sum = sum+(reminder * reminder * reminder); //Summing the cubes of each digit
        temp = temp / 10; //Moving towards the next digit by eliminating the right most digit
    }
    //printf("ABCD %d\t", sum);
    if(sum == number) //If the armstrong condition is true return ARMSTRONG else return NOT
        return ARMSTRONG;
    return NOT;
}

int amicable_numbers(int first, int second)
{
    int i, j, sum1 = 0, sum2 = 0; //initializing the variables for loop and summation

    for(i=1 ;i <= first / 2; i++) //Checking for the divisors of first number and summing them
        {
            if(first % i == 0)
            {
                sum1 = sum1 + i;
                //printf ("%d \t",i);
            }

            //continue;
        }

    for (j=1 ;j <= second/ 2; j++) //Checking for the divisors of second number and summing them
        {
            if(second % j == 0)
            {
                sum2 = sum2 + j;
                //printf ("%d \t",j);
            }

            //continue;
        }
    //printf("%d\t%d",sum1,sum2);
    if (sum1 == second && sum2 == first) //Checking for amicable or not if true return AMICABLE else return NOT
        return AMICABLE;

    return NOT;
}

float volume_of_shapes(int shape) // 1 for Cube, 2 for Cuboid, 3 for Sphere, 4 for Cylinder, 5 for Cone
{
    int side, height, width, length, radius, rad, hight, radc, hightc;
    float volume, tt = 22, four =4, three = 3, seven = 7; //Using fixed value variables get appropriate float values
    switch (shape)
    {
    case 1:
        {
            printf("Enter the dimension of the side of the cube\n"); //Asking for input
            scanf("%d", &side); //Storing the input
            volume = side * side * side; //Volume of cube = side^3
            break;
        }
    case 2:
        {
            printf("Enter the dimensions of the height, width and length of the cuboid\n"); //Asking for input
            scanf( "%d%d%d", &height, &width, &length); //Storing the input
            volume = height * width * length; //Volume of cuboid = length * width *height
            break;
        }
    case 3:
        {
            printf("Enter the dimensions of the radius of the sphere\n"); //Asking for input
            scanf("%d", &radius); //Storing the input
            volume = (four * tt * radius * radius * radius) / (seven * three); //Volume of spehere = (4 / 3) (pi) (radius ^ 3)
            break;
        }
    case 4:
        {
            printf("Enter the dimensions of the radius and height of the cylinder\n"); //Asking for input
            scanf("%d%d", &rad, &hight); //Storing the input
            volume = tt / seven * rad * rad * hight; //Volume of cylinder = (4 / 3) (pi) (radius ^ 2) height
            break;
        }
    case 5:
        {
            printf("Enter the dimensions of the radius and height of the cone\n"); //Asking for input
            scanf("%d %d", &radc, &hightc); //Storing the input
            volume = tt * radc * radc * hightc / (seven * three) ; //Volume of cone = (4 / 3) (pi) (radius ^ 2) height / 3
            break;
        }
    }
    return volume;
}

float electricity_charge(int consumed)
{
    //Check for the amount consumed <200 / 200 -300 / >300
    //For units upto 200 Rs 1pu between 200 and 300 1.5 pu above 300 2 pu
    float amount = 0; // Initializing the amount to zero
    int extra; // Variable to hold the extra units consumed
    if (consumed <= 200) // If the reminder of consumed and 200 is less than 1 then less than 200 units are consumed
        amount = consumed; // Amount is the number of units consumed

    else if (consumed>200 && consumed<=300) // If the consumed unit is between 200 and 300
        {
            amount = 200; //Minimum of 200 Rs. for the first 200 units
            extra = consumed-200; //Extra units consumed above 200
            amount = amount + (1.5 * extra); // Total amount 1.5pu for extra units
        }

    else if (consumed > 300) // for consumption above 300 units
        {
            amount = 350; // Basic amount = 200+1.5*100 = 350rs
            extra = consumed-300; //Units above 300
            amount = amount + (2 * extra); //Total amount
        }

    return amount;
}


