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

set(tms_public_header
  include/tencentcloud/tms/v20201229/TmsClient.h
  )

set(tms_public_header_model
  include/tencentcloud/tms/v20201229/model/SentimentAnalysis.h
  include/tencentcloud/tms/v20201229/model/RiskDetails.h
  include/tencentcloud/tms/v20201229/model/TextModerationRequest.h
  include/tencentcloud/tms/v20201229/model/DetailResults.h
  include/tencentcloud/tms/v20201229/model/Tag.h
  include/tencentcloud/tms/v20201229/model/User.h
  include/tencentcloud/tms/v20201229/model/Device.h
  include/tencentcloud/tms/v20201229/model/SentimentDetail.h
  include/tencentcloud/tms/v20201229/model/TextModerationResponse.h
  )

set(tms_src
  src/v20201229/TmsClient.cpp
  src/v20201229/model/SentimentAnalysis.cpp
  src/v20201229/model/RiskDetails.cpp
  src/v20201229/model/TextModerationRequest.cpp
  src/v20201229/model/DetailResults.cpp
  src/v20201229/model/Tag.cpp
  src/v20201229/model/User.cpp
  src/v20201229/model/Device.cpp
  src/v20201229/model/SentimentDetail.cpp
  src/v20201229/model/TextModerationResponse.cpp
  )

set(tms_include
    include/tencentcloud/tms
  )

add_library(tms ${LIB_TYPE}
  ${tms_public_header}
  ${tms_public_header_model}
  ${tms_src})

set_target_properties(tms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tms
  )

target_include_directories(tms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tms
  core)

#install(FILES ${tms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tms/v20201229)
#install(FILES ${tms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tms/v20201229/model)
install(DIRECTORY ${tms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
