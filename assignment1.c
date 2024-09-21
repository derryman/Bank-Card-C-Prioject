/*
-Derry Mahon
-Program to enable bank customers to manage their PIN number on an ATM
-01/11/2022
*/
#include <stdio.h>

int main()
{
    int option;  //which menu option user selects
    int ogpin = 1234; //default pin
    int pin;  //inputted pin
    int newpin; //user generated pin
    int i = 0; //incorrect attempts counter
    int counter = 0;  //correct attempts counter
    int temp = newpin; //overwrites user inputted pin over default
    
    while(1)
    {
        //Menu option allowing user to input numbers 1-4 as valid inputs 
        printf("1. Enter Pin and Verify correct \n");
        printf("2. Change Pin Number\n");
        printf("3. Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly\n");
        printf("4. Exit Program\n\n\n");
        printf("Enter your choice :  \n");
        scanf("%d",&option);
        //prevents entering of character
        if(getchar() == '\n')
        {
            //option variable enters into switch statement
            switch(option)
            {
                //when user selects option 1 case(1) runs etc
                case 1:
                {   
                    printf("Enter your pin number:");
                    scanf("%d",&pin);
                    //if the user input is = to the default pin the programme recognises this and also counts it as correct input ie correct counter + 1
                    if (pin == ogpin)
                    {
                        printf("%04d is the correct pin number\n", pin);
                    
                        counter = counter + 1;
                    }
                    //the else statement is when the user inputted pin != to the default so it counts it as incorrect ie incorrect counter (i) + 1
                    else 
                    {
                        printf("Incorrect please try again!\n");
                    
                        i = i + 1;
                    }                
                    break;
                }        
                case 2:
                {   
                    //checking if the user enters the correct pin to allow access to change it counter + 1 if correct 
                    printf("Please enter your current PIN: ");
                    scanf("%d", &pin);
                
                    counter = counter + 1;
                    //checks if inputted pin = the current user pin 
                    if(pin == ogpin)
                    {
                        printf("Please enter your new four digit pin: ");
                        scanf("%d",&newpin);
                        //code to check if pin is between 0000-9999
                        if(newpin < 0 || newpin > 9999)
                        {
                            printf("This is not a valid 4 digit PIN\n");
                        }                 
                        else
                        {
                        //makes new pin the users pin and prints it as proof of change 
                            temp = newpin;
                            ogpin = temp;
                    
                            printf("%04d is your new pin\n", newpin);
                        }                     
                    }
                //if incorrect i + 1 and message to notify user incorrect pin inputted
                    else
                    {
                        printf("Incorrect PIN please try again!\n");
                    
                        i = i + 1;
                    }
                    break;
                }
                //displays value of counter and i which is correct and incorrect pin attempts
                case 3:
                { 
                    printf("You have inputted the correct pin %d times\n", counter);
                    printf("You have inputted the incorrect pin %d times\n", i);
    
                    break;
                }   
                //case 4 terminates the program
                case 4:
                {
                    printf("Ending Program, Have a nice day\n");

                    return 0;
                    break;
                }
                //the default ie if anything other than the integers 1-4 are entered displays a message notifiying the user
                default:
                {    
                    printf("Invalid input please try again\n");
                    break;
                }
            }
        }
        }  
        return 0;
    }