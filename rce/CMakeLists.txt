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

set(rce_public_header
  include/tencentcloud/rce/v20201103/RceClient.h
  )

set(rce_public_header_model
  include/tencentcloud/rce/v20201103/model/DescribeRiskAssessmentRequest.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessmentExtraInfoPair.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessment.h
  include/tencentcloud/rce/v20201103/model/InputBizCryptoData.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessmentInfo.h
  include/tencentcloud/rce/v20201103/model/DescribeRiskAssessmentResponse.h
  )

set(rce_src
  src/v20201103/RceClient.cpp
  src/v20201103/model/DescribeRiskAssessmentRequest.cpp
  src/v20201103/model/OutputRiskAssessmentExtraInfoPair.cpp
  src/v20201103/model/OutputRiskAssessment.cpp
  src/v20201103/model/InputBizCryptoData.cpp
  src/v20201103/model/OutputRiskAssessmentInfo.cpp
  src/v20201103/model/DescribeRiskAssessmentResponse.cpp
  )

set(rce_include
    include/tencentcloud/rce
  )

add_library(rce ${LIB_TYPE}
  ${rce_public_header}
  ${rce_public_header_model}
  ${rce_src})

set_target_properties(rce
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rce
  )

target_include_directories(rce
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rce
  core)

#install(FILES ${rce_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103)
#install(FILES ${rce_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103/model)
install(DIRECTORY ${rce_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rce
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
