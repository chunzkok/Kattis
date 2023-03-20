#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    ans = ( (x&&y) || (!x&&!y) ) ? false:true;
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    ans = (x&&!y) ? false:true;
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    ans = ( (x&&y) || (!x&&!y) ) ? true:false;
}
