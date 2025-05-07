#ifndef COLORPAIR_HPP_
#define COLORPAIR_HPP_

#include <iostream>
#include <string>
#include "./TelCoColorCoder.hpp"

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

#endif  // COLORPAIR_HPP_
