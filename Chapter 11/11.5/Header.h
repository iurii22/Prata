// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
	enum Mode {STONE_INT, POUNDS_INT, POUNDS_DOUBLE};     // 3 modes  (1 the object is interpreted in stone form, 2 integer pounds form ,  3 floating - point pounds form) 
	
private:
	Mode mode; 
	enum {Lbs_per_stn = 14 };							 // pounds per stone
	int stone;	   									   // whole stones
	double pounds;
	
public:		
	Stonewt();                    
	Stonewt(double lbs, Mode form = STONE_INT);          // constructor for double pounds
	Stonewt(int lbs, Mode form = STONE_INT);				 // constructor for stone, lbs
	~Stonewt();
	Stonewt operator+(const Stonewt & d) const;     //const told, that he won't change an object which we're calling
	Stonewt operator-(const Stonewt & d) const;
	Stonewt operator*(double n) const; 

	
	friend std::ostream & operator <<(std::ostream & os, const Stonewt & c);    // show weight in pounds or stone format
	friend Stonewt operator*(double n, const Stonewt & g);
};
#endif
