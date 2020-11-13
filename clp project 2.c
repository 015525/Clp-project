#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool running;
void menu();
int regist();
void exit();
int main()
{
    running = true;
    while (running){
        menu();
    }

    return 0;
}


void menu(running){
    int choice;
    printf("\npress 1 to registrate \npress 2 to know number of students registred in the system \npress 3 to add a book\npress 4 to show the library\npress 5 to search for a certain book\npress 6 to exit\n\nplease enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1){
        regist();
    }
    else if (choice == 6){
        exit(running);
        running = false;
    }





}

int regist(){
    struct registe
{
    int id;
    char name[50], email[100], password[32];
}registr;

 registr;

printf("please enter your name : ");
scanf("%S", &registr.name);
printf("please enter your id : ");
scanf("%d", &registr.id);
printf("please enter your email : ");
scanf("%S", &registr.email);
printf("please enter your password : ");
scanf("%S", &registr.password);

return 0;
}

void exit(running){
    char rate[15];
    printf("please enter you feed back(bad, good, excellent):");
    scanf("%s", &rate);
    running = false;

}


