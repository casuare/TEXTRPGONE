#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int enmynmbr = 2;

int main() {
int snty = 10;
 combat();
}

int combat() {
int j;
int i;
int selfwnd[] = {0,0,0,0,0,0,0,0,0};
int enmywnd[9][enmynmbr];    
 for(j=0; j<9; j++){
   for(i=0; i<enmynmbr; ++i){
       enmywnd[j][i]=0;
   }
}
srand(time(NULL));  
int hitarea = 0;
bool selfht = true;
if (selfht = true) {
    int hitarea = rand() % 11; 
    switch (hitarea) {
        case 0:
        printf("The Attack Missed!");
         break;

        case 1:
        printf("The Attack Missed!");
         break;
        
        case 2:
        printf("The Attack Missed!");
         break;
        
        case 3:
        printf("The Attack Hit Your Feet!");
         break;
        
        case 4:
        printf("The Attack Hit Your Right Leg!");
         break;
        
        case 5:
        printf("The Attack Hit Your Torso!");
         break;
        
        case 6:
        printf("The Attack Hit Your Right Hand!");
         break;
        
        case 7:
        printf("The Attack Hit Your Right Arm!");
         break;
        
        case 8:
        printf("The Attack Hit Your Left Hand!");
         break;
        
        case 9:
        printf("The Attack Hit Your Left Arm!");
         break;
        
        case 10:
        printf("The Attack Hit Your Head!");
         break;
    }
    }
}
