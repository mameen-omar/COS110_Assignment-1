/* 
 * Class Hobbit
 */

#ifndef HOBBIT_H
#define	HOBBIT_H


#include <string>
using namespace std;


class Hobbit;
class Wizard;
class Spell;

class Hobbit
{
private:
    string name;
public:
    Hobbit();
    ~Hobbit();
    void setName(string n);
    string getName() const;
    //Task functions
    bool hasBeenSummoned(Wizard& w);
    bool hasCompletedTraining(Wizard& w);
    void dropWizardSpells(Wizard &w);
};

#endif	/* HOBBIT_H */

