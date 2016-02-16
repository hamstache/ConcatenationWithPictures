#ifndef __Picture_with_P_Node__VCat_Pic__
#define __Picture_with_P_Node__VCat_Pic__

#include <iostream>
using namespace std;

#include "Pnode.h"
#include "Picture.h"

class VCat_Pic : public P_Node {
private:
    VCat_Pic ( const Picture& top, const Picture& bottom);
    
    int height() const;
    int width() const;
    
    void display( ostream& os, int row, int wd) const;
    Picture reframe(char c, char s, char t);
    
    friend Picture operator& ( const Picture& top, const Picture& bottom);
    
public:
    Picture* getPic();
    
private:
    Picture _top;
    Picture _bottom;
};

#endif