#include<fstream>
#include<iostream>
#include"haha.h"

using namespace std;

int main()
{
	//declare fin and fout
	ifstream fin;
	ofstream fout;

	//declare class HAHA and its object
	HAHA ha;

	//declare the member data in class HAHA
	float K;
	float RA, RB;
	float SA, SB;

	
	//command the computer to read file.in(for the first line)
	fin.open("file.in",ios::in);
	fin>>K>>RA>>RB;

	//set function call
	ha.set(K, RA, RB);

	//command the computer to output the results to file.out(the first line)
	fout.open("file.out",ios::out);
	fout<<RA<<" "<<RB<<endl;

	//start from second line
	while(fin>>SA)
	{
		SB=1-SA;
		fout<<ha.getRA(SA)<<" "<<ha.getRB(SB)<<endl;
	}

	return(0);
}
