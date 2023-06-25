#pragma once
#include <Arduino.h>

class TAControl{
	public:
		TAControl(byte in1, byte in2);
		
		void write(int value);
		void lock();
		
		byte getIn1();
		byte getIn2();
		void setIn1(byte in1);
		void setIn2(byte in2);
		
	private:
		byte _in1;
		byte _in2;
};