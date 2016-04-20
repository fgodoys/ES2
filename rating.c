#include <stdio.h>


int main()
{
	float rounds, kills, deaths; 
	float killrating, survivalrating, roundswithmultiplekillsrating, rating;
	float averageKPR = 0.679, averageSPR = 0.317, averageRMK = 1.277;
	int k[5];// 1k, 2k, 3k, 4k, 5k (por round)
	
	killrating = (kills/rounds)/averageKPR;
	survivalrating = ((rounds-deaths)/rounds)/averageSPR;
	roundswithmultiplekillsrating = ((k[0]+(4*k[1])+(9*k[2])+(16*k[3])+(25*k[4]))/rounds)/averageRMK;
	
	
	
	
	rating = (killrating + 0.7*survivalrating + roundswithmultiplekillsrating)/2.7;
	
	printf("%0.2f\n\n",rating);
	
	
}
