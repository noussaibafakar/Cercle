#include <iostream>
#include "Cercle.h"
#include "Pointe.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    Pointe* p=new Pointe(0,0);
    Pointe *p1=new Pointe(5,4);

 Cercle * c1 = new Cercle(p,3);
    c1->afficher();

    Cercle c2=Cercle(p,5);
    c2.afficher();

    Cercle c3(p1,5);//pb
    c3.afficher();

    if (c1->operator==(c2)) cout<<"les deux cercles sont egaux"<<endl;
    else cout<<"les deux cercles ne sont pas egaux"<<endl;

    if (c2.operator==(c3)) cout<<"les deux cercles sont egaux"<<endl;
    else cout<<"les deux cercles ne sont pas egaux"<<endl;

    double d = *c1-c2 ;
    cout<<d<<endl;

     double d1= *c1-c3 ;
    cout<<"distance est "<<d1<<endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}