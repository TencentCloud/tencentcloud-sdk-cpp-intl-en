#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(quota_public_header
  include/tencentcloud/quota/v20241204/QuotaClient.h
  )

set(quota_public_header_model
  include/tencentcloud/quota/v20241204/model/CreateAlarmRequest.h
  include/tencentcloud/quota/v20241204/model/CreateAlarmResponse.h
  )

set(quota_src
  src/v20241204/QuotaClient.cpp
  src/v20241204/model/CreateAlarmRequest.cpp
  src/v20241204/model/CreateAlarmResponse.cpp
  )

set(quota_include
    include/tencentcloud/quota
  )

add_library(quota ${LIB_TYPE}
  ${quota_public_header}
  ${quota_public_header_model}
  ${quota_src})

set_target_properties(quota
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}quota
  )

target_include_directories(quota
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(quota
  core)

#install(FILES ${quota_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/quota/v20241204)
#install(FILES ${quota_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/quota/v20241204/model)
install(DIRECTORY ${quota_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS quota
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
