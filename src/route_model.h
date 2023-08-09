#pragma once

#include <limits>
#include <cmath>
#include <unordered_map>
#include "model.h"
#include <iostream>

class RouteModel : public Model {

  public:

    class Node : public Model::Node {
      public:
        // Add public Node variables and methods here.
        


        /**
         * Calculate euclidian distance
         * from current node to 'other' node
         */


        Node(){}
        Node(int idx, RouteModel * search_model, Model::Node node) : Model::Node(node), parent_model(search_model), index(idx) {}
        
      private:
        // Add private Node variables and methods here.


    };
    
    // Add public RouteModel variables and methods here.
    
    RouteModel::Node &FindClosestNode(float x, float y);

    std::vector<Node> path; // This variable will eventually store the path that is found by the A* search.

  private:
    // Add private RouteModel variables and methods here.
    
    void CreateNodeToRoadHashmap();
};