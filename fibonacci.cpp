
#include <iostream>
#include <cmath>
using namespace std ;
main()
{ int i ;
int n;
 int a=0;
 int b=1;
 float x=0;
 cout << "Bienvenue\n" ;
 cout << "Je vais implementer la suite de fibonacci\n" ;
cout << "Donnez un nombre : " ;
 cin >> n ;
 while (n<0){
    cout<< " erreur, donner un autre nombre \n";
    cin>>n;
 }
 if (n == 0)
 cout << "U0 vaut 0 \n " ;
 else if (n==1)
 { cout<<"U1 vaut 1 \n" ;}
 else{
    cout<<"les "<< n <<" premiers termes de la suite de fibonacci sont: \n ";
    cout<<a << " ";
    cout<<b << " ";
    for(i=2; i<n; ++i)
    {
        x=a+b;
        cout<<x << " ";
        a=b;
        b=x;
    }
 cout <<" \n " ;
 }
 cout << "good job " ;
}