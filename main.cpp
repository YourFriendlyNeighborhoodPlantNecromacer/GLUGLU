#include <iostream>
#include "GLUGLU.h"


enum location_type{
    house,
    mine
};

class location{
    public:
    location_type type;

    friend std::ostream& operator << (std::ostream &strm, const location& l){
        strm << l.type;
        return strm;
    }
};

int main(){
    queue<int> a;
    a.append(3);
    a.append(4);
    queue<int> b;
    b.append(5);

    return 0;
}
