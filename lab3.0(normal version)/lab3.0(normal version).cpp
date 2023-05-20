#include <iostream>
#include <stdio.h>
#include <string>
#include <set>
using namespace std;

static int N = 1;
class Mehanisms {
private:
    string mehan;
    set<string> MyArr;
public:
    virtual void Mehanism() const = 0;

    Mehanisms() {
        cout << "Constructor work" << endl;
    }
    
    //Mehanisms(string valueMehan) {
    //    mehan = valueMehan;
    //    void add(string valueMehan) {
    //        MyArr.insert(mehan);
    //    }
    //}

    string GetName() {
        return mehan;
    }

    void SetName(string mehan) {
        this->mehan = mehan;
        MyArr.insert(mehan);
       
    }

    //void add(string mehan) {
    //    MyArr.insert(mehan);
    //}

    void print() {
        for (auto& item : MyArr) {
            cout << item << endl;
            cout << N++ << endl;
        }
    }
    ~Mehanisms() {
        cout << "Destructor work" << endl;
    }
};
class Vurib : public Mehanisms {
protected:
    string vyrib;
public:
    void Mehanism() const override {
        //N++;
    };
};
class Detal : public Mehanisms {
protected:
    string detal;
public:
    void Mehanism() const override {
        //N++;
    };
};
class Vyzol : public Mehanisms {
protected:
    string vyzol;
public:
    void Mehanism() const override {
        //N++;
    };
};
int main()
{
    set<string>MyArr;
    cout << "Input mehanism: " << endl;
    string mh;
    cin >> mh;
  
    Vurib vur;
    cout << "Input vurib: " << endl;
    string word;
    cin >> word;
    vur.SetName(word);
    vur.GetName();
    //vur.add(word);

    Detal det;
    cout << "Input detal: " << endl;
    string d;
    cin >> d;
    det.SetName(d);
    det.GetName();
    //det.add(d);

    Vyzol vz;
    cout << "Input vyzol: " << endl;
    string v;
    cin >> v;
    vz.SetName(v);
    vz.GetName();
    //vz.add(v);
    cout << "Elements of " << mh << ":" << endl;
    vur.print();
    det.print();
    vz.print();

}