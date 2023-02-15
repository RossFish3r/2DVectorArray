#include<iostream>
#include <vector>

using namespace std; 

int main( ) 
{  
    cout<< "2D Array From Scratch" << endl;

    /*2D Array is an array of arrays or a matrix*/
    /*
        COL1    Col2  
    ROW1  A       B
    ROW1  C       D
    ROW1  E       F
    ROW1  G       H

    Array[n][m] where n = 4 and M=2 in above example

    */

   //initialize 2d Array
   char arr[4][2] = {
		{ 'A', 'B' },
		{ 'C', 'D' },
		{ 'E', 'F' },
		{ 'G', 'H' }
		} ;

    cout<<"Print 2D Array:\n";

    int x, y;
    for(x=0;x<4;x++)
	{
		for(y=0;y<2;y++)
		{
			cout<<"\t"<<arr[x][y];
		}
        /*close writing to console*/
		cout<<endl;
	}

     cout<< "2D Array Using Vectors" << endl;

    /*Initialize the vector (note it can grow on its own so dont need to specify the dimensions)*/
    vector<vector<char> > vector2dArray;
    vector<char> vectorRow;
    vectorRow.push_back('A');
    vectorRow.push_back('B');

    vector2dArray.push_back(vectorRow);

    vectorRow.clear();
    vectorRow.push_back('C');
    vectorRow.push_back('D');
    vector2dArray.push_back(vectorRow);

    vectorRow.clear();
    vectorRow.push_back('E');
    vectorRow.push_back('F');
    vector2dArray.push_back(vectorRow);

    vectorRow.clear();
    vectorRow.push_back('G');
    vectorRow.push_back('H');
    vector2dArray.push_back(vectorRow);

    vector2dArray.

    for (x = 0; x < vector2dArray.size(); x++)
    {
        for (y = 0; y < vector2dArray[x].size(); y++)
        {
            cout << "\t"; 
            cout<< vector2dArray[x][y] << " ";
        }    
        cout << endl;
    }
  
     cout<< "**********\r\n*** FINI ***\r\n**********" << endl;
    return 0;



}