
#include <stdio.h>

struct Person
{
	char name[64];
	int age;
};

int main()
{
	//initialize an array of 100 people
	struct Person people[100];
	//points to the base of the 100 person array
	struct Person *p_Person = &people;

	//for each person
	int i = 0;
	for (i = 0; i < 100; i++) 
	{
		//set the age to i	
		p_Person->age = i;
		//Next person
		p_Person += 1;
	}
	
	return 0;

}
