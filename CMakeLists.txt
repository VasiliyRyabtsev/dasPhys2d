
IF ((NOT DAS_PHYS2D_INCLUDED) AND ((NOT ${DAS_PHYS2D_DISABLED}) OR (NOT DEFINED DAS_PHYS2D_DISABLED)))
    SET(DAS_PHYS2D_INCLUDED TRUE)
    MESSAGE(STATUS "dasPhys2d module included.")

	SET(DAS_PHYS2D_BIND_DIR ${PROJECT_SOURCE_DIR}/modules/dasPhys2d)

  LIST(APPEND CMAKE_MODULE_PATH ${DAS_PHYS2D_BIND_DIR})

  set(BOX2D_SOURCE_DIR ${DAS_PHYS2D_BIND_DIR}/box2d)

  set(BOX2D_BUILD_UNIT_TESTS OFF) # "Build the Box2D unit tests"
  set(BOX2D_BUILD_TESTBED OFF) # "Build the Box2D testbed"
  set(BOX2D_BUILD_DOCS OFF)
  set(BOX2D_USER_SETTINGS OFF) # "Override Box2D settings with b2UserSettings.h"

  # message("BOX2D_SOURCE_DIR = '${BOX2D_SOURCE_DIR}'")
  # add_subdirectory(BOX2D_SOURCE_DIR) # doesn't work ???
  add_subdirectory(${DAS_PHYS2D_BIND_DIR}/box2d)

  # libDasModulePhys2d
  SET(DAS_PHYS2D_BIND_MODULE_SRC
		${DAS_PHYS2D_BIND_DIR}/src/need_phys2d.h
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.h
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.cpp
	# user include
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.main.cpp
	# generated binding includes
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.alias.add.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.dummy.add.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.enum.add.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.enum.class.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.enum.decl.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.enum.decl.cast.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.add.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.postadd.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.class.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.decl.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.impl.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.struct.cast.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func.reg.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func.decl.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func.aot.inc
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func.aot.decl.inc
	# generated functions
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_1.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_2.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_3.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_4.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_5.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_6.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_7.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_8.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_9.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_10.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_11.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_12.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_13.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_14.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_15.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_16.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_17.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_18.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_19.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_20.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_21.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_22.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_23.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_24.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_25.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_26.cpp
		${DAS_PHYS2D_BIND_DIR}/src/phys2d.func_27.cpp
	)


	ADD_MODULE_LIB(libDasModulePhys2d)
	ADD_MODULE_CPP(phys2d)
	ADD_LIBRARY(libDasModulePhys2d ${DAS_PHYS2D_BIND_MODULE_SRC} ${DAS_PHYS2D_MODULE_PLATFORM_SRC})
	TARGET_LINK_LIBRARIES(libDasModulePhys2d box2d)
	ADD_DEPENDENCIES(libDasModulePhys2d box2d)
	TARGET_INCLUDE_DIRECTORIES(libDasModulePhys2d PUBLIC
    ${DAS_PHYS2D_BIND_DIR}/src
    ${BOX2D_SOURCE_DIR}/include
  )
	SETUP_CPP11(libDasModulePhys2d)

ENDIF()
