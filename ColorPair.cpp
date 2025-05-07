#include <string>
#include "./ColorPair.hpp"

namespace TelCoColorCoder {
ColorPair::ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor)
    : majorColor(major), minorColor(minor) {}

TelCoColorCoder::MajorColor ColorPair::getMajor() const {
    return majorColor;
}

TelCoColorCoder::MinorColor ColorPair::getMinor() const {
    return minorColor;
}

std::string ColorPair::ToString() const {
    std::string colorPairStr = TelCoColorCoder::MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += TelCoColorCoder::MinorColorNames[minorColor];
    return colorPairStr;
}
}  // namespace TelCoColorCoder
