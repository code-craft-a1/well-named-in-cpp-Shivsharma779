#ifndef COLORPAIR_H_
#define COLORPAIR_H_

#include "TelCoColorCoder.hpp"
#include <iostream>
#include <string>

namespace TelCoColorCoder {
class ColorPair {
 private:
    TelCoColorCoder::MajorColor majorColor;
    TelCoColorCoder::MinorColor minorColor;

 public:
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
        TelCoColorCoder::MajorColor getMajor() const;
        TelCoColorCoder::MinorColor getMinor() const;
        std::string ToString() const;
};
}  // namespace TelCoColorCoder

#endif  // COLORPAIR_H_
