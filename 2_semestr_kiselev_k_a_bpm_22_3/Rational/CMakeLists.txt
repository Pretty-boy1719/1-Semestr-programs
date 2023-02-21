cmake_minimum_required (VERSION 3.8)

project ("kiselev_bpm_22_3_2semestr")


include_directories(.)


add_subdirectory(Rational)


add_executable(Rational.test
	Rational.test.cpp
)

target_link_libraries(Rational.test Rational)