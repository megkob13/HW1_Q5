#include <iostream>
#include <vector>


using namespace std;

// AERSP 424 Homework 1: Question 5
// Goal: Write functions named sigmoid and gradient_sigmoid that
// compute equations.

double sigmoid(double); //function prototype for sigmoid
double gradient_sigmoid(double);//function prototype for gradient sigmoid

double z = 0.0176835; //given value for z
double sigma = 0; //initialize variable sigma
double sigmaprime = 0; //initialize variable sigmaprime


double sigmoid(double z) //sigmoid function
{
	sigma = 1 / (1 + exp(-z)); //function given in doc
	return sigma; //return value calculated for sigma
}

double gradient_sigmoid(double sigma) //gradient_sigmoid function
{
	sigmaprime = sigma * (1 - sigma); //function given in doc
	return sigmaprime; //return value calculated for sigmaprime
}

int main()
{
	sigma = sigmoid(z); //call functions and pass in necessary variable
	sigmaprime = gradient_sigmoid(sigma);

	cout << "Sigma is equal to " << sigma << endl; //print results
	cout << "Sigma prime is equal to " << sigmaprime << endl;
}