#include <iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int age,standard=0;
    string first_name,last_name;
    public:
    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    void set_age(int newage)
    {
        age=newage;
    }
    void set_standard(int newstandard)
    {
    standard=newstandard;
    }
    void set_first_name(string First_name)
    {
        first_name=First_name;
    } 
    void set_last_name(string Last_name)
    {
        last_name=Last_name;
    } 
    int get_age()
    {return age;}
    string get_last_name()
    {return last_name; }
    string get_first_name()
    {return first_name;}
    int get_standard()
    {return standard;}
    string to_string()
    {stringstream Sti;
    char c=',';
        Sti<<age<<c<<first_name<<c<<last_name<<c<<standard;
        return Sti.str();}
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
