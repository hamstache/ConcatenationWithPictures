#ifndef __Picture_with_P_Node__Picture__
#define __Picture_with_P_Node__Picture__
#include <iostream>
using namespace std;

class P_Node;
class Picture;
Picture  reframe( Picture const&, char, char, char );


class Picture {
public:
    Picture();
    Picture(const char* const * pLines, int nLines);
    Picture(const Picture& other);
    Picture& operator= (const Picture& other);
    ~Picture();
    
    friend ostream& operator<<(ostream& os , const Picture& pic);
    
    friend Picture frame(const Picture& pic);
    friend Picture reframe(const Picture& , char, char, char);
    friend Picture operator&( const Picture& top, const Picture& bottom);
    friend Picture operator|( const Picture& left, const Picture& right);
    
private:
    Picture( P_Node* pnode);
    friend class String_Pic;
    friend class Frame_Pic;
    friend class HCat_Pic;
    friend class VCat_Pic;
    
    int height() const;
    int width() const;
    void display(ostream& os, int x, int y) const;
    
public:
    void showDebug() const;
private:
    P_Node* _pnode;
};

#endif
