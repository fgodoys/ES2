#include <stdio.h>


int main()
{
	float rounds, kills, deaths; 
	float rating;
	float averageKPR = 0.679, averageSPR = 0.317, averageRMK = 1.277;
	int k[5];// 1k, 2k, 3k, 4k, 5k (por round)
	
	
	
	do
	{
		
		rating = (killrating(kills, rounds, averageKPR) + 0.7*survivalrating(rounds, deaths, averageSPR) + roundswithmultiplekillsrating(k[5], rounds, averageRMK))/2.7;
		printf("%0.2f\n\n", rating);
	}while(rounds!=0)
	
	
	
	
}

float killrating (float k, float r, float aKPR)
{
	return ((k/r)/aKPR);
}

float survivalrating (float r, float d, float aSPR)
{
	return (((r-d)/r)/aSPR);
}

float roundswithmultiplekillsrating (int k[5], float r, float aRMK)
{
	return (((k[0]+(4*k[1])+(9*k[2])+(16*k[3])+(25*k[4]))/r)/aRMK);
}


