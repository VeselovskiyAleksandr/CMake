# CMakeList.txt: ������ CMake ��� CMake; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.

cmake_minimum_required (VERSION 3.8)

Project ("surgery")
set(SOURCES
         main.cpp
        hemostat.cpp seam.cpp skalpel.cpp tweezers.cpp)
# �������� �������� � ����������� ���� ����� �������.
add_executable (surgery ${SOURCES}  )
       
# TODO: �������� ����� � ������� �������, ���� ��� ����������.
