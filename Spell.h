/* 
 * Class Spell
 */

#ifndef SPELL_H
#define	SPELL_H

#include <string>
#include <iostream>
using namespace std;
#include "Wizard.h"
#include "Hobbit.h"

class Spell;


ostream& operator << (ostream & stream, const Spell& spell);

class Spell
{
    private:
        string name;
        int difficultyLevel;
        int skillLevel;
    public:
        Spell(string name="Unknown", int difficultyLevel=10, int skillLevel = 5);
        Spell(const Spell& sp);
        ~Spell();
        void setName(string n);
        string getName() const;
        void setDifficultyLevel(int d);
        int getDifficultyLevel() const;
        void setSkillLevel(int s);
        int getSkillLevel() const;

        
        //Overloaded Functions
        const Spell& operator= (const Spell& right);
        Spell& operator++();
        Spell& operator++(int);
        Spell& operator--();
        Spell& operator--(int);
        Spell& operator-=(const int n);
        friend ostream& operator << (ostream & strm, const Spell& obj);
        friend void Hobbit::dropWizardSpells(Wizard &);



};

#endif	/* SPELL_H */

