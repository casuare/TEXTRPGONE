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

        case 1:
        printf("The Attack Missed!");
        
        case 2:
        printf("The Attack Missed!");
        
        case 3:
        printf("The Attack Hit Your Feet!");
        
        case 4:
        printf("The Attack Hit Your Right Leg!");
        
        case 5:
        printf("The Attack Hit Your Torso!");
        
        case 6:
        printf("The Attack Hit Your Right Hand!");
        
        case 7:
        printf("The Attack Hit Your Right Arm!");
        
        case 8:
        printf("The Attack Hit Your Left Hand!");
        
        case 9:
        printf("The Attack Hit Your Left Arm!");
        
        case 10:
        printf("The Attack Hit Your Head!");
    }
    }
}
