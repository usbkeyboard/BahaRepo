// Project.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class electrode{
public:
	double potentialRaznost;
	double fullResistance;
	double removalPotentialRaznost;
	double noiseElectrical;
	electrode()
	{
		potentialRaznost=0.0;
		fullResistance=0.0;
		removalPotentialRaznost=0.0;
		noiseElectrical=0.0;
	}
	void inputPotentialRaznost(double izmenPotentialRaznost)
	{
		if(izmenPotentialRaznost!=0)
		{
			potentialRaznost=izmenPotentialRaznost;
		}
	}
	void inputFullResistance(double izmenFullResistance)
	{
		if(izmenFullResistance!=0)
		{
			fullResistance=izmenFullResistance;
		}
	}
	void inputRemovalPotentialRaznost(double izmenRemovalPotentialRaznost)
	{
		if(izmenRemovalPotentialRaznost!=0)
		{
			removalPotentialRaznost=izmenRemovalPotentialRaznost;
		}
	}
	void inputNoiseElectrical(double izmenNoiseElectrical)
	{
		if(izmenNoiseElectrical!=0)
		{
			noiseElectrical=izmenNoiseElectrical;
		}
	}

};

electrode e;

class DataCaptureBl{

public:
	int portNum;
	DataCaptureBl()
	{
		portNum=1;
	}
	void inputPortNum(int newPortNum)
	{
		if(newPortNum>0)
		{
			portNum=newPortNum;
		}
	}
	static double izmElectrode(void)
	{
		//electrode e;

		double fullResistance; //here must be received code by bl
		double noiseElectrical;
		double potentialRaznost;
		double removalPotentialRaznost;

		//fullResistance=receive(1);
		//noiseElectrical=receive(2);		

		e.inputFullResistance(fullResistance); // we use functions because we must.We need these functions to fill 
		e.inputNoiseElectrical(noiseElectrical);
		e.inputPotentialRaznost(potentialRaznost);
		e.inputRemovalPotentialRaznost(removalPotentialRaznost);
		
	}
	static void podkluchit()
	{
		//code which connects us to data capture block
		//we will open ports to send or receive data

	}
	static void otkluchit()
	{
		//code which
		//we will close ports to end
	}


};

class Checker{
public:

	//bool b;

	Checker()
	{
		//b=0;
	}

	bool checkElectrode(double potentialRaznost,double fullResistance,double removalPotentialRaznost, double noiseElectrical)
	{
		bool b;
		b=0;
		//

		double truePotentialRaznost;
		double trueFullResistance;
		double trueRemovalPotentialRaznost;
		double trueNoiseElectrical;

		// code where we are taking data from source file
		

		if((potentialRaznost==truePotentialRaznost)&(fullResistance==trueFullResistance)&(removalPotentialRaznost==trueRemovalPotentialRaznost)&(noiseElectrical==trueNoiseElectrical))

		{
			b=true;
		}
		else
		{
			b=false;
		}

		return b;
	}




};

class UserInt{
public:
	void output(bool &st)
	{
		switch(st)
		{
			case true:cout<<"true";
			break;
			case false:cout<<"false";
			break;


		}

	}
	void input()
	{


	}
	
};

int main()
{
	int n;
	cout<<"please,connect electrode to camera"<<endl;	
	cout<<"insert n"<<endl;
	cin>>n;

	for(int i=0;i<=n;i++)
	{
		
		//cout<<"please,connect electrode to camera"<<endl;	
		
		/*DataCaptureBl bl;
		bl.podkluchit();
		bl.izmElectrode();
		bl.otkluchit();
		Checker ch;
		electrode ec;*/
		//ch.checkElectrode();

	}
	return 0;
}

