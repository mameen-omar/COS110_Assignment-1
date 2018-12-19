/* 
 * main function to test code
 */
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include "Wizard.h"
#include "Spell.h"
#include "Hobbit.h"
using namespace std;

int main() {
    Wizard wiz;
    Spell s1("vanishing",3,1);

    
    wiz.addSpell(s1);
    cout << "Testing add Spell \n";
    cout << wiz.getNumberOfSpells() << endl << wiz.getMaxNumberOfSpells() << endl;
    wiz + s1;
    cout << "Testing wiz + s1";
    cout << endl << wiz.getNumberOfSpells() << endl << wiz.getMaxNumberOfSpells() << endl;
	
	Wizard harryPotter;
	cout << "Object harryPotter created successfully." << endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;

	
	cout << "Creating 5 Spells for Potter..." << endl;
	Spell harryGetLit("vanishing", 10, 2); 
	Spell harryRekFace("Rek Face", 30, 3);
	Spell harryMakeToast("Make Toast", 5, 1);
	Spell harryRat("Rat", 20, 10);
	Spell harryTuneMum("Tune Mum", 90, 70);
	cout << "5 Spell Objects successfully created." << endl << endl;
    
	harryPotter + harryGetLit;
	harryPotter + harryRekFace;
	harryPotter + harryMakeToast;
	harryPotter + harryRat;
	harryPotter + harryTuneMum;
	harryPotter + s1;
	
	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;
    
	harryPotter - "vanishing" ;
	
	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;
	
	harryPotter.setMaxNumberOfSpells(3);
	cout << "setmax spells to 3" << endl;
	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;
   
	cout << "adding 3 spells..." << endl;
	harryPotter + harryGetLit;
	harryPotter + s1;
	harryPotter + harryTuneMum;

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;

	Hobbit h;

	cout << "Created Hobbit" << endl;

	cout << "Has Been Summoned? \n";

	bool test2 = h.hasBeenSummoned(harryPotter);

	cout << test2 << endl;

	cout << "Has completed Training?" << endl;

	bool test3 = h.hasCompletedTraining(harryPotter);

	cout << test3 << endl;

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl << endl;

	cout << "Set vanishing 1 to zero \n";

	

	harryPotter.getSpell(0).setSkillLevel(0);

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl 
		<< harryPotter.getHasBeenSummoned()<< endl;

	cout << "Test Drop wizard\n";

	h.dropWizardSpells(harryPotter);

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl 
		<< harryPotter.getHasBeenSummoned() << endl;

	bool test1 =  h.hasBeenSummoned(harryPotter);

	cout << test1 << endl;

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}
    cout << "Harry's attributes are currently: " <<  endl;
	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl 
		<< harryPotter.getHasBeenSummoned() << endl;

	cout << "Testing operator plus (+) with s1" << endl;

	harryPotter + s1;

	cout << "Harry's attributes are currently: " <<  endl;

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}


	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl 
		<< harryPotter.getHasBeenSummoned() << endl;


	cout << endl << endl;

	cout << "Testing plus with s1 first and last should be the same " << endl;


	harryPotter + s1;

	cout << "Harry's attributes are currently: " <<  endl;

	for (int x = 0; x < harryPotter.getMaxNumberOfSpells() ; x++)
	{
		cout <<setw(10) <<(harryPotter.getSpell(x)).getName()  << setw(10) 
			<< harryPotter.getSpell(x).getDifficultyLevel() << setw(10)
			<< harryPotter.getSpell(x).getSkillLevel() << endl; 
	}


	cout	<< "getNumberOfSpells() : " << harryPotter.getNumberOfSpells() << endl
		<< "getMaxNumberOfSpells() : " << harryPotter.getMaxNumberOfSpells() << endl
		<< "getAge() : " << harryPotter.getAge() << endl
		<< "getNumberOfLossedSpells() : " << harryPotter.getNumberOfLossedSpells() << endl 
		<< harryPotter.getHasBeenSummoned() << endl;



	








	return 0;
}



