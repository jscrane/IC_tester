
// Mapping of chip pins (from chip socket) to Arduino pins

// DuT pin:                   1  2                                             3   4
//                           -------------------------------------------------------
const int chipPins4 [4]   = {10, 9,                                           A1, A0};

// DuT pin:                   1  2  3                                      4   5   6
//                           -------------------------------------------------------
const int chipPins6 [6]   = {10, 9, 8,                                    A2, A1, A0};

// DuT pin:                   1  2  3  4                               5   6   7   8
//                           -------------------------------------------------------
const int chipPins8 [8]   = {10, 9, 8, 7,                             A3, A2, A1, A0};

// DuT pin:                   1  2  3  4  5                        6   7   8   9  10
//                           -------------------------------------------------------
const int chipPins10 [10] = {10, 9, 8, 7, 6,                      A4, A3, A2, A1, A0};

// DuT pin:                   1  2  3  4  5  6                 7   8   9  10  11  12
//                           -------------------------------------------------------
const int chipPins12 [12] = {10, 9, 8, 7, 6, 5,               A5, A4, A3, A2, A1, A0};

// DuT pin:                   1  2  3  4  5  6  7          8   9  10  11  12  13  14
//                           -------------------------------------------------------
const int chipPins14 [14] = {10, 9, 8, 7, 6, 5, 4,        12, A5, A4, A3, A2, A1, A0};

// DuT pin:                   1  2  3  4  5  6  7  8   9  10  11  12  13  14  15  16
//                           -------------------------------------------------------
const int chipPins16 [16] = {10, 9, 8, 7, 6, 5, 4, 3, 11, 12, A5, A4, A3, A2, A1, A0};

// for forcing the Gnd pin to be ground, bypassing the current-limiting resistors

const byte DUT_GROUND_A = 7;  // this pin is to be considered Gnd on the DuT (alternative A)
const byte GROUND_PINA = 2;   // which is wired to this pin on the Arduino

const byte DUT_GROUND_B = 8;  // this pin is to be considered Gnd on the DuT (alternative B)
const byte GROUND_PINB = 13;  // which is wired to this pin on the Arduino

