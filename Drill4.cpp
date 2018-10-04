//Kiss Máté

#include "std_lib_facilities.h"

int main()
{
    vector <double>v;
    double a, ossz=0, maxi, mini;
    string mert;
    cout<<"\nHa ki szeretne lepni, a mertekegyseg helyere irja a | karakter (pl 23| )\n";

    while (mert!="|")
    {
        cout<<"Adja meg a hosszt(cm, m, in, ft):\n";
        cin>>a;
        cin>>mert;

        if (mert=="m") {v.push_back(a);}
        else if (mert=="cm") {v.push_back(a/100);}
        else if (mert=="in") {v.push_back(a*0.0254);}
        else if (mert=="ft") {v.push_back(a*0.3048);}
        else if (mert=="|") {cout<<"";}
        else {cout<<"Nem alkalmazhato mertekegyseg.\n";}

    }
    cout<<"\nA beolvasott elemek szama: "<<v.size()<<"\n";
    cout<<"\nA beolvasott elemek sorba (m-ben): \n";

    double csere=0;
    for(int i=0; i<v.size()-1; i++){
        for(int k=i+1; k<v.size(); k++){
            if (v[i]>v[k])
            {
                csere=v[i];
                v[i]=v[k];
                v[k]=csere;
            }}}

    for (int i=0; i<v.size(); i++)
    {cout<<v[i]<<"  ";}

    for (int i=0; i<v.size(); i++){
        ossz=ossz+v[i];
    }
    cout<<"\n\nOsszeguk m-ben: "<<ossz<<"\n";

    mini=v[0];
    cout<<"\nA legkisebb elem: "<<mini;
    double m=0;
    for (int i=0; i<v.size(); i++){
            m=i;}
    maxi=v[m];
    cout<<"\nA legnagyobb elem: "<<maxi<<"\n";

    keep_window_open();
}
