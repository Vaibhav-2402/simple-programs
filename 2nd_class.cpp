#include  "msoftcon.h"  // For Graphic functions
class circle
{
    protected:
    int xco;
    int yco;
    int radius;
    color fillcolor;
    fstyle fillstyle;
    public:
    void set(int x, int y, int r, color fc, fstyle fs)
    {
        xco=x;
        yco=y;
        radius=r;
        fc=fillcolor;
        fs=fillstyle;
    }
    void draw()
    {
        set_color(fillcolor);
        set_fill_style(fillstyle);
        draw cirlce(xco,yco,radius);
    }
};
int main()
{
    init_graphics();   // Initializes graphics
    cirlce c1,c2,c3;
    c1.set(15, 7, 5, cBLUE, X_FILL);
    c2.set(41, 12, 7, cRED, O_FILL);
    c3.set(65, 18, 4, cGREEN, MEDIUM_FILL);
    c1.draw();      //draw circles
    c2.draw();
    c3.draw();
    set_cursor_pos(1, 25);      //lower left corner
    return 0;
}