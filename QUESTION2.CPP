#include <iostream>
using namespace std;
class student
{ public:
  int roll;
  void getroll(int r)
  { roll=r;
  }
  void putroll()
  {cout<<"roll="<<roll;
  }
};
  class test:public student
  { public:
    int sub1,sub2;
    void getmarks(int x,int y)
    { sub1=x;
      sub2=y;
    }
    void putmarks()
    { cout<<sub1<<endl<<sub2<<endl;
    }
  };
    class sports
    { protected:
      int score;
      public:
      void getscore(int s)
      { score=s;
      }
      void putscore()
      {cout<<"score="<<score<<endl;
      }
    };
    class result:public test,public sports
    {int total;
     public:
     void display()
     { total=sub1+sub2+score;
       cout<<"total="<<total;
       
     }
    };
     
int main()
{   result s;
int roll,marks1,marks2,SCORE;
cout<<"Enter Roll no"<<endl;
cin>>roll;
s.getroll(roll);
cout<<"Marks"<<endl;
cin>>marks1>>marks2;
    s.getmarks(marks1, marks2);
    cout<<"SCORE"<<endl;
cin>>SCORE;
    s.getscore(SCORE);
    s.display();
    return 0;
}