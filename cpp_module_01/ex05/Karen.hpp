#pragma once
#include <iostream>

class Karen
{
private:
	/* data */
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(/* args */);
	~Karen();
	void complain( std::string level );
};
