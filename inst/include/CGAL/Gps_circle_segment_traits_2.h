// Copyright (c) 2005  Tel-Aviv University (Israel).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL: https://github.com/CGAL/cgal/blob/releases/CGAL-5.0.2/Boolean_set_operations_2/include/CGAL/Gps_circle_segment_traits_2.h $
// $Id: Gps_circle_segment_traits_2.h 254d60f 2019-10-19T15:23:19+02:00 Sébastien Loriot
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Baruch Zukerman <baruchzu@post.tau.ac.il>

#ifndef CGAL_GPS_CIRCLE_SEGMENT_TRAITS_2_H
#define CGAL_GPS_CIRCLE_SEGMENT_TRAITS_2_H

#include <CGAL/license/Boolean_set_operations_2.h>

#include <CGAL/disable_warnings.h>

#include <CGAL/Gps_traits_2.h>
#include <CGAL/Arr_circle_segment_traits_2.h>

namespace CGAL {

template <class Kernel_, bool Filer_ = true>
class Gps_circle_segment_traits_2 :
  public Gps_traits_2<Arr_circle_segment_traits_2<Kernel_, Filer_> >
{
public:
  Gps_circle_segment_traits_2<Kernel_, Filer_>(bool use_cache = false) :
    Gps_traits_2<Arr_circle_segment_traits_2<Kernel_, Filer_> >()
  {
    this->m_use_cache = use_cache;
  }

};

} //namespace CGAL

#include <CGAL/enable_warnings.h>

#endif
