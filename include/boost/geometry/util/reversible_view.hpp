// Boost.Geometry (aka GGL, Generic Geometry Library)
//
// Copyright Barend Gehrels 2010, Geodan, Amsterdam, the Netherlands.
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_UTIL_REVERSIBLE_VIEW_HPP
#define BOOST_GEOMETRY_UTIL_REVERSIBLE_VIEW_HPP


#include <boost/range.hpp>
#include <boost/range/adaptor/reversed.hpp>

#include <boost/geometry/core/ring_type.hpp>
#include <boost/geometry/core/tag.hpp>
#include <boost/geometry/core/tags.hpp>


namespace boost { namespace geometry
{

enum iterate_direction { iterate_forward, iterate_reverse };

// BSG 13-12-2010, changed into meta-function
template <typename Range, iterate_direction Direction>
struct reversible_view {};


template <typename Range>
struct reversible_view<Range, iterate_forward>
{
    typedef Range type;
};


template <typename Range>
struct reversible_view<Range, iterate_reverse> 
{
    typedef boost::range_detail::reverse_range<Range> type;
};

}} // namespace boost::geometry


#endif // BOOST_GEOMETRY_UTIL_REVERSIBLE_VIEW_HPP
