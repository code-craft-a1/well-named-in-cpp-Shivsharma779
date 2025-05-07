#ifndef TELCOCOLORCODER_HPP_
#define TELCOCOLORCODER_HPP_

namespace TelCoColorCoder {
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];

extern int numberOfMinorColors;

// forward declaration
class ColorPair;
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}  // namespace TelCoColorCoder

#endif  // TELCOCOLORCODER_HPP_
