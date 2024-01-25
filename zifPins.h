// Mapping of chip pins (from chip socket) to Arduino pins

// DuT pin:                  1  2                                             3   4
//                           -------------------------------------------------------
const int chipPins4 [4]   = {2, 3,                                           A4, A5};

// DuT pin:                  1  2  3                                      4   5   6
//                           -------------------------------------------------------
const int chipPins6 [6]   = {2, 3, 4,                                    A3, A4, A5};

// DuT pin:                  1  2  3  4                               5   6   7   8
//                           -------------------------------------------------------
const int chipPins8 [8]   = {2, 3, 4, 7,                             A2, A3, A4, A5};

// DuT pin:                  1  2  3  4  5                        6   7   8   9  10
//                           -------------------------------------------------------
const int chipPins10 [10] = {2, 3, 4, 7, 8,                      A1, A2, A3, A4, A5};

// DuT pin:                  1  2  3  4  5  6                 7   8   9  10  11  12
//                           -------------------------t------------------------------
const int chipPins12 [12] = {2, 3, 4, 7, 8, 9,               A0, A1, A2, A3, A4, A5};

// DuT pin:                  1  2  3  4  5  6  7          8   9  10  11  12  13  14
//                           -------------------------------------------------------
const int chipPins14 [14] = {2, 3, 4, 7, 8, 9, 5,        13, A0, A1, A2, A3, A4, A5};

// DuT pin:                  1  2  3  4  5  6  7  8   9  10  11  12  13  14  15  16
//                           -------------------------------------------------------
const int chipPins16 [16] = {2, 3, 4, 7, 8, 9, 5, 6, 12, 13, A0, A1, A2, A3, A4, A5};

// for forcing the Gnd pin to be ground, bypassing the current-limiting resistors

const byte DUT_GROUND_A = 7;  // this pin is to be considered Gnd on the DuT (alternative A)
const byte GROUND_PINA = 11;   // which is wired to this pin on the Arduino

const byte DUT_GROUND_B = 8;  // this pin is to be considered Gnd on the DuT (alternative B)
const byte GROUND_PINB = 10;  // which is wired to this pin on the Arduino

