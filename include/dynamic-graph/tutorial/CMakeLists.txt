SET(${PROJECT_NAME}_HEADERS
  inverted-pendulum.hpp
  #feedback-controller.hh
  )

INSTALL(FILES
  ${${PROJECT_NAME}_HEADERS}
  DESTINATION "include/${CUSTOM_HEADER_DIR}"
 )
