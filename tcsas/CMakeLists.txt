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

set(tcsas_public_header
  include/tencentcloud/tcsas/v20250106/TcsasClient.h
  )

set(tcsas_public_header_model
  include/tencentcloud/tcsas/v20250106/model/MAULineChartData.h
  include/tencentcloud/tcsas/v20250106/model/MAUIndicatorCard.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardRequest.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardResponse.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartResponse.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartRequest.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartRequest.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailRequest.h
  include/tencentcloud/tcsas/v20250106/model/MNGMAULineChartData.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardRequest.h
  include/tencentcloud/tcsas/v20250106/model/MAUDetail.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardResponse.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailRequest.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailResponse.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartResponse.h
  include/tencentcloud/tcsas/v20250106/model/MAUChartData.h
  include/tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailResponse.h
  )

set(tcsas_src
  src/v20250106/TcsasClient.cpp
  src/v20250106/model/MAULineChartData.cpp
  src/v20250106/model/MAUIndicatorCard.cpp
  src/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardRequest.cpp
  src/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardResponse.cpp
  src/v20250106/model/DescribeMNGMAULineChartResponse.cpp
  src/v20250106/model/DescribeMNGMAULineChartRequest.cpp
  src/v20250106/model/DescribeMNPMAULineChartRequest.cpp
  src/v20250106/model/DescribeMNPMAUDataDetailRequest.cpp
  src/v20250106/model/MNGMAULineChartData.cpp
  src/v20250106/model/DescribeMNPMAUMetricCardRequest.cpp
  src/v20250106/model/MAUDetail.cpp
  src/v20250106/model/DescribeMNPMAUMetricCardResponse.cpp
  src/v20250106/model/DescribeMNGMAUDataDetailRequest.cpp
  src/v20250106/model/DescribeMNGMAUDataDetailResponse.cpp
  src/v20250106/model/DescribeMNPMAULineChartResponse.cpp
  src/v20250106/model/MAUChartData.cpp
  src/v20250106/model/DescribeMNPMAUDataDetailResponse.cpp
  )

set(tcsas_include
    include/tencentcloud/tcsas
  )

add_library(tcsas ${LIB_TYPE}
  ${tcsas_public_header}
  ${tcsas_public_header_model}
  ${tcsas_src})

set_target_properties(tcsas
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcsas
  )

target_include_directories(tcsas
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcsas
  core)

#install(FILES ${tcsas_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcsas/v20250106)
#install(FILES ${tcsas_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcsas/v20250106/model)
install(DIRECTORY ${tcsas_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcsas
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
