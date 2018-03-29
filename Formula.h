#pragma once
#include <vector>
using namespace std;

/*
Struct will hold the peices of info needed for anaylisis, the fitness and the 
time taken. It is worth noting that this execTime is the time for the total calculation
on a given population.
*/
struct result 
{
	int fitness;
	float execTime;
};

/*
*/
class Formula
{
public:
	//holds results for 10 20 and 30 n
	vector<result>* results[3];
	//holds its spot in the shared array
	int index;

	//De/Constuctor 
	Formula(int index);
	~Formula();

	/*
	Will take a reference to a population and calcualte the fitness
	using the inline functions defined in the specific implmentaions of formula
	*/

	virtual float calculate() = 0;
	
	/*----Stats analysis----*/

	//Standard deviation
	float standardDiv();
	//Range
	float range();
	//Median
	float median();
	//time
	float time();

};