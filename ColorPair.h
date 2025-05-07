#ifndef COLORPAIR_H
#define COLORPAIR_H

#include "TelCoColorCoder.h"
#include <iostream>

namespace TelCoColorCoder
{
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
}

#endif // COLORPAIR_H