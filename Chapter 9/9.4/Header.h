

namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales & s);
}

/*
		The first file should be a header file that contains the namespace.The second file
		should be a source code file that extends the namespace to provide definitions for
		the three prototyped functions.The third file should declare two Salesobjects.It
		should use the interactive version of setSales()to provide values for one structure
		and the non - interactive version of setSales()to provide values for the second
		structure.It should display the contents of both structures by using
		showSales(). 
*/