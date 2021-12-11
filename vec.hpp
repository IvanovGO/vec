#include <string>


typedef struct _v { float x; //
		     float y;
                     float z;} _v_;

class vec {
public:  float x;
	 float y;
	 float z;
	 float t;
	vec();
	vec add(vec a, vec b );
	vec add(vec a, double term );
	vec mul(vec a, vec b);
	vec mul(vec a, double factor) ;
	void print();
	  friend vec operator + ( vec a, vec b);
	  friend vec operator + ( vec a, double term);
  	  friend vec operator + ( vec a, int term);
	  friend vec operator * ( vec a, vec b);
	  friend vec operator * ( vec a, double factor);
  	  friend vec operator * ( vec a, int factor);
  	  vec operator = (  _v vec);
  	  vec operator = (  float k);
  	  vec operator = (  int i);
          friend std::ostream& operator<< (std::ostream &out, const vec &v);
	  };
