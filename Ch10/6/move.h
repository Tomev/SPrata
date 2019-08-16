//
// Created by Tomev on 16.08.2019.
//

#ifndef INC_6_MOVE_H
#define INC_6_MOVE_H

class Move {
  private:
    double x;
    double y;
  public:
    explicit Move(double a = 0, double b = 0); // Ustawia x = a i y = b
    void showMove() const; // Wyświetla
    Move add(const Move &m) const;
    // Powyższa metoda sumuje obiekty move.
    void reset(double a = 0, double b = 0);
};

#endif //INC_6_MOVE_H
