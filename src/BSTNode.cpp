/**
* @description Verilen kişiler bilgilerini Binary Search Tree
yapısında tutan ve bunu işleyen program
* @course 1-A
* @assignment Veri Yapıları 2.Odev
* @date 01.09.2020
* @author Osman Kurt G161210374
*/

#include "BSTNode.h"

BSTNode *BSTNode::createNode(User *user, Stack *stack)
{
	BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));

	newNode->user = user;

	newNode->stack = stack;

	return newNode;
}
