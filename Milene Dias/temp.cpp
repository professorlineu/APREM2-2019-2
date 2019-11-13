#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int m,s;
	int total;



	cout<<"Enter m and s"<<endl;
	cin>>m>>s;



		for(int sec = s; s>=0; s--)
		{


			Sleep(200);

			if(s ==0)
			{
             total = m*60;

			 for(int min = total; total>=0; total--)
			 {

				 Sleep(200);


			 }
cout<<" acabou seu tempo";


			}
		}





	 system("pause");


}
