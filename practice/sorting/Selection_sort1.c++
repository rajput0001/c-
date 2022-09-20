#include <iostream>
using namespace std;

void selectionsort(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        int min = i;

        for (int j = i+1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}

int main()
{

    int myarray[5];
    cout << "Enter 5 random values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }

    
  

    selectionsort(myarray);

    
    cout << "SORTED ARRAY : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i]<<" ";

        
    }

    return 0;
}
