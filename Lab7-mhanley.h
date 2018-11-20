// Matthew Hanley
// COSC 2030 Lab 7
// Lab7-mhanley.h
// 11-12-18

#ifndef MHANLEY_H
#define MHANLEY_H

#include "winTimer.h"
#include <list>
#include <iostream>
#include <vector>

using namespace::std;

double getRandom()
{
	const double min = 0;
	const double max = 500;
	double f = (double)rand() / RAND_MAX;
	return (f * (max - min));
}

vector<double> getVector(int listSize)
{
	double value;
	vector<double> theList;
	for (int index = 0; index < listSize; index++)
	{
		value = getRandom();
		theList.push_back(value);
	}
	return theList;
}


vector<double> bubble(vector<double> number)
{
	double a;
	double b;
	bool sorted;
	do
	{
		sorted = true;
		for (int i = 0; i < (number.size() - 1); i++)
		{
			a = number[i];
			b = number[i + 1];
			if (a > b)
			{
				number[i] = b;
				number[i + 1] = a;
				sorted = false;
			}
		}
	} while (sorted != true);
	return number;
}


vector<double> insertion(vector<double> number)
{
	double hold;
	double max = 0;
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}
		else
		{
			int j = i - 1;
			while (!((number[i] < number[j]) && (number[i] >= number[j-1])))
			{
				j--;
			}
			hold = number[i];
			for (int k = i; k > j; k--)
			{
				number[k] = number[k - 1];
			}
			number[j] = hold;
		}
	}
	return number;
}


vector<double> selection(vector<double> number)
{
	vector<double> sorted;
	double min;
	int k;
	int size = number.size();
	for (int i = 0; i < size; i++)
	{
		min = 501;
		for (int j = 0; j < number.size(); j++)
		{
			if (number[j] < min)
			{
				min = number[j];
				k = j;
			}
		}
		sorted.push_back(min);
		number.erase(number.begin() + k);
	}
	return sorted;
}

/*
vector<double> mergeSort(vector<double> number)
{

}

vector<double> quickSort(vector<double> number)
{

}
*/


#endif
