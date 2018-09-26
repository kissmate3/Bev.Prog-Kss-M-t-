//Kiss Mate

#include "std_lib_facilities.h"

int main()

{
string first_name, friend_name;
char named_friend_sex=0;
int age;

cout<<"Enter the name of the person you want to write to\n";
cin>>first_name;
cout<<"Please give me your another friend name.\n";
cin>>friend_name;
cout<<"Please, If your friend is a male, type in: m or female type: f\n";
cin>>named_friend_sex;
cout<<"Please, give the age of the recipient.\n";
cin>>age;

cout<<"\nDear "<<first_name;
cout<<"\n  How are you?\nI am fine. I miss you\nI think We should meet up.I know a good restaurant.\n";
cout<<"\nHave you seen "<<friend_name<<" lately?";

if (named_friend_sex=='m') {cout<<"\nIf you see "<<friend_name<<" please ask him to call me.\n";}
else if (named_friend_sex=='f') {cout<<"\nIf you see "<<friend_name<<" please ask her to call me.\n";}

if (0>=age || age>=110) {simple_error("you are kidding!"); }
else {cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
            if (age<12) {cout<<"Next year you will be "<<age+1;}
            else if (age==17) {cout<<"\nNext year you will be able to vote.\n";}
            else if (age>70) {cout<<"I hope you are enjoying retirement.\n";}
}

cout<<"\nYours sincerely,\n\n";
cout<<first_name<<"\n";


keep_window_open();
}
