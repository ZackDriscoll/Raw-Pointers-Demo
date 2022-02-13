#include <iostream>

//Create a class for people objects
class Person
{
public: 
	//Properties
	std::string Name;

	//Methods
	void Talk(std::string* ptr_stuffToSay)
	{
		//Print out their name and statement
		std::cout << Name + " says: " << *ptr_stuffToSay << std::endl;
	}
};


int main()
{
	//Welcome text
	std::cout << "\n\n\t**** Raw Pointers! ****\n\n";

	//Create people
	Person person1, person2;

	//Assign names to the person objects
	person1.Name = "Daniel";
	person2.Name = "Michael";

	//Create references for the pointer to print the messages
	std::string advice = "Be sure to init vars!";
	std::string greetings = "Greetings!";

	//Have the people objects talk through the reference variables
	person1.Talk(&advice);
	person2.Talk(&greetings);

	return 0;
}