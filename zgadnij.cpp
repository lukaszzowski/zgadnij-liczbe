# zgadnij-liczbe
//zgadnij liczbe od 1-100


#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
int liczba, strzal, proba=0;
int main()
{
    cout<<"Witaj!"<<endl<<"O jakiej liczbie od 1 do 100 mysle?"<<endl;
    srand(time(NULL));
    liczba=rand()%100+1;

while(strzal!=liczba)

{
    proba++;
    cout<<"Twoj "<<proba<<" strzal:"<<endl;
    cin>>strzal;
    if (strzal==liczba)
    cout<<"Wspaniale! Poprawna odpowiedz w "<<proba<<" strzale!"<<endl;
    if (strzal<liczba)
    cout<<"To za malo."<<endl;
    if (strzal>liczba)
    cout<<"To za duzo."<<endl;
}
getchar();getchar();
    return 0;
}

