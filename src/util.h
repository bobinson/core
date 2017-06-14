// XtraBYtes - The Proof of Signature Blocktech Superchain - http://xtrabytes.global
// Copyright (c) 2017, Zoltan Szabo. All rights reserved.
// Copyright (c) 2017, XtraBYtes Founders and Developers ( see AUTHORS )
// Licensed under GNU General Public License Version 3 or later (the "GPL")

#ifndef XBY_UTIL_H
#define XBY_UTIL_H

#include <string>
#include <time.h>

extern const char* const HEX;

class HexString {
	
  private:
  		char *HEXdata;	
  		int size;
  		bool IsData;
  		
  public:
  		HexString();
  		~HexString();
  		bool Allocate(int Dsize);
  		bool SetBin(char* data);
  		bool SetHex(char* data);
  		bool Wipe();
  		std::string toString();
};

class RandomNumber {
	
private:
    unsigned int Index;
    unsigned int Offset;

    static unsigned int GetPermutation(unsigned int x);

public:
    RandomNumber();
    unsigned int GetNextRandomNumber();

};

#endif // XBY_UTIL_H
