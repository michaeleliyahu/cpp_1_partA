/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"

using namespace std;
using namespace ariel;
using std::string;
namespace ariel
{
	/*
	get 4 first charcters
	check the last one to understand where place the arm
	*/
	string snowmanUp(int number)
	{

		return "     \n _===_\n (.,.)\n";
	}

	/*
	get 4 last charcters
	check the first one to understand where place the arm
	*/
	string snowmanDown(int number)
	{

		return "\n/( : )\\n ( : )";
	}
	string snowman(int str)
	{
		int up ;
		int down ;
		string output = snowmanUp(up) + snowmanDown(down);

		string c = "_===_\n(.,.)\n( : )\n( : )";
		return c;
	}
}
