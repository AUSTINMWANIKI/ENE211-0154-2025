#include <stdio.h>
#include <stdlib.h>
//Authentication and credentials
int authenticate(int stored_pin, int*failed_attempts);
void updateCredentials(int*pin);

//Display and menu
void displayOptions(void);

//Account operations, using pointers to modify balance
void checkBalance(float balance);
void deposit(float*balance);
void withdraw(float*balance);

int authenticate(int stored_pin, int *failed_attempts){
    int entered_pin;
    printf("Enter your 4-digit PIN:");
    scanf("%d", &entered_pin);

    if(entered_pin == stored_pin){
        *failed_attempts = 0;
        return 1; //Success
    }
    else{
        (*failed_attempts)++;
        printf("Incorrect PIN. Attempt %d of 3.\n", *failed_attempts);
        return 0; //Failure
    }
}

void displayOptions(void){
    printf("\nATM Menu");
    printf("1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Update PIN Credentials\n");
    printf("5.Exit\n");
    printf("Select an option (1-5):");
}

void checkBalance(float balance){
   printf("\nYour current balance is: $%.2f\n", balance);
}

void deposit(float*balance){
   float amount;
   printf("Enter amount to deposit: $");
   scanf("%f",&amount);

   if(amount > 0){
    *balance += amount;
    printf("Successfully deposited $%.2f.New balance: $%.2f\n",amount,*balance);
   }else{
    printf("Invalid deposited amount.\n");
    }
}

void withdraw(float *balance){
    float amount;
    printf("Enter amount to withdraw: $");
    scanf("%f",&amount);

    if (amount <= 0){
        printf("Invalid withdrawal amount.\n");
    }else if (amount > *balance){
     printf("Insufficient funds! Your balance is $%.2f\n", *balance);
    }else{
        *balance -= amount;
        printf("Successfully withdrew $%.2f.Remaining balance: $%.2f\n",amount,*balance);
     }
     }

void updateCredentials(int*pin){
    int new_pin, confirm_pin;
    printf("Enter new 4-digit PIN:");
    scanf("%d",&new_pin);
    printf("Confirm new 4-digit PIN:");
    scanf("%d",&confirm_pin);

    if (new_pin == confirm_pin){
        *pin = new_pin;
        printf("PIN successfully updated!\n");
    }else{
        printf("PINS do not match.Update failed.\n");
        }
 }
int main(){
   int pin = 1234;
   float balance=1000.0f;
   int attempts=0;
   int logged_in = 0;
   int choice;

   // Authentication Loop
   while (attempts < 3){
    if (authenticate(pin, &attempts)){
        logged_in=1;
        break;
    }
   }

   if(!logged_in){
    printf("Too many failed attempts. Account locked.\n");
    return 0;
   }
   // Main ATM Loop
   do{
    displayOptions();
    scanf("%d",&choice);

    switch (choice){
    case 1:
        checkBalance(balance);
        break;
    case 2:
        deposit(&balance);
        break;
    case 3:
        withdraw(&balance);
        break;
    case 4:
        updateCredentials(&pin);
    case 5:
        printf("Invalid option. Please choose between 1 and 5.\n");
        }
   }while(choice != 5);

   return 0;
}



