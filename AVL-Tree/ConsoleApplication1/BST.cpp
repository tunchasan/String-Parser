#include "BST.h"

void BST::processUserData(string data)
{
	// Defines user' information
	string userName = "";

	int userAge = -1;

	int userWeight = -1;

	string token = "";

	int counter = 0;

	for (int i = 0; i < data.size(); i++) {

		if (data[i] != 35) {

			token += data[i];
		}

		else {

			// Assing the token to user fields
			switch (counter) {

				case 0: { // user' name

					userName = token;

					token = ""; 

					counter++;
				
					break;
				}
				case 1: { // user' age

					userAge = 2020 - stoi(token);

					token = "";

					counter++;

					break;
				}
				case 2: { // // user' weight

					userWeight = stoi(token);

					token = "";

					counter++;

					break;
				}
			}
		}
	}
}