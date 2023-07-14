#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,check=0;
    cout<<"Enter Number of Students: ";
    cin>>n;
    string name[n]; 
    float cgpa[n];
    for(int i = 0; i< n;i++)
        {
            cin.ignore();
            cout << "Enter name of Student Number " << i + 1 << ": ";
            getline(cin,name[i]);
            cout << "Enter CGPA of Student " <<name[i]<< ": ";
            cin >> cgpa[i];
            while (cgpa[i]> 4)
               {
                cout << "Invalid CGPA, it cannot be more than 4. Enter again: ";
                cin >>cgpa[i];
               }
        }
        cout<<"\n\n";
        cout << "Name\t\tCGPA" << endl;
    for(int i=0;i<n;i++)
    {
         cout << name[i]<< "\t\t" << cgpa[i]<<endl;
    }
    cout<<"\n";
         cout<<"----Student Grades----"<<endl;
    for(int i=0;i<n;i++)
    {
        if(cgpa[i]==0.00)
            cout<<"Grade of "<<name[i]<<" = F (Fail)"<<endl;
        if(cgpa[i]>0.00 && cgpa[i]<=1.00)
            cout<<"Grade of "<<name[i]<<" = D"<<endl;
        if(cgpa[i]>1.00 && cgpa[i]<=1.70)
            cout<<"Grade of "<<name[i]<<" = C-"<<endl;
        if(cgpa[i]>1.70 && cgpa[i]<=2.00)
            cout<<"Grade of "<<name[i]<<" = C"<<endl;
        if(cgpa[i]>2 && cgpa[i]<=2.30)
            cout<<"Grade of "<<name[i]<<" = C+"<<endl;
        if(cgpa[i]>2.30 && cgpa[i]<=2.70)
            cout<<"Grade of "<<name[i]<<" = B-"<<endl;
        if(cgpa[i]>2.70 && cgpa[i]<=3.00)
            cout<<"Grade of "<<name[i]<<" = B"<<endl;
        if(cgpa[i]>3.00 && cgpa[i]<=3.30)
            cout<<"Grade of "<<name[i]<<" = B+"<<endl;
        if(cgpa[i]>3030 && cgpa[i]<=3.70)
            cout<<"Grade of "<<name[i]<<" = A-"<<endl;
        if(cgpa[i]>3.70 && cgpa[i]<=4.00)
            cout<<"Grade of "<<name[i]<<" = A+"<<endl;

    }





    
    cout<<"\n";
        cout << "-----Arranged List in Descending Order on Basis of CGPA-----" <<endl;
        float temp;
    for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(cgpa[i]<cgpa[j])
			{
				temp=cgpa[i];
				cgpa[i]=cgpa[j];
				cgpa[j]=temp;
			}

		}
	}
	for(int i=0; i<n; i++)
    {
        	cout<<name[i]<<" with CGPA "<<cgpa[i]<<endl;
    }
    cout<<"\n";









    cout<<"----Student in DEANS Merit List------"<<endl;
    for(int i=0;i<n;i++)
    {
        if(cgpa[i]>=3 && cgpa[i]<=4)
            cout<<name[i]<<" with CGPA= "<<cgpa[i]<<endl;
    }
    cout<<"\n";
    cout<<"----Toppers of UMT-----"<<endl;
    cout<<name[0]<<" is Topper of UMT with cgpa "<<cgpa[0]<<endl;
    cout<<"\n";
    cout<<"------Searching of A Student---------"<<endl;
    string namecheck; char choice='y';
    while(choice=='Y' || choice=='y')
    {
      cin.ignore();
      cout<<"Enter Name of Student=";
      getline(cin,namecheck);
      for(int i=0;i<n;i++)
      {
          if(namecheck==name[i])
          {
            cout<<name[i]<<" has CGPA: "<<cgpa[i]<<endl;
            check=1;
          } 
      }
      if(check==0)
      cout<<"Not found";
          cout<<"Do You want To Search Again: If Yes then 'Y' otherwise press any button to exit: ";
          cin>>choice;
    }
}



/* Task # 2

{
    int i , j , sum = 0 , a[3][3] ;
    cout << "Trace matrix in 2D array " << endl ;
    cout << "Enter Array Elements : ";
    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            cin >> a[i][j] ;
        }
    }
     for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
           cout <<  a[i][j]  << " ";
        }
        cout << endl ;
    }
    for(i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            if (i==j)
            {
                sum+=a[i][j] ;
            }
        }
    }
    cout << "Trace of matrix : " << sum << endl ;

    return 0;
}
*/