#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

struct User {

	friend struct BST;

	private:

		// Fields
		string userName = "";

		int userAge = -1;

		int userWeight = -1;

	public:

		// User creator
		User* createUser(string, int, int);
};

#endif