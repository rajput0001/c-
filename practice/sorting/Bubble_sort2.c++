#include <iostream>
using namespace std;

void bubblesort(int a[])
{

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < (5 - i - 1); j++)
        {

            if (a[j] > a[j + 1])
            {

                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{

    int myarray[5];
    cout << "Enter any 5 random values: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cin >> myarray[i];
    }

    cout << "UNSORTED ARRAY: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << myarray[i] << " ";
    }

    //sorting
     bubblesort(myarray);

    cout<<endl << "SORTED ARRAY: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << myarray[i] << " ";
    }

    return 0;
}