/* 
 * Class Wizard
 */

#ifndef WIZARD_H
#define	WIZARD_H

#include <string>
#include "Hobbit.h"


class Spell;
class Wizard;



class Wizard
{    
	private:
	    Spell* spells;
	    int numberOfSpells;
	    int maxNumberOfSpells;
	    bool hasBeenSummoned;
	    int age;
	    int numberOfLossedSpells;
	    bool hasCompletedTraining;
	public:
	    Wizard();
	    Wizard(const Wizard& w);
	    ~Wizard();
	    void addSpell(const Spell& s);
	    void deleteSpell(string name);
	    int getNumberOfSpells() const;
	    void setNumberOfSpells(int x);
	    void setMaxNumberOfSpells(int m);
	    int getMaxNumberOfSpells() const;
	    void setAge(int a); 
	    int getAge() const;
	    void setNumberOfLossedSpells(int x);
	    int getNumberOfLossedSpells() const;
	    Spell& getSpell(int index) const;
	    void setHasBeenSummoned(bool val);
	    bool getHasBeenSummoned() const;
	    void setHasCompletedTraining(bool x);
	    bool getHasCompletedTraining();

	   
	    //Overloaded
	    bool operator > (const Wizard &right);
	    bool operator < (const Wizard &right);
	    Wizard& operator+(const Spell& right);
	    Wizard& operator-(const string& name);

	    
};

#endif	/* WIZARD_H */

