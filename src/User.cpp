#include "User.h"

User *User::createUser(string name, int age, int weight)
{
	User *newUser = new User;

	// Assing info to user object
	newUser->userAge = age;

	newUser->userName = name;

	newUser->userWeight = weight;

	// Then return it
	return newUser;
}
