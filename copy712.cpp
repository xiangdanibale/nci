#include <iostream>
using namespace std;
class fenshu
{
int fenzi;
int fenmu;
public:
//	fenshu(int x,int y)
//	{
//		fenzi=x;
//		fenmu=y;
//	}
friend ostream & operator<< (ostream & os,const fenshu & s)//жиди<<
{
os <<  s.fenzi <<" "<< s.fenmu ;
return os;
}
friend istream & operator>> (istream & is,fenshu & s)//жиди>>
{
int a,b;
is >> a >> b;
//fenshu t(a,b);
//s.fenzi=t.fenzi;
//s.fenmu=t.fenmu;
s.fenzi=a;
s.fenmu=b;
return is;
}
fenshu &operate+(fenshu &a,fenshu &b)
{
	return fenshu(a.fenzi+b.fenzi,a.fenmu+b.fenmu);
}
};
int main()
{
	fenshu a,b,c;
	cin>>a>>b;
	c=a+b;
	cout<<c;
	return 0;
}
