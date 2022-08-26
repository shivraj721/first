#include<iostream>
using namespace std;
class Distance
{
int feet;
int inch;
public:
 Distance()
{
feet=0;
inch=0;
}
Distance(int f,int i)
{
 feet=f;
inch=i;
if(i>=12)
{
feet=feet+(i/12);
inch=i%12;
}

}
void setFeet(int f)
{
feet=f;
}
int getFeet()
{
return feet;
}
void setInch(int i)
{
inch=i;
}
int getInch()
{
return inch;
}
void disp()
{
cout<<feet<<"feet,"<<inch<<endl;
}
};
int main()
{
Distance d1;
d1.disp();
Distance d2(3,4);
d2.disp();
Distance d3(4,14);
d3.disp();


return 0;
}
