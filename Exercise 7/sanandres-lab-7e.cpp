
#include <iostream>
#include <cmath>

using namespace std;

void regenerate(string& healthBar, int& health, int regen)
{
	health += regen;
	if(health >= 100) health = 100;
	
	for(int i = 1; i <= (floor(health)/10); i++)
	healthBar[i] = '=';
}
void damage(string& healthBar, int& health, int regen)
{
	health -= regen;
	if(health <= 0) health = 0;
	
	for(int i = (floor(health)/10)+1; i < 11 ; i++)
	{
		healthBar[i] = ' ';	
	}
}
void display(string healthBar, int health)
{	
	if(health > 0)
	cout << healthBar << health <<"%" << endl;
	else
	cout << healthBar << " DEAD" << endl;
}
int main()
{
	int health = 100;
	string healthBar = "[==========]";
	char regenOrDamage;
	int amountOfDamageOrRegen;

	while(health > 0)
	{
		cin >> regenOrDamage >> amountOfDamageOrRegen;
		if((amountOfDamageOrRegen >= 1 && amountOfDamageOrRegen <= 100) && (regenOrDamage == '+' || regenOrDamage == '-'))
		{
			switch(regenOrDamage)
			{
				case '+':
					regenerate(healthBar, health, amountOfDamageOrRegen);
				break;
				case '-':
					damage(healthBar, health, amountOfDamageOrRegen);
				break;
			}
	display(healthBar,health);
		}
	}
	
	
return 0;
}
