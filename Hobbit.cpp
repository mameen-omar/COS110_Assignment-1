#include "Hobbit.h"
#include <iostream>
#include <string>
#include "Wizard.h"
#include "Spell.h"

using namespace std;

class Spell;
class Wizard;


Hobbit::Hobbit()
{
	name = "";
}

Hobbit::~Hobbit()
{
	name = "";
}

void Hobbit::setName(string n)
{
	name = n;
}

string Hobbit::getName() const
{
	return name;
}

bool Hobbit::hasBeenSummoned(Wizard& w)
{
	if(w.getNumberOfLossedSpells() >= 5)
	{
		w.setHasBeenSummoned(true);
	}

	else
	{
		w.setHasBeenSummoned(false);
	}

	return (w.getHasBeenSummoned());
}

bool Hobbit::hasCompletedTraining(Wizard& w)
{
	w.setNumberOfLossedSpells(0);
	w.setHasBeenSummoned(false);

	w.setHasCompletedTraining(true);

	return (w.getHasCompletedTraining());
}

void Hobbit::dropWizardSpells(Wizard &w)
{
	int index = w.getMaxNumberOfSpells();

	for(int i = 0; i<index; i++)
	{
		if((w.getSpell(i).getSkillLevel()) == 0)
		{

		
			w.getSpell(i).setName("");

			//ADDED NOW
			w.getSpell(i).setSkillLevel(5);
			w.getSpell(i).setDifficultyLevel(10);

			int lossedSpells = w.getNumberOfLossedSpells();

			w.setNumberOfLossedSpells(lossedSpells + 1);

			int cNOSpells = w.getNumberOfSpells();
			w.setNumberOfSpells(cNOSpells - 1);
			
		}
	}

	this->hasBeenSummoned(w);

}