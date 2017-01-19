// Copyright (c) 2008,2011  INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
//
//
// Author(s) : Andreas Fabri

#ifndef CGAL_LICENSE_CHECK_LGPL_H
#define CGAL_LICENSE_CHECK_LGPL_H

#include <CGAL/config.h>
#include <CGAL/license_check.h>
#include <CGAL/license_check/release_date.h>



#ifdef CGAL_LGPL_COMMERCIAL_LICENSE

#  if CGAL_LGPL_COMMERCIAL_LICENSE < CGAL_RELEASE_DATE

#    if defined(CGAL_LICENSE_WARNING) || defined(CGAL_LICENSE_ERROR)

#      ifdef BOOST_MSVC
#        pragma CGAL_WARNING(Your commercial license for CGAL does not cover this release of CGAL LGPL packages)
#      else
#        pragma message( "WARNING: Your commercial license for CGAL does not cover this release of CGAL LGPL packages") 
#      endif
#    endif

#    ifdef CGAL_LICENSE_ERROR
#      error Your commercial license for CGAL does not cover this release of CGAL LGPL packages. You get this error, as you defined CGAL_LICENSE_ERROR.
#    endif // CGAL_LICENSE_ERROR

#  endif // CGAL_LGPL_COMMERCIAL_LICENSE < CGAL_RELEASE_DATE

#else

#  if defined(CGAL_LGPL_LICENSE_WARNING)
#    ifdef BOOST_MSVC
#      pragma CGAL_WARNING(You use the CGAL LGPL packages under the terms of the LGPLv3+)
#    else
#      pragma message("WARNING: You use the CGAL LGPL packages under the terms of the LGPLv3+ ")
#    endif
#  endif // CGAL_LICENSE_WARNING

#  ifdef CGAL_LGPL_LICENSE_ERROR
#    error ERROR: You use the CGAL AABB Tree package under the terms of the GPLv3+. You get this error, as you defined CGAL_LICENSE_ERROR
#  endif // CGAL_LICENSE_ERROR


#endif // CGAL_LGPL_COMMERCIAL_LICENSE

#endif // CGAL_LICENSE_CHECK_LGPL_H
