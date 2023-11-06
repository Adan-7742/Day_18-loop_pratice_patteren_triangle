//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 5.......................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;
/*

				 *
				***
			   *****
			  *******
			 *********


*/

int triangle() {


	//.........................How this loop is working?..............................
	
	//for this patteren we will let that there are three varialles here i j k 
	//we will check howw many time line is runed As it is clear its simply run for 5 time then we will start a loop for this purpose
	//now we will check whT Is happening indside

	//now for line one 5 spaces are printed then 4, 3, 2, 1 , 0
	//for this purpose we will start a loop from 5 to 1 as in inverse order

	//now we have printed the strics
	//as straic are in order of  1 3 5 7 9 we will use here a for mula of 2 * i - 1

	int i, j, k;
	for (i = 1;i <=5 ;i++) {
		for (j = 5;j >= i;j--) 
			cout << " ";

		
		for (k = 1;k <= 2 * i - 1;k++) 
			cout << "*";

		
		cout << endl;
	}

	cout << "=============================================================================================================";



	for (i = 1;i <= 5;i++) {
		for (j = 5;j >= i;j--)
			cout << " ";


		for (k = 1;k <= 2 * i - 1;k++)
			cout << k;


		cout << endl;
	}

	cout << "=============================================================================================================";
	return 0;


}
//..................................2nd trick to make a triangle......................................................

/*


					*
				   * *
				  * * *
				 * * * *


*/

int triangle1() {

	for (int i = 1;i <= 5;i++) {


		for (int k = 5  ; k >= i; k--) {     //This for loop prints spaces before the letters in each row.
			//	The number of spaces printed
		   //is equal to 5 minus the current value of i
			cout << " ";
		}
		for (int j = 2; j <= i; j++) {

			cout << "* "; // in this line to add space to make a perfect triangle
			//if we do not use space it will give us half paramid
			//   

		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;


	return 0;
}

//......................................cross patteren ................................................................

/*

			*   *
			 * *
			  *
			 * *
			*   *



*/
// for this patteren we can draw the values of both i and j in table form
// if we see that both diognal have something common in it
//as for first cross there is a commom ting that i == j
//for 2nd cross the sum of both i + j == 6
//  j     1   2   3   4   5
// i 
//    
// 1     11  12  13  14  15
// 2     21  22  23  24  25 
// 3     31  32  33  34  35 
// 4     41  42  43  44  45
// 5     51  52  53  54  55 
//
//in this table we can see the difference cearly
//ont the all other places we will print space here'
//
//
//








int cross() {

	int i, j;
	for (i = 1;i <= 5;i++) {

		for (j = 1;j <= 5;j++) {
			if (i == j || (i + j == 5 + 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;

	}

	/*
	
	
				*   *
				 * *
				  *
				 * *
				*   *

	
	
	*/
	cout << "===================================================================================================" << endl;

	//......................................We will print i here......................................


	for (i = 1;i <= 5;i++) {

		for (j = 1;j <= 5;j++) {
			if (i == j || (i + j == 5 + 1))
				cout << i;
			else
				cout << " ";
		}
		cout << endl;

	}

	/*
	
					1   1
					 2 2
					  3
					 4 4
					5   5
	
	
	
	*/
	cout << "===================================================================================================" << endl;

	//......................................We will print j here........................................

	
	for (i = 1;i <= 5;i++) {

		for (j = 1;j <= 5;j++) {
			if (i == j || (i + j == 5 + 1))
				cout << j;
			else
				cout << " ";
		}
		cout << endl;

	}
	/*
						1   5
						 2 4
						  3
						 2 4
						1   5
	

	
	*/
	cout << "===================================================================================================" << endl;
	//...........................................we will rint i and j both here

	
	for (i = 1;i <= 5;i++) {

		for (j = 1;j <= 5;j++) {
			if (i == j || (i + j == 5 + 1))
				cout << i<<j;
			else
				cout << " ";
		}
		cout << endl;

	}

	/*
	
					11   15
					 22 24
					  33
					 42 44
					51   55

	
	*/
	cout << "===================================================================================================" << endl;
	return 0;

}

int tri() {

	//how this logic is working?

	//there is a simple logic is creationg here
	//as number of 1 is greater or equal j
	//by applying this logic we can ceate a simple right side paramid 


	int i, j;
	for (i = 1;i <= 5;i++) {
		for (j = 5;j >= 1;j--) {
			if (i >= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	/*
	
						*
					   **
					  ***
					 ****
					*****
	
	*/
	cout << "===================================================================================================" << endl;

	// for this paramid we will just inly add the space with staric sign

	for (i = 1;i <= 5;i++) {
		for (j = 5;j >= 1;j--) {
			if (i >= j)
				cout << "* ";
			else
				cout << " ";
		}
		cout << endl;
	}

	/*
	
						*
					   * *
					  * * *
					 * * * *
					* * * * *
	
	
	*/


	
	return 0;
}
int main()
{
	triangle();
	triangle1();
	cross();
	tri();
}
