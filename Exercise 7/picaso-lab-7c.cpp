//******************************************************************
// Filename	: picaso-lab-7c.cpp
// Date		: 15 October 2019
// Subject	: CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity	: Laboratory Exercise 7
// Problem Title: Health Bar
// Honor Code	:
// 	This is my own program. I have not received any
//      unauthorized help in completing this work. I have not
//      copied from my classmate, friend, nor any unauthorized
//      resource. I am well aware of the policies stipulated
//      in the handbook regarding academic dishonesty.
//      If proven guilty, I won't be credited any points for
//      this exercise.
//
// Complete Name: Joeliam C. Picaso
// ID Number	: 2019-1-0780
// Year-Course	: 1-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************
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
