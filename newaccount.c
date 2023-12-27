#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

        void account(long long int password){
           printf("\n\tPassword is - %lld ",password);
           printf("\n\tWelcome %s ",name);
          
        }

int main(){
    printf("\n\t\tWELCOME TO OUR BANK ");
    printf("\n\t\tPRESS ENTER TO CONTINUE - ");
    printf("\n\t----------------------------------------");
    putchar('\a');
    getchar();
    printf("\n\tEnter your name - ");
    char name[50];
    gets(name);
    printf("\n\tEnter your email - ");
    printf("\n\t_________________@gmail.com - ");
    char email[50];
    gets(email);
    printf("\n\tEnter your address - ");
    char add[50];
gets(add);
 printf("\n\tEnter your phone number - ");
    long long int number;
    scanf("%lld",&number);

    printf("\n\tEnter your account password - ");
    long long int password;
    scanf("%lld",&password);
    sleep(2);
    printf("\n\tYour account has been created successfully ! ");
    printf("\n\t Account name - %s ",name);
    printf("\n\tEmail - %s",strcat(email,"@email.com"));
    printf("\n\tPhone number - 0%lld",number);
    printf("\n\tAddress - %s",add);
    
    account(password);
    return 0;
}