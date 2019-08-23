//
// Created by Tomev on 23.08.2019.
// A Stonewt class definition from S. Prata's C++ Primer Plus VI ed.
// Modified as instructed in problem 11.5.
//

#ifndef INC_5_STONEWT_H
#define INC_5_STONEWT_H

enum WeightMode {stones, pounds_int, pounds};

class Stonewt {
  public:
    explicit Stonewt(double lbs, WeightMode m = stones);
    Stonewt(int stn, double lbs, WeightMode m = stones);
    explicit Stonewt(WeightMode m = stones);
    ~Stonewt() = default;
    void setMode(WeightMode newMode);
    friend std::ostream & operator<<(std::ostream & c, const Stonewt & stonewt);
    friend Stonewt operator+(const Stonewt & stonewt1, const Stonewt & stonewt2);
    friend Stonewt operator-(const Stonewt & stonewt1, const Stonewt & stonewt2);
    friend Stonewt operator*(const double & n, const Stonewt & stonewt);
  private:
    enum {Lbs_per_stn = 14};
    WeightMode mode;
    int stone;
    double pds_left;
    double pounds;
};

#endif //INC_5_STONEWT_H
