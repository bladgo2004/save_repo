#include<locale.h>
#include<stdio.h>
#include<Windows.h>
#include <conio.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//Найти максимальный элемент и поменять его местами с  шестым элементом массива.
void output_mass(int* massive, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		cout << massive[i] << ";";
	}
}
int inputInt(const char query[])
{
	int i;
	cout << query;
	while ((cin >> i).fail() )
	{
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Mistake,return input: " ;
	}
	return i;
}
int main()
{
	int* massive, size = 0, i = 0, max, max_number = 0,count_of_max=0;
	while (size < 6)
	{
		size = inputInt("Input size of massive:");
		if (size < 6)
		{
			cout << "input size >=6;" << endl;
		}
	}
	massive = (int*)malloc(size * sizeof(int*));
	for (i; i < size; i++)
	{
		cout <<"Input ellement " <<i << ":";
		massive[i] = inputInt("");
	}
	max = massive[0];
	output_mass(massive, size);
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (max < massive[i])
		{
			max = massive[i];
			max_number = i;
		}
	}
	for (i = 0; i < size; i++)
	{
		if (max == massive[i])
		{
			count_of_max += 1;
		}
	}
	if (count_of_max == 1)
	{
		cout << "ellement " << max_number+1 << " swap with ellement number 6;" << endl;
		swap(massive[5], massive[max_number]);
	}
	else
	{
		cout << "count of max ellements :" << count_of_max << endl << "program not be swap his." << endl;
	}
	cout << "Final massive" << endl;
	output_mass(massive, size);
	system("pause");
	return 0;
}