# Generated from orogen/lib/orogen/templates/tasks/CMakeLists.txt

include(cart_ctrl_wdlsTaskLib)
ADD_LIBRARY(${CART_CTRL_WDLS_TASKLIB_NAME} SHARED 
    ${CART_CTRL_WDLS_TASKLIB_SOURCES})
add_dependencies(${CART_CTRL_WDLS_TASKLIB_NAME}
    regen-typekit)

TARGET_LINK_LIBRARIES(${CART_CTRL_WDLS_TASKLIB_NAME}
    ${OrocosRTT_LIBRARIES}
    ${CART_CTRL_WDLS_TASKLIB_DEPENDENT_LIBRARIES})
SET_TARGET_PROPERTIES(${CART_CTRL_WDLS_TASKLIB_NAME}
    PROPERTIES LINK_INTERFACE_LIBRARIES "${CART_CTRL_WDLS_TASKLIB_INTERFACE_LIBRARIES}")

INSTALL(TARGETS ${CART_CTRL_WDLS_TASKLIB_NAME}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib/orocos)

INSTALL(FILES ${CART_CTRL_WDLS_TASKLIB_HEADERS}
    DESTINATION include/orocos/cart_ctrl_wdls)

