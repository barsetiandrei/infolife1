
#include<iostream>
#include<string>
using namespace std;
unsigned long long i;
long double x;
string var;
int main ()
{while (i <=1000000000)
{

        cout << "Scrieti unitatea de masura dorita pentru a fi transformata. Ca sa iesiti tastati exit. Atentie programul primeste, pe rand, doar 1 miliard de unitati"<< endl <<endl;
        cout << "Pentru a vizualiza lista de unitati care pot fi transformate scrieti lista"<<endl<<endl;
        cin >> var;
        cout << endl;

            if (var == "exit")
                {
                    return 0;
                }
         if (var == "lista")
           {


            cout<<"Doar scrieti unitatea de masura de exemplu: metri, apoi scrieti o valoare"<<endl;cout<<endl;
            cout<<"Puteti converti unitatile de masura:";cout;cout<<endl;
            cout<<"Lungime:metri,decimetri,hectometri,decametri,decimetri,milimetri,centimetri";cout<<endl;cout<<endl;
            cout<<"Volum:metri cubi,decimetri cubi,etc...";cout<<endl;cout<<endl;
            cout<<"Arie:metri patrati,hectare,decimetri patrati,etc...";cout<<endl;cout<<endl;
            cout<<"Temperatura:grade fahrenheit,celsius,kelvin";cout<<endl;cout<<endl;
            cout<<"Masa:kilograme,miligrame,decigrame,decagrame,hectograme,centigrame,grame";cout<<endl;cout<<endl;
            cout<<"Presiune:bar,psi";cout<<endl;cout<<endl;
            cout<<"Timp:minute,ore,secunde,milisecunde";cout<<endl;cout<<endl;
            cout<<"Consum combustibil:litri/100km,mile/galon,kilometru la litru";cout<<endl;cout<<endl;
            cout<<"Densitate:kg/m^3, g/m^3, g/cm^3";cout<<endl;cout<<endl;
            cout<<"Energie:jouli,kcal,cal";cout<<endl;cout<<endl;
            cout<<endl;}
    // !Lungime!
      else  if(var=="metri")
       {

       cin>>x;
        cout<<x; cout<<"metri ="; cout<<x/1000;cout<<"kilometri"<<endl;
         cout<<x; cout<<"metri ="; cout<<x/100; cout<<"hectometri"<<endl;
          cout<<x; cout<<"metri =";cout<<x/10; cout<<"decametri"<<endl;
           cout<<x; cout<<"metri =";cout<<x*1000;cout<<"milimetri"<<endl;
            cout<<x; cout<<"metri ="<<x*10<<"decimetri"<<endl;
             cout<<x; cout<<"metri ="<<x*100<<"centimetri"<<endl;}

       else if(var=="centimetri")
         { cin>>x;
         cout<<x; cout<<"centimetri ="; cout<<x/100000<<"kilometri"<<endl;
          cout<<x; cout<<"centimetri ="<<x/10000<<"hectometri"<<endl;
           cout<<x; cout<<"centimetri ="<<x/1000<<"decametri"<<endl;
            cout<<x; cout<<"centimetri ="<<x/100<<"metri"<<endl;
             cout<<x; cout<<"centimetri ="<<x/10<<"decimetri"<<endl;
              cout<<x; cout<<"centimetri ="<<x*10<<"milimetri"<<endl;}
      else  if(var=="decimetri")
         { cin>>x;
         cout<<x; cout<<"decimetri ="<<x/10000<<"kilometri"<<endl;
          cout<<x; cout<<"decimetri ="<<x/1000<<"hectometri"<<endl;
           cout<<x; cout<<"decimetri ="<<x/100<<"decametri"<<endl;
            cout<<x; cout<<"decimetri ="<<x/10<<"metri"<<endl;
             cout<<x; cout<<"decimetri ="<<x*10<<"centimetri"<<endl;
              cout<<x; cout<<"decimetri ="<<x*100<<"milimetri"<<endl;}
      else  if(var=="decametri")
         { cin>>x;
         cout<<x; cout<<"decametri ="<<x/100<<"kilometri"<<endl;
          cout<<x; cout<<"decametri ="<<x/10<<"hectometri"<<endl;
           cout<<x; cout<<"decametri ="<<x*10<<"metri"<<endl;
            cout<<x; cout<<"decametri ="<<x*100<<"decimetri"<<endl;
             cout<<x; cout<<"decametri ="<<x*1000<<"centimetri"<<endl;
              cout<<x; cout<<"decametri ="<<x*10000<<"milimetri"<<endl;}
       else if(var=="hectometri")
         { cin>>x;
         cout<<x; cout<<"hectometri ="<<x/10<<"kilometri"<<endl;
          cout<<x; cout<<"hectometri ="<<x*10<<"decametri"<<endl;
           cout<<x; cout<<"hectometri ="<<x*100<<"metri"<<endl;
            cout<<x; cout<<"hectometri ="<<x*1000<<"decimetri"<<endl;
             cout<<x; cout<<"hectometri ="<<x*10000<<"centimetri"<<endl;
              cout<<x; cout<<"hectometri ="<<x*100000<<"milimetri"<<endl;}
       else if(var=="milimetri")
        {cin>>x;
         cout<<x; cout<<"milimetri ="<<x/1000000<<"kilometri"<<endl;
          cout<<x; cout<<"milimetri ="<<x/100000<<"hectometri"<<endl;
           cout<<x; cout<<"milimetri ="<<x/10000<<"decametri"<<endl;
            cout<<x; cout<<"milimetri ="<<x/1000<<"metri"<<endl;
             cout<<x; cout<<"milimetri ="<<x/100<<"decimetri"<<endl;
              cout<<x; cout<<"milimetri ="<<x/10<<"centimetri"<<endl;}
       else if(var=="kilometri")
          { cin>>x;
         cout<<x; cout<<"kilometri ="<<x/10<<"hectometri"<<endl;
          cout<<x; cout<<"kilometri ="<<x/100<<"decametri"<<endl;
           cout<<x; cout<<"kilometri ="<<x/1000<<"metri"<<endl;
            cout<<x; cout<<"kilometri ="<<x/10000<<"decimetri"<<endl;
             cout<<x; cout<<"kilometri ="<<x/100000<<"centimetri"<<endl;
              cout<<x; cout<<"kilometri ="<<x/1000000<<"milimetri"<<endl;}






            //  !Arie!
          else  if(var=="metri_patrati")
       {cin>>x;
        cout<<x; cout<<"metri patrati ="<<x/1000000<<"kilometri patrati"<<endl;
         cout<<x; cout<<"metri patrati ="<<x/10000<<"hectare"<<endl;
          cout<<x; cout<<"metri patrati ="<<x/100<<"decametri patrati"<<endl;
           cout<<x; cout<<"metri patrati ="<<x*1000000<<"milimetri patrati"<<endl;
            cout<<x; cout<<"metri patrati ="<<x*100<<"decimetri patrati"<<endl;
             cout<<x; cout<<"metri patrati ="<<x*10000<<"centimetri patrati"<<endl;}

       else if(var=="centimetri_patrati")
         { cin>>x;
                 cout<<x; cout<<"centimetri patrati ="<<x/10000000000<<"kilometri patrati"<<endl;
         cout<<x; cout<<"centimetri patrati ="<<x/100000000<<"hectare patrati"<<endl;
          cout<<x; cout<<"centimetri patrati ="<<x/1000000<<"decametri patrati"<<endl;
           cout<<x; cout<<"centimetri patrati ="<<x*100<<"milimetri patrati"<<endl;
            cout<<x; cout<<"centimetri patrati ="<<x/100<<"decimetri patrati"<<endl;
             cout<<x; cout<<"centimetri patrati ="<<x/10000<<"metri patrati"<<endl;}

       else if(var=="decimetri_patrati")
         { cin>>x;
        cout<<x; cout<<"centimetri patrati ="<<x/100000000<<"kilometri patrati"<<endl;
         cout<<x; cout<<"decimetri patrati ="<<x/1000000<<"hectare patrati"<<endl;
          cout<<x; cout<<"decimetri patrati ="<<x/10000<<"decametri patrati"<<endl;
           cout<<x; cout<<"decimetri patrati ="<<x*10000<<"milimetri patrati"<<endl;
            cout<<x; cout<<"decimetri patrati ="<<x*100<<"centimetri patrati"<<endl;
             cout<<x; cout<<"decimetri patrati ="<<x/100<<"metri patrati"<<endl;}

       else if(var=="decametri_patrati")
         { cin>>x;
        cout<<x; cout<<"decametri patrati ="<<x/10000<<"kilometri patrati"<<endl;
         cout<<x; cout<<"decametri patrati ="<<x/100<<"hectare patrati"<<endl;
          cout<<x; cout<<"decametri patrati ="<<x*10000<<"decimetri patrati"<<endl;
           cout<<x; cout<<"decametri patrati ="<<x*100000000<<"milimetri patrati"<<endl;
            cout<<x; cout<<"decametri patrati ="<<x*1000000<<"centimetri patrati"<<endl;
             cout<<x; cout<<"decametri patrati ="<<x*100<<"metri patrati"<<endl;}

      else  if(var=="hectare")
         { cin>>x;
         cout<<x; cout<<"hectare ="<<x/100<<"kilometri patrati"<<endl;
         cout<<x; cout<<"hectare ="<<x*1000<<"decametri patrati"<<endl;
          cout<<x; cout<<"hectare ="<<x*1000000<<"decimetri patrati"<<endl;
           cout<<x; cout<<"hectare ="<<x*10000000000<<"milimetri patrati"<<endl;
            cout<<x; cout<<"hectare ="<<x*100000000<<"centimetri patrati"<<endl;
             cout<<x; cout<<"hectare ="<<x*10000<<"metri patrati"<<endl;}
       else if(var=="milimetri_patrati")
        {cin>>x;
        cout<<x; cout<<"milimetri patrati ="<<x*1000000000000<<"kilometri patrati"<<endl;
         cout<<x; cout<<"milimetri patrati ="<<x*100000000<<"decametri patrati"<<endl;
          cout<<x; cout<<"milimetri patrati ="<<x*10000<<"decimetri patrati"<<endl;
           cout<<x; cout<<"milimetri patrati ="<<x*10000000000<<"hectare patrati"<<endl;
            cout<<x; cout<<"milimetri patrati ="<<x*100<<"centimetri patrati"<<endl;
             cout<<x; cout<<"milimetri patrati ="<<x*100000<<"metri patrati"<<endl;}
       else if(var=="kilometri patrati")
          { cin>>x;
        cout<<x; cout<<"kilometri patrati ="<<x/1000000000000<<"milimetri patrati"<<endl;
         cout<<x; cout<<"kilometri patrati ="<<x/10000<<"decametri patrati"<<endl;
          cout<<x; cout<<"kilometri patrati ="<<x/100000000<<"decimetri patrati"<<endl;
           cout<<x; cout<<"kilometri patrati ="<<x/1000<<"hectare patrati"<<endl;
            cout<<x; cout<<"kilometri patrati ="<<x/10000000000<<"centimetri patrati"<<endl;
             cout<<x; cout<<"kilometri patrati ="<<x/1000000<<"metri patrati"<<endl;}




           // Volum!!!
  else if(var=="metri_cubi")
        {cin>>x;
        cout<<x; cout<<"metri cubi ="<<x*1000000000<<"kilometri"<<endl;
         cout<<x; cout<<"metri cubi ="<<x*1000000<<"hectometri"<<endl;
          cout<<x; cout<<"metri cubi ="<<x*1000<<"decametri"<<endl;
           cout<<x; cout<<"metri cubi ="<<x/1000000000<<"milimetri"<<endl;
            cout<<x; cout<<"metri cubi ="<<x/1000<<"decimetri"<<endl;
             cout<<x; cout<<"metri cubi ="<<x/1000000<<"centimetri"<<endl;}

       else if(var=="centimetri_cubi")
         { cin>>x;
         cout<<x; cout<<"centimetri cubi ="<<x/1000000000000000<<"kilometri cubi"<<endl;
          cout<<x; cout<<"centimetri cubi ="<<x/1000000000000<<"hectometri cubi"<<endl;
           cout<<x; cout<<"centimetri cubi ="<<x/1000000000<<"decametri cubi"<<endl;
            cout<<x; cout<<"centimetri cubi ="<<x/1000<<"decimetri cubi"<<endl;
             cout<<x; cout<<"centimetri cubi ="<<x/1000000<<"metri cubi cubi"<<endl;
              cout<<x; cout<<"centimetri cubi ="<<x*1000<<"milimetri cubi"<<endl;}
       else if(var=="decimetri_cubi")
         { cin>>x;
         cout<<x; cout<<"decimetri cubi ="<<x/1000000000000<<"kilometri cubi"<<endl;
          cout<<x; cout<<"decimetri cubi ="<<x/1000000000<<"hectometri cubi"<<endl;
           cout<<x; cout<<"decimetri cubi ="<<x/1000000<<"decametri cubi"<<endl;
            cout<<x; cout<<"decimetri cubi ="<<x/1000<<"metri cubi"<<endl;
             cout<<x; cout<<"decimetri cubi ="<<x/1000<<"centimetri cubi"<<endl;
              cout<<x; cout<<"decimetri cubi ="<<x/1000000<<"milimetri cubi"<<endl;}
       else if(var=="decametri_cubi")
         { cin>>x;
         cout<<x; cout<<"decametri cubi ="<<x/1000000<<"kilometri cubi"<<endl;
          cout<<x; cout<<"decametri cubi ="<<x/1000<<"hectometri cubi"<<endl;
           cout<<x; cout<<"decametri cubi ="<<x*1000<<"metri cubi"<<endl;
            cout<<x; cout<<"decametri cubi ="<<x*1000000<<"decimetri cubi"<<endl;
             cout<<x; cout<<"decametri cubi ="<<x*1000000000<<"centimetri cubi"<<endl;
              cout<<x; cout<<"decametri cubi ="<<x*1000000000000<<"milimetri cubi"<<endl;}
      else  if(var=="hectometri_cubi")
         { cin>>x;
         cout<<x; cout<<"hectometri cubi ="<<x/1000<<"kilometri cubi"<<endl;
          cout<<x; cout<<"hectometri cubi ="<<x*1000<<"decametri cubi"<<endl;
           cout<<x; cout<<"hectometri cubi ="<<x*1000000<<"metri cubi"<<endl;
            cout<<x; cout<<"hectometri cubi ="<<x*1000000000<<"decimetri cubi"<<endl;
             cout<<x; cout<<"hectometri cubi ="<<x*1000000000000<<"centimetri cubi"<<endl;
              cout<<x; cout<<"hectometri cubi ="<<x*1000000000000000<<"milimetri cubi"<<endl;}
       else if(var=="milimetri_cubi")
        {cin>>x;
         cout<<x; cout<<"milimetri cubi ="<<x/1000000000000000000<<" kilometri cubi"<<endl;
          cout<<x; cout<<"milimetri cubi ="<<x/1000000000000000<<" hectometri cubi"<<endl;
           cout<<x; cout<<"milimetri cubi ="<<x/1000000000000<<" decametri cubi"<<endl;
            cout<<x; cout<<"milimetri cubi "<<x/1000000<<" decimetri cubi"<<endl;
             cout<<x; cout<<"milimetri cubi ="<<x/1000<<" centimetri cubi"<<endl;
              cout<<x; cout<<"milimetri cubi ="<<x/1000000000<<" metri cubi"<<endl;}
      else  if(var=="kilometri_cubi")
          { cin>>x;
         cout<<x; cout<<"kilometri cubi ="<<x*1000<<"hectometri cubi"<<endl;
          cout<<x; cout<<"kilometri cubi =10^9*"<<x<<"metri cubi"<<endl;
           cout<<x; cout<<"kilometri cubi =10^6*"<<x<<"decametri cubi"<<endl;
            cout<<x; cout<<"kilometri cubi =10^12*"<<x<<"decimetri cubi"<<endl;
             cout<<x; cout<<"kilometri cubi =10^15*"<<x<<"centimetri cubi"<<endl;
              cout<<x; cout<<"kilometri cubi =10^18*"<<x<<"milimetri cubi"<<endl;}






    //Temperatura!!!!!
  else if(var=="Fahrenheit")
        {cin>>x;
    cout<<x; cout<<"grade Fahrenheit ="<<(x-32)/1.8<<"grade Celsius"<<endl;
    cout<<x; cout<<"grade Fahrenheit ="<<(x-32)/1.8+273.15<<"grade Kelvin"<<endl;}

   else    if(var=="Celsius")
        {cin>>x;
    cout<<x; cout<<"grade Celsius ="<<x+273.15<<"grade Kelvin"<<endl;
    cout<<x; cout<<"grade Celsius ="<<x*1.8+32<<"grade Fahrenheit"<<endl;}

    else   if(var=="Kelvin")
       {cin>>x;
    cout<<x; cout<<"grade Kelvin ="<<(x-273.15)*1.8+32<<"grade Fahrenheit"<<endl;
    cout<<x; cout<<"grade Kelvin ="<<x-273.15<<"grade Celsius"<<endl;}



    //Masa!!!!
  else  if(var=="kilograme")
        {cin>>x;
        cout<<x; cout<<"kilograme ="<<x*1000<<"grame"<<endl;
         cout<<x; cout<<"kilograme ="<<x*100<<"hectograme"<<endl;
          cout<<x; cout<<"kilograme ="<<x*10<<"decagrame"<<endl;
           cout<<x; cout<<"kilograme ="<<x/1000<<"miligrame"<<endl;
            cout<<x; cout<<"kilograme ="<<x/10<<"decigrame"<<endl;
             cout<<x; cout<<"kilograme ="<<x/100<<"centigrame"<<endl;
              cout<<x; cout<<"kilograme ="<<x*1000<<"tone"<<endl;}

    else    if(var=="hectogram")
         { cin>>x;
         cout<<x; cout<<"hectograme ="<<x*1000<<"kilograme"<<endl;
          cout<<x; cout<<"hectograme ="<<x*1000<<"decagrame"<<endl;
           cout<<x; cout<<"hectograme ="<<x*1000<<"miligrame"<<endl;
            cout<<x; cout<<"hectograme ="<<x*1000<<"decigrame"<<endl;
             cout<<x; cout<<"hectograme ="<<x*1000<<"centigrame"<<endl;
              cout<<x; cout<<"hectograme ="<<x*1000<<"grame"<<endl;
               cout<<x; cout<<"hectograme ="<<x*1000<<"tone"<<endl;}
     else   if(var=="decagram")
         { cin>>x;
         cout<<x; cout<<"decagrame ="<<x*1000<<"kilograme"<<endl;
          cout<<x; cout<<"decagrame ="<<x*1000<<"grame"<<endl;
           cout<<x; cout<<"decagrame ="<<x*1000<<"decigrame"<<endl;
            cout<<x; cout<<"decagrame ="<<x*1000<<"centigrame"<<endl;
             cout<<x; cout<<"decagrame ="<<x*1000<<"miligrame"<<endl;
              cout<<x; cout<<"decagrame ="<<x*1000<<"hectograme"<<endl;}
      else  if(var=="decigram")
         { cin>>x;
         cout<<x; cout<<"decigrame="<<x*1000<<"kilograme"<<endl;
          cout<<x; cout<<"decigrame ="<<x*1000<<"grame"<<endl;
           cout<<x; cout<<"decigrame ="<<x*1000<<"decagrame"<<endl;
            cout<<x; cout<<"decigrame ="<<x*1000<<"centigrame"<<endl;
             cout<<x; cout<<"decigrame ="<<x*1000<<"miligrame"<<endl;
              cout<<x; cout<<"decigrame ="<<x*1000<<"hectograme"<<endl;
               cout<<x; cout<<"decigrame ="<<x*1000<<"tone"<<endl;}
      else  if(var=="gram")
         { cin>>x;
         cout<<x; cout<<"grame ="<<x/1000<<"kilograme"<<endl;
          cout<<x; cout<<"grame ="<<x/10<<"decagrame"<<endl;
           cout<<x; cout<<"grame ="<<x*10<<"decigrame"<<endl;
            cout<<x; cout<<"grame ="<<x/100<<"hectograme"<<endl;
             cout<<x; cout<<"grame ="<<x*100<<"centigrame"<<endl;
              cout<<x; cout<<"grame ="<<x*1000<<"miligrame"<<endl;
               cout<<x; cout<<"grame ="<<x/1000000<<"tone"<<endl;}
     else   if(var=="miligram")
        {cin>>x;
         cout<<x; cout<<"miligrame ="<<x/1000000<<"kilograme"<<endl;
          cout<<x; cout<<"miligrame ="<<x/10000<<"hectograme"<<endl;
           cout<<x; cout<<"miligrame ="<<x/1000<<"decagrame"<<endl;
            cout<<x; cout<<"miligrame ="<<x/1000<<"grame"<<endl;
             cout<<x; cout<<"miligrame ="<<x/100<<"decigrame"<<endl;
              cout<<x; cout<<"miligrame ="<<x/10<<"centigrame"<<endl;
               cout<<x; cout<<"miligrame =10^(-9)"<<x<<"tone"<<endl;}
      else  if(var=="centigram")
          { cin>>x;
         cout<<x; cout<<"centigrame ="<<x/100<<"grame"<<endl;
          cout<<x; cout<<"centigrame ="<<x/10000<<"hectograme"<<endl;
           cout<<x; cout<<"centigrame ="<<x/1000<<"decagrame"<<endl;
            cout<<x; cout<<"centigrame ="<<x/10<<"decigrame"<<endl;
             cout<<x; cout<<"centigrame ="<<x*10<<"miligrame"<<endl;
              cout<<x; cout<<"centigrame ="<<x/100000<<"kilograme"<<endl;
               cout<<x; cout<<"centigrame ="<<x*1000<<"tone"<<endl;}
      else  if(var=="tone")
               { cin>>x;
         cout<<x; cout<<"tone ="<<x*1000<<"kilograme"<<endl;
          cout<<x; cout<<"tone ="<<x*10000<<"hectograme"<<endl;
           cout<<x; cout<<"tone ="<<x*100000<<"decagrame"<<endl;
            cout<<x; cout<<"tone ="<<x*1000000<<"grame"<<endl;
             cout<<x; cout<<"tone ="<<x*10000000<<"decigrame"<<endl;
              cout<<x; cout<<"tone ="<<x*100000000<<"centigrame"<<endl;
               cout<<x; cout<<"tone ="<<x*1000000000<<"miligrame"<<endl;}







             // Presiune !!!!
      else  if(var=="bar")
             { cin>>x;
         cout<<x; cout<<"bar ="<<x*14.21<<"psi"<<endl;}
      else   if(var=="psi")
             { cin>>x;
         cout<<x; cout<<"psi ="<<x/14.21<<"bar"<<endl;}





             // !!!!Timp
    else  if(var=="minute")
      { cin>>x;
      cout<<x; cout<<"minute ="<<x*60<<"secunde"<<endl;
      cout<<x; cout<<"minute ="<<x*60000<<"milisecunde"<<endl;
      cout<<x; cout<<"minute ="<<x/60<<"ore"<<endl;
       }
    else    if(var=="secunde")
      { cin>>x;
      cout<<x; cout<<"secunde ="<<x/60<<"minute"<<endl;
      cout<<x; cout<<"secunde ="<<x*1000<<"milisecunde"<<endl;
      cout<<x; cout<<"secunde ="<<x/3600<<"ore"<<endl;
       }
    else    if(var=="milisecunde")
      { cin>>x;
      cout<<x; cout<<"milisecunde ="<<x/60000<<"secunde"<<endl;
      cout<<x; cout<<"milisecunde ="<<x/60000/60<<"minute"<<endl;
      cout<<x; cout <<"milisecunde ="<<x/60000/3600<<"ore"<<endl;
      }
     else   if(var=="ore")
      { cin>>x;
      cout<<x; cout<<"ore ="<<x*3600<<"secunde"<<endl;
      cout<<x; cout<<"ore ="<<x*3600*60000<<"milisecunde"<<endl;
      cout<<x; cout<<"ore ="<<x*60<<"minute"<<endl;
       }








       //!!!!Consum combustibil

 else   if(var=="litri/100km")
    {cin>>x;
    cout<<x; cout<<"litri/100km ="<<100*3.78/1.6/x<<"mile/galon"<<endl;
    cout<<x; cout<<"litri/100km ="<<100/x<<"kilometri la litru"<<endl;
    }
 else    if(var=="mile/galon")
    {cin>>x;
    cout<<x; cout<<"mile/galon ="<<100*3.78/1.6/x<<"litri/100km"<<endl;
    cout<<x; cout<<"mile/galon ="<<100/100*3.78/1.6/x<<"kilometri la litru"<<endl;
    }
  else      if(var=="kilometri la litru")
    {cin>>x;
    cout<<x; cout<<"kilometri la litru ="<<100*3.768/1.6/x/100*x<<"mile/galon"<<endl;
    cout<<x; cout<<"kilometri la litru ="<<100*x<<"litri/100km"<<endl;}


    //!!! Densitate
 else   if(var=="kg/m^3")
{ cin>>x;
cout<<x; cout<<"kg/m^3 ="<<x/1000000<<"kg/cm^3"<<endl;
cout<<x; cout<<"kg/m^3 ="<<x*1000<<"g/m^3"<<endl;
cout<<x; cout<<"kg/m^3 ="<<x/1000<<"g/cm^3"<<endl;
}
  else  if(var=="kg/cm^3")
{ cin>>x;
cout<<x; cout<<"kg/cm^3 ="<<x*1000000<<"kg/m^3"<<endl;
cout<<x; cout<<"kg/cm^3 ="<<x*1000000000<<"g/m^3"<<endl;
cout<<x; cout<<"kg/cm^3 ="<<x*1000<<"g/cm^3"<<endl;
}
  else  if(var=="g/m^3")
{ cin>>x;
cout<<x; cout<<"g/m^3 ="<<x/1000/1000000<<"kg/cm^3"<<endl;
cout<<x; cout<<"g/m^3 ="<<x/1000<<"kg/m^3"<<endl;
cout<<x; cout<<"g/m^3 ="<<x/1000/1000<<"g/cm^3"<<endl;}
  else  if(var=="g/cm^3")
{ cin>>x;
cout<<x; cout<<"g/cm^3 ="<<x/1000<<"kg/cm^3"<<endl;
cout<<x; cout<<"g/cm^3 ="<<x*1000000<<"g/m^3"<<endl;
cout<<x; cout<<"g/cm^3 ="<<x*1000<<"kg/m^3"<<endl;
}


//!!!!Energie
else if(var=="jouli")
    {cin>>x;
    cout<<x; cout<<"jouli ="<<x/4184<<"kcal"<<endl;
    cout<<x; cout<<"jouli ="<<x/4.184<<"cal"<<endl;
    }
else if(var=="kcal")
  {cin>>x;
  cout<<x; cout<<"kcal ="<<x*4184<<" jouli"<<endl;
  cout<<x; cout<<"kcal ="<<x*4184/4.184<<" cal"<<endl;
  }
else if(var=="cal")
{cin>>x;
cout<<x; cout<<"cal ="<<x*4.184/4184<<" kcal"<<endl;
cout<<x; cout<<"cal ="<<x*4.184<<" jouli"<<endl;
}
i++;}
return 0;}
