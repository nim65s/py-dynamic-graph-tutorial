#include <boost/python.hpp>
#include <py-dynamic-graph/py-dynamic-graph.hpp>
#include <dynamic-graph/tutorial/inverted-pendulum.hpp>

BOOST_PYTHON_MODULE(libpy_dynamic_graph_tutorial)
{
  using namespace boost::python;
  using namespace dynamicgraph;
  using namespace dynamicgraph::tutorial;

  expose_entity();

  class_<InvertedPendulum, bases<Entity>, boost::noncopyable>("InvertedPendulum", init<std::string>())
    ;
}
