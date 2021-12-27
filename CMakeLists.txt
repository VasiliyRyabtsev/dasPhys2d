
IF ((NOT DAS_BOX2D_INCLUDED) AND ((NOT ${DAS_BOX2D_DISABLED}) OR (NOT DEFINED DAS_BOX2D_DISABLED)))
    SET(DAS_BOX2D_INCLUDED TRUE)
    MESSAGE(STATUS "dasBox2d module included.")

	SET(DAS_BOX2D_BIND_DIR ${PROJECT_SOURCE_DIR}/modules/dasBox2d)

  LIST(APPEND CMAKE_MODULE_PATH ${DAS_BOX2D_BIND_DIR})

  set(BOX2D_SOURCE_DIR ${DAS_BOX2D_BIND_DIR}/box2d)

  set(BOX2D_BUILD_UNIT_TESTS "Build the Box2D unit tests" OFF)
  set(BOX2D_BUILD_TESTBED "Build the Box2D testbed" OFF)
  set(BOX2D_BUILD_DOCS OFF)
  set(BOX2D_USER_SETTINGS OFF) # "Override Box2D settings with b2UserSettings.h"

  #message("BOX2D_SOURCE_DIR = '${BOX2D_SOURCE_DIR}'")
  # add_subdirectory(BOX2D_SOURCE_DIR) # doesn't work ???
  add_subdirectory(${DAS_BOX2D_BIND_DIR}/box2d)

  # libDasModuleBox2d
  SET(DAS_BOX2D_BIND_MODULE_SRC
		${DAS_BOX2D_BIND_DIR}/src/need_box2d.h
		${DAS_BOX2D_BIND_DIR}/src/box2d.h
		${DAS_BOX2D_BIND_DIR}/src/box2d.cpp
	# user include
		${DAS_BOX2D_BIND_DIR}/src/box2d.main.cpp
	# generated binding includes
		${DAS_BOX2D_BIND_DIR}/src/box2d.alias.add.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.dummy.add.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.enum.add.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.enum.class.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.enum.decl.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.enum.decl.cast.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.add.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.postadd.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.class.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.decl.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.impl.inc
		${DAS_BOX2D_BIND_DIR}/src/box2d.struct.cast.inc
	# generated functions
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_1.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_2.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_3.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_4.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_5.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_6.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_7.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_8.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_9.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_10.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_11.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_12.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_13.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_14.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_15.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_16.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_17.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_18.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_19.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_20.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_21.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_22.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_23.cpp
		${DAS_BOX2D_BIND_DIR}/src/box2d.func_24.cpp
	)


	ADD_MODULE_LIB(libDasModuleBox2d)
	ADD_MODULE_CPP(box2d)
	ADD_LIBRARY(libDasModuleBox2d ${DAS_BOX2D_BIND_MODULE_SRC} ${DAS_BOX2D_MODULE_PLATFORM_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleBox2d box2d)
	ADD_DEPENDENCIES(libDasModuleBox2d box2d)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleBox2d PUBLIC
    ${DAS_BOX2D_BIND_DIR}/src
    ${BOX2D_SOURCE_DIR}/include
  )
	SETUP_CPP11(libDasModuleBox2d)

ENDIF()
