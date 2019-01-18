# Copyright 2010, 2018, Florent Lamiraux, CNRS
#
# This file is part of sot-core.
# sot-core is free software: you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public License
# as published by the Free Software Foundation, either version 3 of
# the License, or (at your option) any later version.
#
# sot-core is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Lesser Public License for more details.  You should have
# received a copy of the GNU Lesser General Public License along with
# dynamic-graph-tutorial. If not, see <http://www.gnu.org/licenses/>.


SET(${PROJECT_NAME}_SOURCES
  inverted-pendulum
  #feedback-controller
  )

ADD_LIBRARY(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})
PKG_CONFIG_USE_DEPENDENCY(${PROJECT_NAME} dynamic-graph)

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION lib)
