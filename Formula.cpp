//Header file
#include "Formula.h" 
//Librarys 
#include <math.h>
#include <vector>

using namespace std;

Formula::Formula(int index)
{
	this->index = index;
	for (int i = 0; i < 3; i++)
	{
		results[i] = new vector<result>;
	}
}

Formula::~Formula()
{
	for (int i = 0; i < 3; i++)
	{
		delete results[i];
	}
}

//TODO implment stats
//TODO possibly move these to a dedicated class
float Formula::standardDiv() { return 0.0; }

float Formula::range() { return 0.0;  }

float Formula::median() { return 0.0; }

float Formula::time() { return 0.0; }

class schwefel : public Formula 
{
public: 
	
	schwefel(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class deJong : public Formula
{
public:

	deJong(int index) : Formula(index) {};

	float calculate(int index) { return 0.0; }
};

class rosenbrock : public Formula
{
public:

	rosenbrock(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class rastrigin : public Formula
{
public:

	rastrigin(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class griewangk : public Formula
{
public:

	griewangk(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class sineEnvolope : public Formula
{
public:

	sineEnvolope(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class ackleysOne : public Formula
{
public:

	ackleysOne(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class ackleysTwo : public Formula
{
public:

	ackleysTwo(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class eggHolder : public Formula
{
public:

	eggHolder(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class rana : public Formula
{
public:

	rana(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class pathological : public Formula
{
public:

	pathological(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class michalewicz : public Formula
{
public:

	michalewicz(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class mastersCosineWave : public Formula
{
public:

	mastersCosineWave(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};

class sheckelsFoxHoles : public Formula
{
public:

	sheckelsFoxHoles(int index) : Formula(index) {};

	float calculate() { return 0.0; }
};
