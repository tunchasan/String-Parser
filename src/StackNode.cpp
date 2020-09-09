/**
* @description Verilen kişiler bilgilerini Binary Search Tree
yapısında tutan ve bunu işleyen program
* @course 1-A
* @assignment Veri Yapıları 2.Odev
* @date 01.09.2020
* @author Osman Kurt G161210374
*/

#include "StackNode.h"

StackNode *StackNode::createStackNode(char action)
{
	StackNode *newNode = new StackNode;

	newNode->action = action;

	return newNode;
}
