#include<bits/stdc++.h>                               //HARSHIT SEN
using namespace std;
int a[4];

int negative()
{
    sort(a,a+4);
    for(int i=0;i<4;i++)
{
	if(a[i]<0)
	{
		return i;
	}
	else if(a[i]==0)
	{
		return 0;
	}
	else
	{
		sort(a,a+4);
		return 1;
	}

}
}

int positive()
{
    sort(a,a+4);
    return 2;
}

int multiply()
{
    sort(a,a+4);
    return 3;
}

int division()
{
    int s=negative();
    if(s==1)
    return 0;
    else if(s==0)
    return 1;
}


// void findRoots(int a, int b, int c)
// {
//     int d = b * b - 4 * a * c;
//     double sqrt_val = sqrt(abs(d));
 
//     if (d > 0) {
//         cout << "Roots are real and different \n";
//         cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
//              << (double)(-b - sqrt_val) / (2 * a);
//     }
//     else if (d == 0) {
//         cout << "Roots are real and same \n";
//         cout << -(double)b / (2 * a);
//     }
//     else // d < 0
//     {
//         cout << "Roots are complex \n";
//         cout << -(double)b / (2 * a) << " + i" << sqrt_val
//              << "\n"
//              << -(double)b / (2 * a) << " - i" << sqrt_val;
//     }
// }



int main()
{
    int ntc,x,y,z,w;
    
    for(int i=0;i<=3;i++)
    {
        cin>>a[i];
    }
    x=a[positive()];

    y=a[negative()];
    z=a[multiply()];
    w=a[division()];
    sort(a,a+4);
    int a,b,c,d;

    a=(x+y)/2;
    b=(x-y)/2;
    if(w!=0)
    {
    c=z/(sqrt(z/w));
    d=sqrt(z/w);
    }

    if (a==c&&b==d)
    cout<<a<<" "<<b;
    else
    cout<<"-1 -1";
return 0;
}