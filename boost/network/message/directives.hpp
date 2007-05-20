
//          Copyright Dean Michael Berris 2007.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef __NETWORK_MESSAGE_DIRECTIVES_HPP__
#define __NETWORK_MESSAGE_DIRECTIVES_HPP__

/** Include all the various directive headers.
 */

#include <boost/network/message/directives/header.hpp>

namespace boost { namespace network {

    template <class Tag, template <class> class Directive>
        inline basic_message<Tag> &
        operator<< (basic_message<Tag> & message_, Directive<Tag> const & directive) {
            directive(message_);
            return message_;
        };

}; // namespace network

}; // namespace boost

#endif // __NETWORK_MESSAGE_DIRECTIVES_HPP__

