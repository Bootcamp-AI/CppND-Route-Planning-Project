#ifndef ROUTE_PLANNER_H
#define ROUTE_PLANNER_H

#include <iostream>
#include <vector>
#include <string>
#include "route_model.h"


class RoutePlanner {
  public:
    RoutePlanner(RouteModel &model, float start_x, float start_y, float end_x, float end_y);
    // Add public variables or methods declarations here.



    // The following methods have been made public so we can test them individually.


  private:
    // Add private variables or methods declarations here.


    float distance = 0.0f;
    RouteModel &m_Model;
};

#endif