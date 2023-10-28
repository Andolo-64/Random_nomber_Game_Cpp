#include <iostream>
#include <string>

using namespace std;

void start()
{
	cout << "gjet et tall melom 1 og 100 \n";
}
void input(string& stt)
{
	getline(cin, stt);
}
void getRandom(int& RandomTal)
{
	srand(static_cast<unsigned>(time(0)));
	RandomTal = rand() % 100 + 1;
}

int main()
{
	//strings
	string playerText = "1";

	// ints
	int gangerPrøvd = 0;
	int RandomTal = 0;

	//bools
	bool Vone = false;

	//functions
	start();
	getRandom(RandomTal);

	//debug tale du skal gjete
	//cout << RandomTal << "\n";
	
	while (Vone == false)
	{
		//functions
		input(playerText);

		//conwert string to int
			int tallSkreve = stoi(playerText);
	
		//er støre eler mindre en Randomtal
		if (tallSkreve != RandomTal)
		{
			if (tallSkreve <= RandomTal)
			{
				cout << "For laft Tall\n ";
			}
			if (tallSkreve >= RandomTal)
			{
				cout << "For Høyt Tall\n ";
			}
		}
		gangerPrøvd++;
		
		if (tallSkreve == RandomTal)
		{
			cout << "du Vant!!!\n";
			cout << "Og prøvde " << gangerPrøvd << " ganger" <<"\n";
			
			Vone = true;
		}
	}
}





