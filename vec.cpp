#include "vec.hpp"
#include <stdio.h>
#include <ostream>



void vec::print(){printf("x=%3.3f y=%3.3f z=%3.3f\n",this->x,this->y,this->z);}
std::ostream& operator<< (std::ostream &out, const vec &v){
out<<"x="<<v.x<<" y="<<v.y<<" z="<<v.z;
return out;
}	  

vec::vec(){this->x=0;this->y=0;this->z=0;this->t=0;}


vec vec::operator = (  _v vec){
this->x=vec.x;
this->y=vec.y;
this->z=vec.z;
return *this;}

vec vec::operator = ( float k){
this->x=k;
this->y=k;
this->z=k;
return *this;}

vec vec::operator = (  int i){
this->x=i;
this->y=i;
this->z=i;
return *this;}

vec vec::mul(vec a, vec b){
this->x*=a.x;
this->y*=a.y;
this->z*=a.z;
return *this;}


vec vec::add(vec a, vec b){
this->x+=a.x;
this->y+=a.y;
this->z+=a.z;
return *this;}

vec vec::add(vec a, double term){
this->x+=term;
this->y+=term;
this->z+=term;
return *this;}

vec operator*(vec a, vec b)
{a.x*=b.x;
a.y*=b.y;
a.z*=b.z;
return a;}


vec operator*(vec a, double factor )
{a.x*=factor;
a.y*=factor;
a.z*=factor;
return a;}


vec operator*(vec a, int factor )
{a.x*=factor;
a.y*=factor;
a.z*=factor;
return a;}

vec operator+(vec a, vec b)
{a.x+=b.x;
a.y+=b.y;
a.z+=b.z;
return a;}

vec operator+(vec a, double term)
{a.x+=term;
a.y+=term;
a.z+=term;
return a;}

vec operator+(vec a, int term)
{a.x+=term;
a.y+=term;
a.z+=term;
return a;}



