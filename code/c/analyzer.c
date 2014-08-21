// analyzer.c - c version of android app

#include <stdio.h>

#define HIT_DESTROYER		9
#define HIT_CRUISER			7
#define HIT_DREADNOUGHT		5
#define HIT_WAR_SUN			3
#define HIT_CARRIER			9
#define HIT_FIGHTER			9
#define HIT_GROUND_FORCE	8
#define HIT_SHOCK_TROOP		6
#define HIT_PDS				6

typedef enum{
	DESTROYERS,
	CRUISERS,
	CARRIERS,
	FIGHTERS,
	WAR_SUNS,
	DREADNOUGHTS,
	PDS,
	GROUND_FORCES,
	SHOCK_TROOPS} shiptype;



void PrintForces(int forces[], char * player);

int main (){
	int forces[] = {1,2,3,4,5,6,7,8,9};

	PrintForces(forces, "Naalu");



}

void CalculateHits(int forces){
	int casualties;
}

void PrintForces(int forces[], char * player){
	printf("%s Forces -----------------------\n\n", player);
	printf(" Space:\n");
	printf("  Destroyers: %d\n", forces[DESTROYERS]);
	printf("  Cruisers: %d\n", forces[CRUISERS]);
	printf("  Dreadnoughts: %d\n", forces[DREADNOUGHTS]);
	printf("  War Suns: %d\n", forces[WAR_SUNS]);
	printf("  Carriers: %d\n", forces[CARRIERS]);
	printf("  Fighters: %d\n\n", forces[FIGHTERS]);
	printf(" Ground:\n");
	printf("  PDS Units: %d\n", forces[PDS]);
	printf("  Shock Troops: %d\n", forces[SHOCK_TROOPS]);
	printf("  Ground Forces: %d\n", forces[GROUND_FORCES]);

}