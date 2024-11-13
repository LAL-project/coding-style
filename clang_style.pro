TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

DISTFILES += .clang-format

HEADERS += \
	classes.hpp \
	enums.hpp \
	functions.hpp \
	structs.hpp
