#include <iostream>
namespace ariel
{
    class Fraction
    {
        int a;
        int b;

        public:
            Fraction();
            Fraction(const int& a,const int& b): a(a),b(b) {};

            Fraction& operator++(){return *this;};
            const Fraction operator++(int){return *this;};
            Fraction& operator--(){return *this;};
            const Fraction operator--(int){return *this;};
            Fraction operator- (const Fraction& c)const{return *this;};
            Fraction operator* (const Fraction& c)const{return *this;};
            Fraction operator/ (const Fraction& c)const{return *this;};
            
            Fraction operator* (const float& c)const{return *this;};


            int get_a()const
            {
            return this->a;
            }

            friend std::ostream& operator<<(std::ostream& os, const Fraction& f)
            {
               // os << f.a << "/" << f.b;
                return os;
            }
            friend Fraction operator+ (const Fraction& a ,const Fraction& b){return a;};
            friend Fraction operator- (const Fraction& b ,const float& c){return b;};

            friend Fraction operator+ (const Fraction& b ,const float& c){return b;};
            friend Fraction operator+ (const float& c, const Fraction& b){Fraction result; return result;};

            friend bool operator> (const Fraction& b ,const float& c){return true;};
            friend bool operator> (const float& c, const Fraction& b){return true;};
            friend bool operator> (const Fraction& c, const Fraction& b){return true;};
           
            friend bool operator< (const Fraction& b ,const float& c){return true;};
            friend bool operator< (const float& c, const Fraction& b){return true;};
            friend bool operator< (const Fraction& c, const Fraction& b){return true;};
           
           
            friend Fraction operator* (const Fraction& b ,const float& c){return b;};
            friend Fraction operator* (const float& c, const Fraction& b ){return b;};
            friend bool operator<= (const Fraction& a ,const Fraction& b){return true;};
            friend bool operator>= (const Fraction& a ,const Fraction& b){return true;};
            friend bool operator== (const Fraction&a, const Fraction& b){return true;};
             friend bool operator<= (const Fraction& a ,const float& b){return true;};
            friend bool operator>= (const Fraction& a ,const float& b){return true;};
            friend bool operator== (const Fraction&a, const float& b){return true;};

    };
           
         
            
}