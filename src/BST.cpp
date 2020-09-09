#include "BST.h"

void BST::processUserData(string data)
{
	// Defines user' information
	string userName = "";

	int userAge = -1;

	int userWeight = -1;

	string token = "";

	int counter = 0;

	for (int i = 0; i < data.size(); i++)
	{

		if (data[i] != 35)
		{

			token += data[i];
		}

		else
		{

			// Assing the token to user fields
			switch (counter)
			{

			case 0:
			{ // user' name

				userName = token;

				token = "";

				counter++;

				break;
			}
			case 1:
			{ // user' age

				userAge = 2020 - stoi(token);

				token = "";

				counter++;

				break;
			}
			}
		}
	}

	userWeight = stoi(token);

	// cout << userName << " " << userAge << " " << userWeight << endl;

	// Create user object
	User *newUser = new User;

	// Assings user info to object
	newUser = newUser->createUser(userName, userAge, userWeight);

	// Insert to BST
	root = insertNodeToBST(root, newUser);
}

BSTNode *BST::insertNodeToBST(BSTNode *parent, User *user)
{
	// If BST Tree is empty
	if (parent == NULL)
	{

		BSTNode *newNode = new BSTNode;

		newNode->stack = NULL;

		newNode->user = user;

		parent = newNode;

		return parent;
	}

	if (parent->user->userAge >= user->userAge)
	{ // Left

		parent->left = insertNodeToBST(parent->left, user);
	}

	else
	{

		// Right
		parent->right = insertNodeToBST(parent->right, user);
	}

	return parent;
}

// Inorder traversel at BST
void BST::Inorder(BSTNode *root)
{
	if (!root)
	{
		return;
	}

	Inorder(root->left);

	cout << root->user->userName << "," << 2020 - root->user->userAge << "," << root->user->userWeight << endl;

	// cout << " Yigit...:" << endl;

	Inorder(root->right);
}