#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int atm(void){
    printf("\n\tWhat do you want to do ");
    printf("\n\t1.Recieve Money \n\t2.Store Money ");
    printf("\n\t3.Check Balance\n\n\t");
    int ans;
    long long int password;
    long long int setpassword = 120438;
    long long int amount;
    long long int stored_money;
    scanf("%d",&ans);

    if(ans==1){
        printf("\n\tEnter your password to continue ");
        scanf("%lld",&password);
        if(password==setpassword){
            printf("\n\tHow much money do you want to recieve ?");
            scanf("%lld",&amount);
            if(amount<1000){
                printf("\n\tTry more than 1000tk ");
            }
            else if(amount>1000){
                printf("\n\tYou have recieved %lld tk ",amount);
                printf("\n\tCurrent balance %lld",100000-amount);
            }
        }
        else {
            printf("\n\tError!!");
        }
    }
    else if(ans==2){
        printf("\n\tEnter the amount of money you want to store ");
        scanf("%lld",&stored_money);
        printf("\n\tYour new account balance id %lld ",100000+stored_money);
    }
    else if(ans==3){
        printf("\n\tYour balance id %lld ",100000);
    }
    else{
        printf("\n\tError!!!!!!");
    }
}
int main(void){
    printf("\n\tEnter your name to continue ");
    char name[10];
    scanf("%s",&name);
    printf("\n\tWelcome %s enter your account number to continue ",name);
    long long int account_number;
    scanf("%lld",&account_number);
    long long int system = 1714418695;
    long long int set_password = 120438;
    long long int password;
    if(system==account_number){
        printf("\n\tEnter your password to continue ");
        scanf("%lld",&password);
        if(password==set_password){
            atm();
        }
        else{
            printf("Error!");
        }
    }
    else{
        printf("\n\tSomething went wrong ");
        abort();
    }
    getch();
    return 0;
}