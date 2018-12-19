//Mohamed Ameen Omar
//u16055323


//Implementation of Wizard Class 

#include "Wizard.h"
#include "Spell.h"
#include <iostream>
#include <string>

using namespace std;

class Spell;


Wizard::Wizard()
{
	numberOfSpells = 0;
	maxNumberOfSpells = 10;
	hasBeenSummoned = false;
	age = 20;
	numberOfLossedSpells = 0;
	hasCompletedTraining = false;

	spells = new Spell[maxNumberOfSpells];

	for(int i = 0; i<maxNumberOfSpells; i++)
	{
		spells[i].setName("");
	}
}

Wizard::Wizard(const Wizard& w)
{
	this->numberOfSpells = w.numberOfSpells;
	this->maxNumberOfSpells = w.maxNumberOfSpells;
	this->hasBeenSummoned = w.hasBeenSummoned;
	this->age = w.age;
	this->numberOfLossedSpells = w.numberOfLossedSpells;
	this->hasCompletedTraining = w.hasCompletedTraining;

	spells = new Spell[maxNumberOfSpells];

	for(int i = 0; i<maxNumberOfSpells;i++)
	{
		spells[i] = w.spells[i];

	}	
}

Wizard::~Wizard()
{
	//Delete Spell Array
	delete [] spells;
}

void Wizard::addSpell(const Spell& s)
{
	if(maxNumberOfSpells == numberOfSpells)
	{
		//Create a temp to store current spells array
		Spell * temp = new Spell[++maxNumberOfSpells];

	
		for(int i = 0; i< (maxNumberOfSpells -1);i++)
		{
			temp[i] = spells[i];
		}

		//store the new spell in array
		temp[++numberOfSpells - 1] = s;

		//delete old array
		delete [] spells;

		//update new array
		spells = temp;

		return;

	}

	else 
	{
		
		for(int i = 0; i<maxNumberOfSpells;i++)
		{
			if(spells[i].getName() == "")
			{
				spells[i] = s;
				numberOfSpells++;
				return;
				
			}
		}
	}

}

void Wizard::deleteSpell(string name)
{
	for(int i = 0; i<maxNumberOfSpells;i++)
	{
		if(spells[i].getName() == name)
		{
			spells[i].setName("");

			//ADDED NOW
			spells[i].setSkillLevel(5);
			spells[i].setDifficultyLevel(10);
			numberOfLossedSpells++;
			numberOfSpells--;
		}
	}
}

int Wizard::getNumberOfSpells() const
{
	return numberOfSpells;
}

void Wizard::setNumberOfSpells(int x)
{
	numberOfSpells = x;
}

void Wizard::setMaxNumberOfSpells(int m)
{
	
	Spell *temp = new Spell[m];

	
	if(m < maxNumberOfSpells)
	{ 	int emptyRemoved = 0;
		int removed = 0;
		int empty = 0;

		for(int i = 0; i<m;i++)
		{
			temp[i] = spells[i];
			
			if(spells[i].getName() == "")
			{
				empty++;
			}
		}

		//Temp Array Assigned
		for(int x = m; x < maxNumberOfSpells; x++)
		{
			removed++;

			if(spells[x].getName() == "")
			{
				emptyRemoved++;
			}
		}

		delete [] spells;
		spells = temp;
		maxNumberOfSpells = m;
		numberOfSpells = numberOfSpells - removed + emptyRemoved;
		numberOfLossedSpells = numberOfLossedSpells + removed - emptyRemoved;		
	}

	//Check if array needs to be bigger
	else if(m > maxNumberOfSpells)
	{
		for(int i = 0; i<maxNumberOfSpells;i++)
		{
			temp[i] = spells[i];
		}

		for(int x = maxNumberOfSpells; x<m ; x++)
		{
			temp[x].setName("");
		}

		delete [] spells;

		spells = temp;
	}

	maxNumberOfSpells = m;
}

int Wizard::getMaxNumberOfSpells() const
{
	return maxNumberOfSpells;
}

void Wizard::setAge(int a)
{
	if(a <= 0)
	{
		age = 0;
	}

	else
	{
		age = a;
	}
	
} 

int Wizard::getAge() const
{
	return age;
}

int Wizard::getNumberOfLossedSpells() const
{
	return numberOfLossedSpells;
}

void Wizard::setNumberOfLossedSpells(int x)
{
	if (x<= 0)
	{
		numberOfLossedSpells = 0;
	}

	else
	{
		numberOfLossedSpells = x;
	}
}

Spell& Wizard::getSpell(int index) const
{
	if(index < maxNumberOfSpells)
	{
		return spells[index];
	}
	
}

void Wizard::setHasCompletedTraining(bool x)
{
	hasCompletedTraining = x;
}

bool Wizard::getHasCompletedTraining()
{
	return hasCompletedTraining;
}

void Wizard::setHasBeenSummoned(bool val)
{
	hasBeenSummoned = val;
}

bool Wizard::getHasBeenSummoned() const
{
	return hasBeenSummoned;
}

bool Wizard::operator>(const Wizard &right)
{
	
	int countLeft = 0;
	int countRight = 0;
	
	for(int x = 0; x<maxNumberOfSpells; x++)
	{
		for(int y = 0; y<right.maxNumberOfSpells; y++)
		{	
			//if the left and right are equal check otherwise FUCK it
			if( ( this->spells[x].getName() == right.spells[y].getName() ) && (this->spells[x].getName() != ""))
			{	
				//if left is great than right our left counter increases
				if( this->spells[x].getSkillLevel() > right.spells[y].getSkillLevel() )
				{
					countLeft++;
				}


				//if the right is greater than the left our right counter will increase
				else if( this->spells[x].getSkillLevel() < right.spells[y].getSkillLevel() )
				{
					countRight++;
				}
			}
		}
	}

	///if left is greater return true
	if(countLeft > countRight)
	{
		return 1;
	}
	//otherwise it should return false
	else 
	{
		return 0;
	}

}
bool Wizard::operator<(const Wizard &right)
{
	int countLeft = 0;
	int countRight = 0;
	
	for(int x = 0; x<maxNumberOfSpells; x++)
	{
		for(int y = 0; y<right.maxNumberOfSpells; y++)
		{
			if( (this->spells[x].getName() == right.spells[y].getName()) && (this->spells[x].getName() != ""))
			{
				if( this->spells[x].getSkillLevel() > right.spells[y].getSkillLevel() )
				{
					countLeft++;
				}

				else if( this->spells[x].getSkillLevel() < right.spells[y].getSkillLevel() )
				{
					countRight++;
				}
			}
		}
	}

	if(countLeft < countRight)
	{
		return 1;
	}

	else 
	{
		return 0;
	}
}

Wizard& Wizard::operator+(const Spell& right)
{
	if(&right == 0)
	{
		return (*this);
	}

	this->addSpell(right);
	return (*this);
}

Wizard& Wizard::operator-(const string& name)
{
	this->deleteSpell(name);
	return (*this);
}

