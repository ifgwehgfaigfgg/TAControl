#include <TAControl.h>
TAControl::TAControl(byte in1, byte in2){
	_in1 = in1;
	_in2 = in2;
	pinMode(_in1, OUTPUT);
	pinMode(_in2, OUTPUT);
}

void TAControl::write(int value){
	if(value >= 0){
		digitalWrite(_in2, 0);
		analogWrite(_in1, value);
	}
	else{
		digitalWrite(_in2, 1);
		value = -value;
		analogWrite(_in1, 255 - value);
	}
	 
}

void TAControl::lock(){
	digitalWrite(_in1, HIGH);
	digitalWrite(_in2, HIGH);
}

byte TAControl::getIn1(){return _in1;}
byte TAControl::getIn2(){return _in2;}
void TAControl::setIn1(byte in1){_in1 = in1; pinMode(in1, OUTPUT);}
void TAControl::setIn2(byte in2){_in1 = in2; pinMode(in2, OUTPUT);}
