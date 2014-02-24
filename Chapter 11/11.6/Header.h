// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{

private:
	           
	double pounds;                // entire weight in pounds

public:
	Stonewt(double lbs);          // constructor for double pounds
	
	Stonewt();                    // default constructor
	~Stonewt();
	void show_lbs();        // show weight in pounds format
	      
	bool operator>(const Stonewt & b)const;
	bool operator<(const Stonewt & b)const;
	bool operator>=(const Stonewt & b)const;
	bool operator<=(const Stonewt & b)const;
	bool operator!=(const Stonewt & b)const;
	bool operator==(const Stonewt & b)const;

	friend std::ostream & operator<<(std::ostream & os, const Stonewt & v);
	//friend std::istream & operator>>(std::istream & is, const Stonewt & v); //   warning C4717: 'operator>>' : recursive on all control paths, function will cause runtime stack overflow  

};
#endif
