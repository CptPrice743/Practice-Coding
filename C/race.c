#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Structres
struct Race{
    int numberOfLaps;
    int currentLap;
    int* firstPlaceDriverName;
    char* firstPlaceRaceCarColor;
};

struct RaceCar{
    char* driverName;
    char* raceCarColor;
    int totalLapTime;
};


//printf codes
int printIntro(void){
    printf("Welcome to our main event digital race fans!\n");
    printf("I hope everybody has their snacks because we are about to begin!\n");
}

int printCountDown(void){
    printf("Racers Ready! In.....\n");
    printf("5\n");
    printf("4\n");
    printf("3\n");
    printf("2\n");
    printf("1\n");
    printf("Race!\n");
}

int printFristPlaceAfterLap(struct Race race){
    printf("After lap number %d\n", race.numberOfLaps);
    printf("First Place Is: %s\n", race.firstPlaceDriverName);
}

int printCongratulation(struct Race race){
    printf("Let's all congratulate %s in the %s race car for an amazing perfromance.\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
    printf("It truely was a great race and everybody have a goodnight!\n");
}

//Logic Functions 
int calculateTimeToCompleteLap(){
    int speed = 2;
    int acceleration = 1;
    int nerves = 3;

    return speed+acceleration+nerves;

}

int updateRaceCar(struct RaceCar* raceCar){
    raceCar->totalLapTime = calculateTimeToCompleteLap() ;
}

int updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){
    if(raceCar1->totalLapTime <= raceCar2->totalLapTime){
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->firstPlaceRaceCarColor;
    } else {
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->firstPlaceRaceCarColor;
    }
}



int main(){
    printIntro();
    printCountDown();
}