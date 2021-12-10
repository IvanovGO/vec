#include <stdio.h>

class vec {
public:	float x;
	float y;
	float z;
	vec();
	vec add(vec a,vec b );
	void print(){printf("x=%3.3f y=%3.3f z=%3.3f\n",this->x,this->y,this->z);}
	  
	  friend vec operator+( vec a, vec b);
	  
	  };


vec::vec(){this->x=1;this->y=2;this->z=3;}

vec vec::add(vec a, vec b){
this->x+=a.x;
this->y+=a.y;
this->z+=a.z;
return *this;
}


vec operator+(vec a, vec b)
{a.x+=b.x;
a.y+=b.y;
a.z+=b.z;
return a;}

int main (){
vec a,b,c;
a=b+c+a;
c.print();
b.print();
a.print();
return 0;
}
