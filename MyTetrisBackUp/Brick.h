//
// Created by User on 08.02.2024.
//

#ifndef SCGSDF_BRICK_H
#define SCGSDF_BRICK_H

class Brick{
    enum brick{
      palka = 1,
      kub = 2,
      ge = 3,
      neGe = 4,
      zyu = 5,
      neZyu = 6,
      te = 7
    };
    explicit Brick(int type);
};

#endif //SCGSDF_BRICK_H
