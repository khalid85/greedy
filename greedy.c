/*
* Edx-Harvardx,CS50, Pset1
* Greedy.c 
* 
* 
* By Khalid ATIF
* 
*  The task of Greedy was normally to ask the user how much change is owed, and then spits out
* the minimum number of coins with which the said change can be made.
*
* Since a counter was used for this, I've added a few more to count the amount of quarters, 
* dimes, nickels, and pennies owed as well. 
*
*
*
*
*
*/



#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

// Declaring value of each pieces and value of counters. This will be used to print the number of coins used.
{


int quarter = 25;
int dime = 10; 
int nickel = 5;
int penny = 1;

                          
int coin_counter = 0;
int count_quarter = 0;
int count_dime = 0;
int count_nickel = 0;
int count_penny = 0;

// prompt user to input amount to change. 

    
    
    float input;
    {
        
        printf ("Hi! What amount would you like to change?:\n");
        input = GetFloat();
    }
    while (input <= 0)
    {
        printf("Please enter a positif  number");
    }
    
// Change input from dollars to cent.
    
     
     float money_converted = round(input * 100);
    
    
    

                            
 
 // Calculating the amount of coins and number of each coin due.
 
       
        while(quarter <= money_converted)
        {
            money_converted = round(money_converted - quarter);
            coin_counter++;
            count_quarter++;
        }
        
        
        while (dime <= money_converted)
        {
            money_converted = round(money_converted - dime);
            coin_counter++;
            count_dime++;
        }
        
        
        while (nickel <= money_converted)
        {
            money_converted = round(money_converted - nickel); 
            coin_counter++;
            count_nickel++;
        }
        
        
        while (penny <= money_converted)
        {
            money_converted = round(money_converted - penny);
            coin_counter++;
            count_penny++;
        }
        
        
        
        {
            printf ("%d coins \n"  , coin_counter);
            printf ("Or \n");
            printf ( "%d quarter \n", count_quarter);
            printf ("%d dime \n", count_dime);
            printf ("%d nickel \n", count_nickel);
            printf ("%d penny \n", count_penny);
            
        }
        
        return 0;
        
        
        
}

    
    
