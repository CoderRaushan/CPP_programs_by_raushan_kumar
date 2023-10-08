d#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    //cout << "enter a number:";
    //cin >> n;
    cout<<"\n";
    for (i = 1; i <= 4; i++)//9
    {
        for (j = 1; j<=15; j++)
        {
              if (j==1)
                {
                      cout<<"*";
                }

            else if (j==8)
            {

                cout <<"*";

            }
            else
            {
               cout<<" ";
            }

        }
        cout << "\n";
    }

    for (i = 1; i <=1; i++)
    {
        for (j = 1; j <=15; j++)
        {
            if (j%2==0)
            {
               cout<<" ";
            }
            else
            {
                 cout<<"*";
            }
           
        }
       printf("\n");
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <=15; j++)
        {
            if (j==8)
            {
                cout<<"*";
            }
            else if(j==15)
            {
                printf("*");
            }
            else
                 {
               cout<<" ";
            }
        }
       printf("\n");
    }

    return 0;
}










