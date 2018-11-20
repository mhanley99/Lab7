// Matthew Hanley
// COSC 2030 Lab 7
// Lab7-mhanley.cpp
// 11-12-18

#include "Lab7-mhanley.h"
#include "winTimer.h"
#include <list>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

int main()
{
	vector<double> myvec;
	vector<double> bubvec;
	vector<double> insvec;
	vector<double> selvec;
	myvec = getVector(775);
	cout << "size: " << myvec.size() << endl;
	/*
	for (int i = 0; i < myvec.size(); i++)
	{
		cout << myvec[i] << endl;
	}
	*/

	cout << endl << "sort with bubble sort" << endl;
	Timer t1;
	t1.start();
	bubvec = bubble(myvec);
	t1.stop();
	/*
	for (int i = 0; i < myvec.size(); i++)
	{
		cout << bubvec[i] << endl;
	}
	*/
	cout << "time: " << t1() << endl;

	

	cout << endl << "sort with selection sort" << endl;
	Timer t3;
	t3.start();
	selvec = selection(myvec);
	t3.stop();


	cout << endl << "sort with insertion sort" << endl;
	Timer t2;
	t2.start();
	insvec = insertion(myvec);
	t2.stop();
	/*for (int i = 0; i < myvec.size(); i++)
	{
	cout << insvec[i] << endl;
	}
	*/
	cout << "time: " << t2() << endl;



	/*
	for (int i = 0; i < myvec.size(); i++)
	{
		cout << selvec[i] << endl;
	}
	*/
	cout << "time: " << t3() << endl;

	system("pause");
	return 0;
}
