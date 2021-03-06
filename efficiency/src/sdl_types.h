
const int n_MD_types = 11;
std::vector<TString> MD_types = {
    "B1",
    "B2",
    "B3",
    "B4",
    "B5",
    "B6",
    "E1",
    "E2",
    "E3",
    "E4",
    "E5",
};

const int n_LS_types = 14;
std::map<std::pair<int, int>, int> LS_types_map = {
    {{1  , 2}  , 0} ,
    {{2  , 3}  , 1} ,
    {{3  , 4}  , 2} ,
    {{4  , 5}  , 3} ,
    {{5  , 6}  , 4} ,
    {{1  , 7}  , 5} ,
    {{2  , 7}  , 6} ,
    {{3  , 7}  , 7} ,
    {{4  , 7}  , 8} ,
    {{5  , 7}  , 9} ,
    {{7  , 8}  , 10} ,
    {{8  , 9}  , 11} ,
    {{9  , 10} , 12} ,
    {{10 , 11} , 13} ,
};

std::vector<TString> LS_types = {
    "B1B2",
    "B2B3",
    "B3B4",
    "B4B5",
    "B5B6",
    "B1E1",
    "B2E1",
    "B3E1",
    "B4E1",
    "B5E1",
    "E1E2",
    "E2E3",
    "E3E4",
    "E4E5",
};

const int n_pT4_types = 14;
std::map<std::pair<int, int>, int> pT4_types_map = {
    {{1  , 2}  , 0} ,
    {{2  , 3}  , 1} ,
    {{3  , 4}  , 2} ,
    {{4  , 5}  , 3} ,
    {{5  , 6}  , 4} ,
    {{1  , 7}  , 5} ,
    {{2  , 7}  , 6} ,
    {{3  , 7}  , 7} ,
    {{4  , 7}  , 8} ,
    {{5  , 7}  , 9} ,
    {{7  , 8}  , 10} ,
    {{8  , 9}  , 11} ,
    {{9  , 10} , 12} ,
    {{10 , 11} , 13} ,
};

std::vector<TString> pT4_types = {
    "PB1B2",
    "PB2B3",
    "PB3B4",
    "PB4B5",
    "PB5B6",
    "PB1E1",
    "PB2E1",
    "PB3E1",
    "PB4E1",
    "PB5E1",
    "PE1E2",
    "PE2E3",
    "PE3E4",
    "PE4E5",
};

const int n_T4_types = 17;
std::map<std::vector<int>, int> T4_types_map = {
    {{1 , 2 , 3  , 4}  , 0} ,
    {{1 , 2 , 3  , 7}  , 1} ,
    {{1 , 2 , 7  , 8}  , 2} ,
    {{1 , 7 , 8  , 9}  , 3} ,

    {{2 , 3 , 4  , 5}  , 4} ,
    {{2 , 3 , 4  , 7}  , 5} ,
    {{2 , 3 , 7  , 8}  , 6} ,
    {{2 , 7 , 8  , 9}  , 7} ,

    {{3 , 4 , 5  , 6}  , 8} ,
    {{3 , 4 , 5  , 7}  , 9} ,
    {{3 , 4 , 7  , 8}  , 10} ,
    {{3 , 7 , 8  , 9}  , 11} ,

    // {{4 , 5 , 6  , 7}  , 0} ,  // should be impossible
    {{4 , 5 , 7  , 8}  , 12} ,
    {{4 , 7 , 8  , 9}  , 13} ,

    // {{5 , 6 , 7  , 8}  , 0} ,  // should be impossible
    {{5 , 7 , 8  , 9}  , 14} ,

    // {{6 , 7 , 8  , 9}  , 0} ,  // should be impossible

    {{7 , 8 , 9  , 10} , 15} ,
    {{8 , 9 , 10 , 11} , 16} ,
};

std::vector<TString> T4_types = {
    "B1B2B3B4",
    "B1B2B3E1",
    "B1B2E1E2",
    "B1E1E2E3",

    "B2B3B4B5",
    "B2B3B4E1",
    "B2B3E1E2",
    "B2E1E2E3",

    "B3B4B5B6",
    "B3B4B5E1",
    "B3B4E1E2",
    "B3E1E2E3",

    // 4 , 5 , 6  , 7 ,  // should be impossible
    "B4B5E1E2",
    "B4E1E2E3",

    // 5 , 6 , 7  , 8 ,  // should be impossible
    "B5E1E2E3",

    // 6 , 7 , 8  , 9 ,  // should be impossible

    "E1E2E3E4",
    "E2E3E4E5",
};

const int n_T4x_types = 14;
std::map<std::vector<int>, int> T4x_types_map = {
    {{1 , 2 , 4  , 5}  , 0} ,
    {{1 , 2 , 4  , 7}  , 1} ,
    {{1 , 2 , 8  , 9}  , 2} ,
    {{1 , 7 , 9  ,10}  , 3} ,

    {{2 , 3 , 5  , 6}  , 4} ,
    {{2 , 3 , 5  , 7}  , 5} ,
    {{2 , 3 , 8  , 9}  , 6} ,
    {{2 , 7 , 9  ,10}  , 7} ,

    {{3 , 4 , 8  , 9}  , 8} ,
    {{3 , 7 , 9  ,10}  , 9} ,

    {{4 , 5 , 8  , 9}  , 10} ,
    {{4 , 7 , 9  ,10}  , 11} ,

    {{5 , 7 , 9  ,10}  , 12} ,

    {{7 , 8 , 10 ,11}  , 13} ,
};

std::vector<TString> T4x_types = {
    "B1B2B4B5",
    "B1B2B4E1",
    "B1B2E2E3",
    "B1E1E3E4",

    "B2B3B5B6",
    "B2B3B5E1",
    "B2B3E2E3",
    "B2E1E3E4",

    "B3B4E2E3",
    "B3E1E3E4",

    "B4B5E2E3",
    "B4E1E3E4",

    "B5E1E3E4",

    "E1E2E4E5",
};

const int n_T3_types = 16;
std::map<std::vector<int>, int> T3_types_map = {
    {{1 , 2 ,  3}  , 0} ,
    {{1 , 2 ,  7}  , 1} ,
    {{1 , 7 ,  8}  , 2} ,

    {{2 , 3 ,  4}  , 3} ,
    {{2 , 3 ,  7}  , 4} ,
    {{2 , 7 ,  8}  , 5} ,

    {{3 , 4 ,  5}  , 6} ,
    {{3 , 4 ,  7}  , 7} ,
    {{3 , 7 ,  8}  , 8} ,

    {{4 , 5 ,  6}  , 9} ,
    {{4 , 5 ,  7}  , 10} ,
    {{4 , 7 ,  8}  , 11} ,

    {{5 , 7 ,  8}  , 12} ,

    {{7 , 8 ,  9}  , 13} ,
    {{8 , 9 , 10}  , 14} ,
    {{9 ,10 , 11}  , 15} ,

    // {{5 , 6 ,  7}  , 1} ,  // should be impossible
};

std::vector<TString> T3_types = {
    "B1B2B3",
    "B1B2E1",
    "B1E1E2",

    "B2B3B4",
    "B2B3E1",
    "B2E1E2",

    "B3B4B5",
    "B3B4E1",
    "B3E1E2",

    "B4B5B6",
    "B4B5E1",
    "B4E1E2",

    "B5E1E2",

    "E1E2E3",
    "E2E3E4",
    "E3E4E5",
};

// const int n_TC_types = 3;
// std::map<std::vector<int>, int> TC_types_map = {
//     {{0 , 0 , 1 , 2  , 2  , 3}  , 0} ,
//     {{0 , 0 , 7 , 8  , 8  , 9}  , 1} ,
//     {{0 , 0 , 1 , 2  , 7  , 8}  , 2} ,
// };

const int n_TC_types = 119;
std::map<std::vector<int>, int> TC_types_map = {
    {{0 , 0 , 1 , 2  , 2  , 3}  , 0} ,
    {{0 , 0 , 1 , 2  , 2  , 7}  , 1} ,
    {{0 , 0 , 1 , 2  , 3  , 4}  , 2} ,
    {{0 , 0 , 1 , 2  , 3  , 7}  , 3} ,
    {{0 , 0 , 1 , 2  , 4  , 5}  , 4} ,
    {{0 , 0 , 1 , 2  , 4  , 7}  , 5} ,
    {{0 , 0 , 1 , 2  , 7  , 8}  , 6} ,
    {{0 , 0 , 1 , 2  , 8  , 9}  , 7} ,
    {{0 , 0 , 1 , 7  , 7  , 8}  , 8} ,
    {{0 , 0 , 1 , 7  , 8  , 9}  , 9} ,
    {{0 , 0 , 1 , 7  , 9  , 10} , 10} ,
    {{0 , 0 , 2 , 3  , 3  , 4}  , 11} ,
    {{0 , 0 , 2 , 3  , 3  , 7}  , 12} ,
    {{0 , 0 , 2 , 3  , 4  , 5}  , 13} ,
    {{0 , 0 , 2 , 3  , 4  , 7}  , 14} ,
    {{0 , 0 , 2 , 3  , 5  , 6}  , 15} ,
    {{0 , 0 , 2 , 3  , 5  , 7}  , 16} ,
    {{0 , 0 , 2 , 3  , 7  , 8}  , 17} ,
    {{0 , 0 , 2 , 3  , 8  , 9}  , 18} ,
    {{0 , 0 , 2 , 7  , 7  , 8}  , 19} ,
    {{0 , 0 , 2 , 7  , 8  , 9}  , 20} ,
    {{0 , 0 , 2 , 7  , 9  , 10} , 21} ,
    {{0 , 0 , 3 , 4  , 4  , 5}  , 22} ,
    {{0 , 0 , 3 , 4  , 4  , 7}  , 23} ,
    {{0 , 0 , 3 , 4  , 5  , 6}  , 24} ,
    {{0 , 0 , 3 , 4  , 5  , 7}  , 25} ,
    {{0 , 0 , 3 , 4  , 7  , 8}  , 26} ,
    {{0 , 0 , 3 , 4  , 8  , 9}  , 27} ,
    {{0 , 0 , 3 , 7  , 7  , 8}  , 28} ,
    {{0 , 0 , 3 , 7  , 8  , 9}  , 29} ,
    {{0 , 0 , 3 , 7  , 9  , 10} , 30} ,
    {{0 , 0 , 4 , 5  , 5  , 6}  , 31} ,
    {{0 , 0 , 4 , 5  , 5  , 7}  , 32} ,
    {{0 , 0 , 4 , 5  , 7  , 8}  , 33} ,
    {{0 , 0 , 4 , 5  , 8  , 9}  , 34} ,
    {{0 , 0 , 4 , 7  , 7  , 8}  , 35} ,
    {{0 , 0 , 4 , 7  , 8  , 9}  , 36} ,
    {{0 , 0 , 4 , 7  , 9  , 10} , 37} ,
    {{0 , 0 , 5 , 7  , 7  , 8}  , 38} ,
    {{0 , 0 , 7 , 8  , 10 , 11} , 39} ,
    {{0 , 0 , 7 , 8  , 8  , 9}  , 40} ,
    {{0 , 0 , 7 , 8  , 9  , 10} , 41} ,
    {{0 , 0 , 8 , 9  , 10 , 11} , 42} ,
    {{0 , 0 , 8 , 9  , 9  , 10} , 43} ,
    {{0 , 0 , 9 , 10 , 10 , 11} , 44} ,
    {{1 , 2 , 2 , 3  , 4  , 5}  , 45} ,
    {{1 , 2 , 2 , 3  , 4  , 7}  , 46} ,
    {{1 , 2 , 2 , 3  , 5  , 6}  , 47} ,
    {{1 , 2 , 2 , 3  , 5  , 7}  , 48} ,
    {{1 , 2 , 2 , 3  , 7  , 8}  , 49} ,
    {{1 , 2 , 2 , 3  , 8  , 9}  , 50} ,
    {{1 , 2 , 2 , 7  , 8  , 9}  , 51} ,
    {{1 , 2 , 2 , 7  , 9  , 10} , 52} ,
    {{1 , 2 , 3 , 4  , 4  , 5}  , 53} ,
    {{1 , 2 , 3 , 4  , 4  , 7}  , 54} ,
    {{1 , 2 , 3 , 4  , 5  , 6}  , 55} ,
    {{1 , 2 , 3 , 4  , 5  , 7}  , 56} ,
    {{1 , 2 , 3 , 4  , 7  , 8}  , 57} ,
    {{1 , 2 , 3 , 4  , 8  , 9}  , 58} ,
    {{1 , 2 , 3 , 7  , 7  , 8}  , 59} ,
    {{1 , 2 , 3 , 7  , 8  , 9}  , 60} ,
    {{1 , 2 , 3 , 7  , 9  , 10} , 61} ,
    {{1 , 2 , 4 , 5  , 5  , 6}  , 62} ,
    {{1 , 2 , 4 , 5  , 5  , 7}  , 63} ,
    {{1 , 2 , 4 , 5  , 7  , 8}  , 64} ,
    {{1 , 2 , 4 , 5  , 8  , 9}  , 65} ,
    {{1 , 2 , 4 , 7  , 7  , 8}  , 66} ,
    {{1 , 2 , 4 , 7  , 8  , 9}  , 67} ,
    {{1 , 2 , 4 , 7  , 9  , 10} , 68} ,
    {{1 , 2 , 7 , 8  , 10 , 11} , 69} ,
    {{1 , 2 , 7 , 8  , 8  , 9}  , 70} ,
    {{1 , 2 , 7 , 8  , 9  , 10} , 71} ,
    {{1 , 2 , 8 , 9  , 10 , 11} , 72} ,
    {{1 , 2 , 8 , 9  , 9  , 10} , 73} ,
    {{1 , 7 , 7 , 8  , 10 , 11} , 74} ,
    {{1 , 7 , 7 , 8  , 9  , 10} , 75} ,
    {{1 , 7 , 8 , 9  , 10 , 11} , 76} ,
    {{1 , 7 , 8 , 9  , 9  , 10} , 77} ,
    {{1 , 7 , 9 , 10 , 10 , 11} , 78} ,
    {{2 , 3 , 3 , 4  , 5  , 6}  , 79} ,
    {{2 , 3 , 3 , 4  , 5  , 7}  , 80} ,
    {{2 , 3 , 3 , 4  , 7  , 8}  , 81} ,
    {{2 , 3 , 3 , 4  , 8  , 9}  , 82} ,
    {{2 , 3 , 3 , 7  , 8  , 9}  , 83} ,
    {{2 , 3 , 3 , 7  , 9  , 10} , 84} ,
    {{2 , 3 , 4 , 5  , 5  , 6}  , 85} ,
    {{2 , 3 , 4 , 5  , 5  , 7}  , 86} ,
    {{2 , 3 , 4 , 5  , 7  , 8}  , 87} ,
    {{2 , 3 , 4 , 5  , 8  , 9}  , 88} ,
    {{2 , 3 , 4 , 7  , 7  , 8}  , 89} ,
    {{2 , 3 , 4 , 7  , 8  , 9}  , 90} ,
    {{2 , 3 , 4 , 7  , 9  , 10} , 91} ,
    {{2 , 3 , 5 , 7  , 7  , 8}  , 92} ,
    {{2 , 3 , 7 , 8  , 10 , 11} , 93} ,
    {{2 , 3 , 7 , 8  , 8  , 9}  , 94} ,
    {{2 , 3 , 7 , 8  , 9  , 10} , 95} ,
    {{2 , 3 , 8 , 9  , 10 , 11} , 96} ,
    {{2 , 3 , 8 , 9  , 9  , 10} , 97} ,
    {{2 , 7 , 7 , 8  , 10 , 11} , 98} ,
    {{2 , 7 , 7 , 8  , 9  , 10} , 99} ,
    {{2 , 7 , 8 , 9  , 10 , 11} , 100} ,
    {{2 , 7 , 8 , 9  , 9  , 10} , 101} ,
    {{2 , 7 , 9 , 10 , 10 , 11} , 102} ,
    {{3 , 4 , 4 , 5  , 7  , 8}  , 103} ,
    {{3 , 4 , 4 , 5  , 8  , 9}  , 104} ,
    {{3 , 4 , 4 , 7  , 8  , 9}  , 105} ,
    {{3 , 4 , 4 , 7  , 9  , 10} , 106} ,
    {{3 , 4 , 5 , 7  , 7  , 8}  , 107} ,
    {{3 , 4 , 7 , 8  , 8  , 9}  , 108} ,
    {{3 , 4 , 7 , 8  , 9  , 10} , 109} ,
    {{3 , 4 , 8 , 9  , 9  , 10} , 110} ,
    {{3 , 7 , 7 , 8  , 10 , 11} , 111} ,
    {{3 , 7 , 7 , 8  , 9  , 10} , 112} ,
    {{3 , 7 , 8 , 9  , 10 , 11} , 113} ,
    {{3 , 7 , 8 , 9  , 9  , 10} , 114} ,
    {{3 , 7 , 9 , 10 , 10 , 11} , 115} ,
    {{4 , 7 , 7 , 8  , 9  , 10} , 116} ,
    {{7 , 8 , 8 , 9  , 10 , 11} , 117} ,
    {{7 , 8 , 9 , 10 , 10 , 11} , 118} ,
};

const int n_TC_set1_types = 37;
std::map<std::vector<int>, int> TC_set1_types_map = {
/* 65185    */  {{1 , 7 , 8 , 9  , 9  , 10} , 0} ,
/* 65230    */  {{1 , 7 , 8 , 9  , 10 , 11} , 1} ,
/* 65527    */  {{1 , 7 , 7 , 8  , 9  , 10} , 2} ,
/* 66083    */  {{1 , 7 , 7 , 8  , 10 , 11} , 3} ,
/* 67737    */  {{0 , 0 , 1 , 7  , 8  , 9}  , 4} ,
/* 67938    */  {{0 , 0 , 1 , 7  , 7  , 8}  , 5} ,
/* 68669    */  {{0 , 0 , 1 , 7  , 9  , 10} , 6} ,
/* 71830    */  {{0 , 0 , 1 , 2  , 8  , 9}  , 7} ,
/* 72371    */  {{0 , 0 , 2 , 3  , 7  , 8}  , 8} ,
/* 73467    */  {{1 , 2 , 2 , 3  , 7  , 8}  , 9} ,
/* 78611    */  {{1 , 2 , 7 , 8  , 9  , 10} , 10} ,
/* 78811    */  {{1 , 2 , 7 , 8  , 8  , 9}  , 11} ,
/* 97842    */  {{7 , 8 , 9 , 10 , 10 , 11} , 12} ,
/* 105847   */  {{0 , 0 , 9 , 10 , 10 , 11} , 13} ,
/* 110606   */  {{2 , 3 , 4 , 5  , 5  , 6}  , 14} ,
/* 110765   */  {{1 , 2 , 4 , 5  , 5  , 6}  , 15} ,
/* 112230   */  {{0 , 0 , 1 , 2  , 7  , 8}  , 16} ,
/* 113343   */  {{1 , 2 , 3 , 4  , 5  , 6}  , 17} ,
/* 113745   */  {{0 , 0 , 4 , 5  , 5  , 6}  , 18} ,
/* 114721   */  {{2 , 3 , 3 , 4  , 5  , 6}  , 19} ,
/* 116188   */  {{0 , 0 , 3 , 4  , 5  , 6}  , 20} ,
/* 117864   */  {{7 , 8 , 8 , 9  , 10 , 11} , 21} ,
/* 118810   */  {{1 , 2 , 2 , 3  , 5  , 6}  , 22} ,
/* 119894   */  {{0 , 0 , 2 , 3  , 5  , 6}  , 23} ,
/* 128362   */  {{0 , 0 , 7 , 8  , 10 , 11} , 24} ,
/* 128877   */  {{0 , 0 , 8 , 9  , 10 , 11} , 25} ,
/* 131094   */  {{0 , 0 , 8 , 9  , 9  , 10} , 26} ,
/* 151045   */  {{0 , 0 , 7 , 8  , 9  , 10} , 27} ,
/* 152124   */  {{0 , 0 , 7 , 8  , 8  , 9}  , 28} ,
/* 152909   */  {{1 , 2 , 2 , 3  , 4  , 5}  , 29} ,
/* 153244   */  {{1 , 2 , 3 , 4  , 4  , 5}  , 30} ,
/* 154089   */  {{0 , 0 , 2 , 3  , 4  , 5}  , 31} ,
/* 154425   */  {{0 , 0 , 1 , 2  , 4  , 5}  , 32} ,
/* 157098   */  {{0 , 0 , 3 , 4  , 4  , 5}  , 33} ,
/* 191714   */  {{0 , 0 , 1 , 2  , 3  , 4}  , 34} ,
/* 194373   */  {{0 , 0 , 2 , 3  , 3  , 4}  , 35} ,
/* 249138   */  {{0 , 0 , 1 , 2  , 2  , 3}  , 36} ,
};

const int n_TC_set2_types = 16;
std::map<std::vector<int>, int> TC_set2_types_map = {
/* 65185    */  {{1 , 7 , 8 , 9  , 9  , 10} , 0} ,
/* 65230    */  {{1 , 7 , 8 , 9  , 10 , 11} , 1} ,
/* 65527    */  {{1 , 7 , 7 , 8  , 9  , 10} , 2} ,
/* 66083    */  {{1 , 7 , 7 , 8  , 10 , 11} , 3} ,
/* 73467    */  {{1 , 2 , 2 , 3  , 7  , 8}  , 4} ,
/* 78611    */  {{1 , 2 , 7 , 8  , 9  , 10} , 5} ,
/* 78811    */  {{1 , 2 , 7 , 8  , 8  , 9}  , 6} ,
/* 97842    */  {{7 , 8 , 9 , 10 , 10 , 11} , 7} ,
/* 110606   */  {{2 , 3 , 4 , 5  , 5  , 6}  , 8} ,
/* 110765   */  {{1 , 2 , 4 , 5  , 5  , 6}  , 9} ,
/* 113343   */  {{1 , 2 , 3 , 4  , 5  , 6}  , 10} ,
/* 114721   */  {{2 , 3 , 3 , 4  , 5  , 6}  , 11} ,
/* 117864   */  {{7 , 8 , 8 , 9  , 10 , 11} , 12} ,
/* 118810   */  {{1 , 2 , 2 , 3  , 5  , 6}  , 13} ,
/* 152909   */  {{1 , 2 , 2 , 3  , 4  , 5}  , 14} ,
/* 153244   */  {{1 , 2 , 3 , 4  , 4  , 5}  , 15} ,
};

const int n_TC_set3_types = 21;
std::map<std::vector<int>, int> TC_set3_types_map = {
/* 67737    */  {{0 , 0 , 1 , 7  , 8  , 9}  , 0} ,
/* 67938    */  {{0 , 0 , 1 , 7  , 7  , 8}  , 1} ,
/* 68669    */  {{0 , 0 , 1 , 7  , 9  , 10} , 2} ,
/* 71830    */  {{0 , 0 , 1 , 2  , 8  , 9}  , 3} ,
/* 72371    */  {{0 , 0 , 2 , 3  , 7  , 8}  , 4} ,
/* 105847   */  {{0 , 0 , 9 , 10 , 10 , 11} , 5} ,
/* 112230   */  {{0 , 0 , 1 , 2  , 7  , 8}  , 6} ,
/* 113745   */  {{0 , 0 , 4 , 5  , 5  , 6}  , 7} ,
/* 116188   */  {{0 , 0 , 3 , 4  , 5  , 6}  , 8} ,
/* 119894   */  {{0 , 0 , 2 , 3  , 5  , 6}  , 9} ,
/* 128362   */  {{0 , 0 , 7 , 8  , 10 , 11} , 10} ,
/* 128877   */  {{0 , 0 , 8 , 9  , 10 , 11} , 11} ,
/* 131094   */  {{0 , 0 , 8 , 9  , 9  , 10} , 12} ,
/* 151045   */  {{0 , 0 , 7 , 8  , 9  , 10} , 13} ,
/* 152124   */  {{0 , 0 , 7 , 8  , 8  , 9}  , 14} ,
/* 154089   */  {{0 , 0 , 2 , 3  , 4  , 5}  , 15} ,
/* 154425   */  {{0 , 0 , 1 , 2  , 4  , 5}  , 16} ,
/* 157098   */  {{0 , 0 , 3 , 4  , 4  , 5}  , 17} ,
/* 191714   */  {{0 , 0 , 1 , 2  , 3  , 4}  , 18} ,
/* 194373   */  {{0 , 0 , 2 , 3  , 3  , 4}  , 19} ,
/* 249138   */  {{0 , 0 , 1 , 2  , 2  , 3}  , 20} ,
};

const int n_TC_set4_types = 12;
std::map<std::vector<int>, int> TC_set4_types_map = {
/* 249138   */  {{0 , 0 , 1 , 2  , 2  , 3}  , 0} ,
/* 152124   */  {{0 , 0 , 7 , 8  , 8  , 9}  , 1} ,
/* 105847   */  {{0 , 0 , 9 , 10 , 10 , 11} , 2} ,
/* 113745   */  {{0 , 0 , 4 , 5  , 5  , 6}  , 3} ,
/* 128362   */  {{0 , 0 , 7 , 8  , 10 , 11} , 4} ,
                {{1 , 2 , 2 , 3  , 7  , 8}  , 5} ,
                {{0 , 0 , 8 , 9  , 9  , 10} , 6} ,
                {{0 , 0 , 2 , 3  , 3  , 4}  , 7} ,
                {{1 , 2 , 2 , 3  , 4  , 5}  , 8} ,
                {{0 , 0 , 3 , 4  , 4  , 5}  , 9} ,
                {{0 , 0 , 1 , 2  , 7  , 8}  ,10} ,
                {{0 , 0 , 1 , 2  , 4  , 5}  ,11} ,
                // {{1 , 2 , 3 , 4  , 4  , 5}  , 9} ,
};

// const int n_TC_types = 37;
// std::map<std::vector<int>, int> TC_types_map = {
//   {{1 , 7 , 8 , 9  , 9  , 10} , 0} ,  // 65295 
//   {{1 , 7 , 8 , 9  , 10 , 11} , 1} ,  // 65339 
//   {{1 , 7 , 7 , 8  , 9  , 10} , 2} ,  // 65633 
//   {{1 , 7 , 7 , 8  , 10 , 11} , 3} ,  // 66216 
//   {{0 , 0 , 1 , 7  , 8  , 9}  , 4} ,   // 67958 
//   {{0 , 0 , 1 , 7  , 7  , 8}  , 5} ,   // 68206 
//   {{0 , 0 , 1 , 7  , 9  , 10} , 6} ,  // 68934 
//   {{0 , 0 , 1 , 2  , 8  , 9}  , 7} ,   // 72458 
//   {{0 , 0 , 2 , 3  , 7  , 8}  , 8} ,  // 72928 
//   {{1 , 2 , 2 , 3  , 7  , 8}  , 9} ,  // 73762 
//   {{1 , 2 , 7 , 8  , 9  , 10} , 10} ,  // 78905 
//   {{1 , 2 , 7 , 8  , 8  , 9}  , 11} ,  // 79104 
//   {{7 , 8 , 9 , 10 , 10 , 11} , 12} , // 98186 
//   {{0 , 0 , 9 , 10 , 10 , 11} , 13} ,  // 106780
//   {{2 , 3 , 4 , 5  , 5  , 6}  , 14} ,  // 110607
//   {{1 , 2 , 4 , 5  , 5  , 6}  , 15} ,  // 110766
//   {{0 , 0 , 1 , 2  , 7  , 8}  , 16} ,   // 113102
//   {{1 , 2 , 3 , 4  , 5  , 6}  , 17} ,  // 113345
//   {{0 , 0 , 4 , 5  , 5  , 6}  , 18} ,  // 113750
//   {{2 , 3 , 3 , 4  , 5  , 6}  , 19} ,  // 114724
//   {{0 , 0 , 3 , 4  , 5  , 6}  , 20} ,  // 116191
//   {{7 , 8 , 8 , 9  , 10 , 11} , 21} , // 118193
//   {{1 , 2 , 2 , 3  , 5  , 6}  , 22} ,  // 118814
//   {{0 , 0 , 2 , 3  , 5  , 6}  , 23} ,  // 119899
//   {{0 , 0 , 7 , 8  , 10 , 11} , 24} ,  // 129068
//   {{0 , 0 , 8 , 9  , 10 , 11} , 25} ,  // 129684
//   {{0 , 0 , 8 , 9  , 9  , 10} , 26} ,  // 131923
//   {{0 , 0 , 7 , 8  , 9  , 10} , 27} ,  // 151811
//   {{1 , 2 , 2 , 3  , 4  , 5}  , 28} ,  // 152927
//   {{0 , 0 , 7 , 8  , 8  , 9}  , 29} ,  // 152933
//   {{1 , 2 , 3 , 4  , 4  , 5}  , 30} ,  // 153263
//   {{0 , 0 , 2 , 3  , 4  , 5}  , 31} ,  // 154124
//   {{0 , 0 , 1 , 2  , 4  , 5}  , 32} ,   // 154463
//   {{0 , 0 , 3 , 4  , 4  , 5}  , 33} ,  // 157193
//   {{0 , 0 , 1 , 2  , 3  , 4}  , 34} ,   // 191951
//   {{0 , 0 , 2 , 3  , 3  , 4}  , 35} ,  // 194839
//   {{0 , 0 , 1 , 2  , 2  , 3}  , 36} ,   // 251125
// };

std::vector<TString> TC_types = {
    "B1B2B3B4B5B6",
    "B1B2B3B4B5E1",
    "B1B2B3B4E1E2",
    // "B1B2B3E1E2E3",
    // "B1B2E1E2E3E4",
    // "B1E1E2E3E4E5",
    // "T41234T3345",
    // "T3123T42345",
    // "T3123T4x2356",
};
    // {{0 , 0 , 7 , 8  , 10 , 11} , 39} ,
    // {{0 , 0 , 4 , 5  , 5  , 6}  , 31} ,
