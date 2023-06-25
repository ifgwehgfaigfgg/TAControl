# TAControl
Library for controlling TA6586

<a id="usage"></a>
## Using
```cpp
TAControl(byte in1, byte in2);
		
void write(int value);    //from -255 to 255
void lock();
		
byte getIn1();
byte getIn2();
void setIn1(byte in1);
void setIn2(byte in2);
```
