#include <iostream>
#include <cstdlib>

typedef float** float_array;


//Allocate memory for a rows by columns float array
void make_array(float_array& data_points, int rows, int columns)
{
//     T** data_points;
    data_points = new float*[rows];
    
    for(int i=0;i<rows;i++)
    {
        data_points[i] = new float[columns];
    }
    
}

//Deallocate memory for a rows by collumns float array
void free_array(float_array& data_points, int rows, int columns)
{
    for(int i=0;i<rows;i++)
    {
        delete data_points[i];
    }
    delete data_points;
}

//Returns random number float or double in 0 to 1
void rand_number(float& number)
{
    number = ((float) (rand()))/RAND_MAX;
    return;
}

//Fill a rows by columns array with random numbers between 0 and 1
void rand_array(float_array& array, int rows, int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            rand_number(array[i][j]);
        }
        std::cout << array[i][0] << "," << array[i][1] << "," << array[i][2] << std::endl;
    }
}

//Illustration of how to allocate memory for 
int main() 
{    
    int rows=100;
    int columns=3;
    //Data points is a 2D array of floats
    float** data_points;
    //The make array function will allocate the memroy for the array
    make_array(data_points,rows,columns);    
    //This just fills the array with random numbers and prints them
    rand_array(data_points,rows,columns);
    //This deallocates teh memory to prevent memory leaks
    free_array(data_points,rows,columns);
    
    return 0;
}
