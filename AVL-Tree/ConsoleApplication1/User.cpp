#include "User.h"

User * User::createUser(string name, int age, int weight)
{
	User *newUser = (User*)malloc(sizeof(User));

	// Assing info to user object
	newUser->userAge = age;

	newUser->userName = name;

	newUser->userWeight = weight;

	// Then return it
	return newUser;
}
