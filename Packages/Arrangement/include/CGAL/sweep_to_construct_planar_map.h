#ifndef SWEEP_TO_CONSTRUCT_PLANAR_MAP_H
#define SWEEP_TO_CONSTRUCT_PLANRA_MAP_H

#ifndef CGAL_BASIC_H
#include <CGAL/basic.h>
#endif

#ifndef CGAL_SWEEP_CURVES_TO_PLANAR_MAP_H
#include <CGAL/Sweep_curves_to_planar_map.h>
#endif

CGAL_BEGIN_NAMESPACE

template <class Curve_iterator, class PM>
void  sweep_to_construct_planar_map(Curve_iterator curves_begin, 
                                           Curve_iterator curves_end, 
                                           PM &result)
{
  Sweep_curves_to_planar_map<Curve_iterator, PM>  sweep_line;
  
  sweep_line.sweep_curves_to_planar_map(curves_begin, curves_end, result);
}

/*template <class Curve_iterator, class PM, class Notifier>
  void  sweep_curves_to_pm(Curve_iterator curves_begin, Curve_iterator curves_end, PM &result, Notifier* notifier)
  {
  Sweep_line<Curve_iterator, PM, Notifier>  sweep_line;
  
  sweep_line.sweep_curves_to_pm(curves_begin, curves_end, result, notifier);
  }*/

CGAL_END_NAMESPACE

#endif







