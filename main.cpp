////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Electronix Lab  
// COPYRIGHT 2017
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* CONTENTS

I. INTRODUCTION 
II. ONGOING QUESTIONS
III. COMPONENTS
IV. LAYOUT
VII. CIRCUIT STATE
VIII. CALCULATIONS
IX. BOOKKEEPING
X. MAIN 

*/
// Using pointers vs references. Should use references in C when
// calling function modifies variable
// http://stackoverflow.com/questions/7058339/when-to-use-references-vs-pointers

// STYLE GUIDELINES
// https://developer.apple.com/library/content/documentation/Darwin/Conceptual/KernelProgramming/style/style.html
/* 

Use prefixes in function and method names to make it easier to see relationships between them. 

For example, Apple uses NS, CF, IO, and other prefixes to indicate that functions belong to specific 
frameworks. This might be as simple as prefixing a function with the name of the enclosing or related 
class, or it might be some other scheme that makes sense for your project.

These are only suggested guidelines. Your company or organization should adopt its own set of guidelines 
within the constraints of the basic conventions described in the previous section. These guidelines should
Provide a good starting point.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* ONGOING PRIORITIES

1. Should we declare functions up top?
2. To what extent do we need to use pointers? References?
3. Study source code 
4. Use freelancer for graphic design of app 
5. Initialize this repository with a README
This will let you immediately clone the repository to your computer. Skip this step if you’re importing an existing repository.

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// COMPONENTS ///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// For each component determine what you would like the input and output to be 

// This transistor configuration provides a low input impedance while offering a high output impedance. 
// Although the voltage is high, the current gain is low and the overall power gain is also low when
// compared to the other transistor configurations available. 
// The other salient feature of this configuration is that the input and output are in phase.

double COMP_Transistor( double LowInputImpedance ) {
	double HighOutputImpedance; 
	return HighOutputImpedance; 
}

void COMP_RadioCircuits() {}
void COMP_Terminals() {}
void COMP_Batteries() {}
void COMP_Speaker() {}
void COMP_IntegratedCircuit() {}
void COMP_DualOPAmp() {}

void COMP_CBSCell() {}
void COMP_DigitalDisplay() {}
void COMP_Control() {}
void COMP_Leds() {}
void COMP_Diodes() {}
void COMP_Switch() {}


void COMP_Key() {}
void COMP_Resistors() {}
void COMP_Capacitors() {}
void COMP_Transistors() {}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// LAYOUT
void Layout() {}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  CIRCUIT STATE
/////////////////////////////////////////////////////////////////////////////////////////////////////////
int CircuitState() { 
	int state; 

	// 0: off. 1: on

	return state; 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// CALCULATIONS 
/*

SERIES CIRCUIT

I = I = ... I
R = R + ... R
V = V + .. V
1/C = 1/C + ... 1/C

PARALLEL CIRCUIT 
I = I + ... I
1/R = 1/R + ... 1/R
V = V = ... V
C = C + ... C

Series Circuits
The current is the same in every resistor; this current is equal to that in the battery.
The sum of the voltage drops across the individual resistors is equal to the voltage rating of the battery.
The overall resistance of the collection of resistors is equal to the sum of the individual resistance values,
Rtot = R1 + R2 + R3 + .

Parallel Circuits
The voltage drop is the same across each parallel branch.
The sum of the current in each individual branch is equal to the current outside the branches.
The equivalent or overall resistance of the collection of resistors is given by the equation
1/Req = 1/R1 + 1/R2 + 1/R3 ...

*/

void CALC_Current( bool SeriesOrParallel, int EachOtherParallelBranchIfParalell, double CurrentOutsideOfTheBranchesIfParallel) {
	// For series circuits: the current is the same in every resistor; this current is equal to that in the battery.
	// For parallel circuits: the sum of the current in each individual branch is equal to the current outside of the branches
}

void CALC_Voltage( bool SeriesOrParallel ) { 
	// For series: The sum of the voltage drops across the individual resistors is equal to the voltage rating of the battery.
	// For parallel: The voltage drop is the same across each parallel branch.
}

void CALC_OverallResistance ( bool SeriesOrParallel ) {
	// For series: The overall resistance of the collection of resistors is equal to the sum of the individual resistance values,
    // Rtot = R1 + R2 + R3 + .

    // For parallel: The equivalent or overall resistance of the collection of resistors is given by the equation
    // 1/Req = 1/R1 + 1/R2 + 1/R3 ...

}

void CALC_Power() {}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// BOOK KEEPING 


/////////////////////////////////////////////////////////////////////////////////////////////////////////
// STARTER SET 
void SET_GenericSettings() {}
void SET_StarterSet( int ComponentType, int ComponentInstances) {}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {



/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// INPUTS //////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/// CURRENT IO INPUT BLOCK //////////////////////////////////////////////////////////////////////////////
  std::string IO_current;
  std::cout << "Enter current: "; 
  getline (std::cin, IO_current);
  std::cout << "\n\n"; 
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  
/// VOLTAGE IO INPUT BLOCK //////////////////////////////////////////////////////////////////////////////
  std::string IO_voltage;
  std::cout << "Enter voltage: "; 
  getline (std::cin, IO_voltage);
  std::cout << "\n\n"; 
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// OUTPUTS //////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/// CURRENT IO OUTPUT BLOCK //////////////////////////////////////////////////////////////////////////////
std::cout << "The current is: " << IO_current << "!\n\n";
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/// VOLTAGE IO OUTPUT BLOCK //////////////////////////////////////////////////////////////////////////////
std::cout << "The voltage is: " << IO_voltage << "!\n\n";
/////////////////////////////////////////////////////////////////////////////////////////////////////////


    // function call 
  // CALC_Current ( 1, 0, 0); 





/*

void CALC_Current( bool SeriesOrParallel, int EachOtherParallelBranchIfParalell, double CurrentOutsideOfTheBranchesIfParallel) {
	// For series circuits: the current is the same in every resistor; this current is equal to that in the battery.
	// For parallel circuits: the sum of the current in each individual branch is equal to the current outside of the branches
 */ 
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// DUMMY EXIT 
  std::string sDummyExit;
  std::cout << "Exit? ";
  getline (std::cin, sDummyExit);
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  return 0; 
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////






