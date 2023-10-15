 #include<iostream>
 using namespace std;
 int main()
 {
   int n;
    cout<<"enter a no:";
    cin>>n;
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n; j++)
        {
            if (j>n+1-i and j<n+i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
       printf("\n");
    }
     for (int i = 2; i <= n+1; i++)
    {
        for (int j = 1; j<=2*n; j++)
        {     
            if (j>(i-1) and j<=(2*n-i)+1)
            {
                cout << " ";
            }

            else 
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
     return 0;
}