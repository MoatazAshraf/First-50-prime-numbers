#include <iostream>

using namespace std;

int main()
{
    int i, j = 3, k = 0, l = 0;
    cout <<"2"<<" ";
    while (j != 0)
    {
        for (i = 1; i < j; i++)
        {
            if (i != 1)
            {
                if (j % i != 0)
                    l++;
                else
                    break;
            }
        }

        if (l == (j - 2))
        {
            cout << j <<" ";
            k++;
        }
        if (k == 49)
            break;
        else
        {
            j++;
            l=0;
        }

    }
    return 0;
}
