#include<stdio.h>
int main(){
    char name;
    printf("Enter Name: \n");
        scanf("%c",&name);
    int choice=0, Initial_Bal = 0, amt=0, fd_interest, option, nme, mode;
    do{
        printf("Welcome to A-Z bank :\n");

        printf("Set Initial_Bal: \n");
        scanf("%d",&Initial_Bal);
        printf("Enter 1 to choose Account\n");
        printf("Enter 2 to choose Deposit Money\n");
        printf("Enter 3 to choose Withdraw Money\n");
        printf("Enter 4 to choose Check account balance\n");
        printf("Enter 5 to choose Show interest\n");
        printf("Enter 6 to choose exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Account\n");
                    printf("Enter 1 to select savings\n Enter 2 to select checking");
                    scanf("%d",&option);
                    //option = 's';
                    if((option == 1) && (Initial_Bal <= 0)){
                        goto create_acc;
                    } else if (option == 2){
                        if(Initial_Bal > 0)
                            printf("Initial Balance: %d\nAccount Type: Savings\n Name: %c\n",Initial_Bal,name);
                        else
                        {
                            printf("Create account to check balance\n click 'y' to create account\n");
                            scanf("%d",&mode);
                            if(mode == 1)
                                goto create_acc;
                        }
                    }
                    else
                        printf("You already have account you cannot open savings\n");

                    break;

            case 2: printf("Deposit Money: \n");
                      scanf("%d",&amt);
                      if(Initial_Bal > 0){
                        Initial_Bal = Initial_Bal + amt;
                      }
                      printf("Updated Balance: %d",Initial_Bal);
                      break;

            case 3: printf("Withdraw Money: \n");
                    scanf("%d",&amt);
                    if((Initial_Bal > 0) && (Initial_Bal >= amt)){
                        Initial_Bal = Initial_Bal - amt;
                        printf("Updated Balance: %d",Initial_Bal);
                      }
                    else
                        printf("Your Balance is: %d, cannot withdraw money",Initial_Bal);
                    break;

            case 4: printf("Name: %c\nYour Account Balance is: %d \n",name,Initial_Bal);
                    break;

            case 5: printf("Savings Interest: \n");
                      fd_interest = Initial_Bal * 5;
                      printf("Interest Value: %d",fd_interest);
                      break;

            case 6:
                    printf("EXIT");
                    break;

            default: printf("Select Options Given");

        }

    }
    while(choice<6);
    create_acc:
                            printf("Create Account:\n");
                            printf("Enter Num for Name: ");
                            scanf("%d",&nme);
                            printf("Initial Balance: %d\nAccount Type: Savings\n Name: %d\n",Initial_Bal,nme);
}
