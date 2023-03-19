#include <iostream>
#include <string>

using namespace std;

class Ocean {
public:
    Ocean() : name("Неизвестный"), location("Неизвестный"), size(0), depth(0), surfaceArea(0) {}
    Ocean(string n, string l, int s, int d, int sa) : name(n), location(l), size(s), depth(d), surfaceArea(sa) {}

    string getName() const { return name; }
    string getLocation() const { return location; }
    int getSize() const { return size; }
    int getDepth() const { return depth; }
    int getSurfaceArea() const { return surfaceArea; }

    void setName(string n) { name = n; }
    void setLocation(string l) { location = l; }
    void setSize(int s) { size = s; }
    void setDepth(int d) { depth = d; }
    void setSurfaceArea(int sa) { surfaceArea = sa; }

    virtual void print() const {
        cout << "Название: " << name << endl;
        cout << "Локация: " << location << endl;
        cout << "Размер: " << size << endl;
        cout << "Глубина: " << depth << endl;
        cout << "Площадь поверхности: " << surfaceArea << endl;
    }

private:
    string name;
    string location;
    int size;
    int depth;
    int surfaceArea;
};