#pragma once
#ifndef TITLE_HPP
#define TITLE_HPP
#include <QSharedPointer>
#include "section.hpp"

namespace qtreports {
    namespace detail {

        class Title : public Section {

        public:
            Title();
            ~Title();

        private:

        };
        typedef QSharedPointer< Title > TitlePtr;

    }
}

#endif // TITLE_HPP
