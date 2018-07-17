#include<cmath>
#include"haha.h"

void HAHA::set(float k,float a,float b)
{
	K=k;
	RA=a;
	RB=b;
}


float HAHA::getEA()
{
	return 1/(1+ pow(10,((RB-RA)/400)));
}
	
float HAHA::getEB()
{
	return 1/(1+pow(10,((RA-RB)/400)));
}


float HAHA::getRA(float SA)
{
	float temp_a;
	temp_a=RA;
	temp_a = temp_a + K*(SA- getEA());
	RA =round( temp_a);
	return RA;
}

float HAHA::getRB(float SB)
{
	float temp_b;
	temp_b=RB;
	temp_b = temp_b + K*(SB- getEB());
	RB =round( temp_b);
	return RB;

}

