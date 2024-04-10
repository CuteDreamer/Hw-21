#include <iostream>

using namespace std;

class Cat {
	unsigned short age;
	unsigned short legs;
	unsigned short ears;
	string color;
	string name;

public:

	void SetName(string nname) 
	{
		if (nname != "Alex") {
			cout << "Error, name is not " << nname << ". True name is Alex!!";
			}
		else {
			cout << "Ok, name is " << nname;
		}
		name = nname;
	}
	string GetName() 
	{
		return name;
	}

	void SetColor(string ccolor) 
	{
		color = ccolor;
	}

	string GetColor() 
	{
		return color;
	}

	void SetAge(unsigned short aage) 
	{
		if (aage > 33 && aage < 40) {
			cout << "Ok!!";
		}
		else { cout << "Fatal ERROR!! :D "; }
		age = aage;
	}

	unsigned short GetAge() 
	{
		return age;
	}

	void SetEars(unsigned short eears) 
	{
		if (eears < 1 || eears > 2) {
			cout << "You must go to the psychiatrist :D";
		}
		else { cout << "Ok"; }
		ears = eears;
	}
	unsigned short GetEars() 
	{
		return ears;
	}

	void SetLegs(unsigned short llegs) {
		if (llegs < 4 || llegs > 5) {
			cout << "Welcome to our clinic :D";
		}
		else if (llegs > 1 && llegs < 4) {
			cout << "Pure cat...it's not Alex, it's Mr.Crabs";
		}
		else { cout << "Ok"; }
		legs = llegs;
	}

	unsigned short GetLegs()
	{
		return legs;
	}

	void Play() { cout << "Playing with 5 leg...:D"; }
	void Voice() { cout << "Go to ATB! Dont touch my beer! Miu-miu-miu"; }
	void Eating() { cout << "Nice Shaurma, guys!!"; }
	void Walking() { cout << "Walking with beer...."; }
};



class Window {

	string color;
	unsigned short glasses;
	string material;
	bool clean;
	bool working;

public:
	void SetColor(string ccolor)
	{
		color = ccolor;
	}
	string GetColor()
	{
		return color;
	}
	void SetGlasses(unsigned short gglasses)
	{
		if (glasses < 1 || glasses > 3) {
			cout << "You are drunked! Go to sleep..";
		}
		else { cout << "Ok"; }
		glasses = gglasses;
	}
	unsigned short GetGlasses()
	{
		return glasses;
	}

	void SetMaterial(string mmaterial)
	{
		material = mmaterial;
	}

	string GetMaterial()
	{
		return material;
	}
	void SetClean(bool cclean)
	{
		if (cclean == 1) {
			cout << "Its clean!";
		}
		else {
			cout << "Not clean...";
		}
		clean = cclean;
	}
	bool GetClean()
	{
		return clean;
	}
	void SetWork(bool wworking)
	{
		if (wworking == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		working = wworking;
	}
	bool GetWorking()
	{
		return working;
	}

	void Open() { cout << "Open..."; }
	void Close() { cout << "Closed"; }
	void Broken() { cout << "Broken!!"; }

};

class Technic {
	string brand;
	string color;
	float price;
	bool working;

public:
	void SetBrand(string bbrand)
	{
		brand = bbrand;
	}
	string GetBrand()
	{
		return brand;
	}
	void SetColor(string ccolor)
	{
		color = ccolor;
	}
	string GetColor()
	{
		return color;
	}
	void SetPrice(float pprice)
	{
		price = pprice;
	}
	float GetPrice()
	{
		return price;
	}
	void SetWorking(bool wworking)
	{
		if (wworking == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		working = wworking;
	}
	bool GetWorking()
	{
		return working;
	}
	void On() { cout << "Power on..."; }
	void Off() { cout << "Power off..."; }
	void Charge() { cout << "Charging..."; }
};

class Transport {
	string brand;
	string model;
	unsigned short max_speed;
	unsigned short wheels;
	bool working;

public:
	void SetBrand(string bbrand)
	{
		brand = bbrand;
	}
	string GetBrand()
	{
		return brand;
	}
	void SetModel(string mmodel)
	{
		model = mmodel;
	}
	string GetModel()
	{
		return model;
	}
	void SetMaxSpeed(unsigned short mmax_speed)
	{
		max_speed = mmax_speed;
	}
	unsigned short GetMaxSpeed()
	{
		return max_speed;
	}
	void SetWheels(unsigned short wwheels)
	{
		wheels = wwheels;
	}
	unsigned short GetWheels()
	{
		return wheels;
	}
	void SetWork(bool wworking)
	{
		if (wworking == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		working = wworking;
	}
	bool GetWorking()
	{
		return working;
	}
	void IsGoing() { cout << "Going..."; }
	void Stay() { cout << "Parking..."; }
	void Sale() { cout << "For Sale!!"; }
};

class Plant {
	string color;
	bool alive;
	float height;

public:
	void SetColor(string ccolor)
	{
		color = ccolor;
	}
	void IsAlive(bool aalive)
	{
		if (aalive == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		alive = aalive;
		}
	bool GetAlive()
		{
			return alive;
		}
	void SetHeight(float hheight)
	{
		height = hheight;
	}
	float GetHeight()
	{
		return height;
	}
	void Stay() { cout << "Staying..."; }
	void WindReaction() { cout << "Reacting on wind...."; }
	void DroughtReaction() { cout << "Small chance to be alive..."; }
};

int main()
{

}