# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_anolink_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED anolink_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(anolink_FOUND FALSE)
  elseif(NOT anolink_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(anolink_FOUND FALSE)
  endif()
  return()
endif()
set(_anolink_CONFIG_INCLUDED TRUE)

# output package information
if(NOT anolink_FIND_QUIETLY)
  message(STATUS "Found anolink: 0.0.0 (${anolink_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'anolink' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${anolink_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(anolink_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${anolink_DIR}/${_extra}")
endforeach()
