//Mohamed Ameen Omar
//u16055323
//Spell Class Implementation


#include "Spell.h"
#include "Wizard.h"
#include "Hobbit.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

Spell::Spell(string name, int difficultyLevel, int skillLevel)
{
	this->name = name;
	this->difficultyLevel = difficultyLevel;
	this->skillLevel = skillLevel;
}

Spell::Spell(const Spell& sp)
{
	this->name = sp.name;
	this->difficultyLevel = sp.difficultyLevel;
	this->skillLevel = sp.skillLevel;

}

Spell::~Spell()
{

	//Does Nothing, no information provided in the spec!	
}



void Spell::setName(string n)
{
	name = n;
}

string Spell::getName() const
{
	return name;
}

void Spell::setDifficultyLevel(int d)
{
	if(d <= 0)
	{
		difficultyLevel = 0;
	}
	else 
	{
		difficultyLevel = d;
	}
	
}

int Spell::getDifficultyLevel() const
{
	return difficultyLevel;
}

void Spell::setSkillLevel(int s)
{
	if(s >= 0)
	{
		skillLevel = s;
	}

	else 
	{
		skillLevel = 0;
	}
	
}

int Spell::getSkillLevel() const
{
	return skillLevel;
}

const Spell& Spell::operator= (const Spell& right)
{
	if(this == &right)
	{
		return *this;
	}

	
	else 
	{
		this->name = right.name;
		this->difficultyLevel = right.difficultyLevel;
		this->skillLevel = right.skillLevel;
		return (*this);
	}

	
}

Spell& Spell::operator++()
{
	this->skillLevel = ((this->skillLevel) + 1 );

	return (*this);
}

Spell& Spell::operator++(int)
{
	Spell * temp = new Spell;
	temp->name = this->name;
	temp->difficultyLevel = this->difficultyLevel;
	temp->skillLevel = this->skillLevel;

	this->skillLevel = ((this->skillLevel) + 1);

	return (*temp);
}

Spell& Spell::operator--()
{
	int currentSLevel = this->getSkillLevel();

	this->setSkillLevel( (currentSLevel-1) );

	return (*this);
}

Spell& Spell::operator--(int)
{

	Spell * temp = new Spell;
	temp->name = this->name;
	temp->difficultyLevel = this->difficultyLevel;
	temp->skillLevel = this->skillLevel;

	int currentSLevel = this->getSkillLevel();

	this->setSkillLevel( (currentSLevel-1) );

	return (*temp);
}

Spell& Spell::operator-=(const int n)
{
	int currentSLevel = this->skillLevel;
	int nSLevel = currentSLevel - n;
	this->setSkillLevel(nSLevel);

	return (*this);
}

ostream& operator << (ostream & strm, const Spell& obj)
{
	strm << setw(30) << fixed  << right << obj.getName();
	strm << setw(5) << fixed << right << obj.getDifficultyLevel();
	strm << setw(5) << fixed << right << obj.getSkillLevel();

	return strm;
}




//Mohamed Ameen Omar
//u16055323