#include "Libraries.h"
#include "Date.h"
#include "RandomNumberGenerator.h"

class RandomDateGenerator {
private:
    RandomNumberGenerator _rng;
public:
    Date next(); 
};
