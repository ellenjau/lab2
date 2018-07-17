#include<cmath>
#include"haha.h"

void Haha::set(float k,float a,float b)
{
	K=k;
	RA=a;
	RB=b;
}


float Haha::getEA()
{
	return 1/(1+ pow(10,((RB-RA)/400)));
}
	
float Haha::getEB()
{
	return 1/(1+pow(10,((RA-RB)/400)));
}


float Haha::getRA(float SA)
{
	float temp_a;
	temp_a=RA;
	temp_a = temp_a + K*(SA- getEA());
	RA =round( temp_a);
	return RA;
}

float Haha::getRB(float SB)
{
	float temp_b;
	temp_b=RB;
	temp_b = temp_b + K*(SB- getEB());
	RB =round( temp_b);
	return RB;

}
