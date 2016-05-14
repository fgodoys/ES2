#include <stdio.h>

float killrating (float k, float r, float aKPR);
float survivalrating (float r, float d, float aSPR);
float roundswithmultiplekillsrating (float k[6], float r, float aRMK);
void getdados();

int main()
{
	float rounds, kills, deaths;
	float rating;
	float averageKPR = 0.679, averageSPR = 0.317, averageRMK = 1.277;
	float k[6];// 1k, 2k, 3k, 4k, 5k (por round)
	int i;

	do
	{
		printf("Total Rounds: ");
		scanf("%f", &rounds);
		if(rounds<=0)
	        return;
	
		printf("Total Kills: ");
		scanf("%f", &kills);
	
		printf("Total Deaths: ");
		scanf("%f", &deaths);
	
		for(i=1; i<=5;i++)
		{
			printf("Total %iK: ",i);
			scanf("%f", &k[i]);
		}
	
		rating = (killrating(kills, rounds, averageKPR) + 0.7*survivalrating(rounds, deaths, averageSPR) + roundswithmultiplekillsrating(k, rounds, averageRMK))/2.7;
		printf("KRRRRRRRR %f", killrating(kills, rounds, averageKPR));
		printf("SR %f", survivalrating(rounds, deaths, averageSPR));
		printf ("BBBB %f", roundswithmultiplekillsrating(k, rounds, averageRMK));
		for(i=1; i<=5;i++)
		{
			printf("Total %fK: ",k[i]);
		}
		if(rounds!=0)
		printf("Rating: %0.2f\n\n", rating);
	}while(rounds>0);




}

float killrating (float k, float r, float aKPR)
{
	return ((k/r)/aKPR);
}

float survivalrating (float r, float d, float aSPR)
{
	return (((r-d)/r)/aSPR);
}

float roundswithmultiplekillsrating (float k[6], float r, float aRMK)
{
	return ((k[1]+(4*k[2])+(9*k[3])+(16*k[4])+(25*k[5]))/r)/aRMK;
}



