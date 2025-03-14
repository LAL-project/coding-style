TEMPLATE = app
CONFIG += console c++20
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

DISTFILES += .clang-format

HEADERS += \
	classes.hpp \
	classes_templated.hpp \
	defines_macros.hpp \
	enums.hpp \
	functions.hpp \
	functions_templated.hpp \
	if.hpp \
	lambda.hpp \
	structs.hpp \
	structs_templated.hpp \
	switch.hpp
