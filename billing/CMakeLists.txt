#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

set(billing_public_header
  include/tencentcloud/billing/v20180709/BillingClient.h
  )

set(billing_public_header_model
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeResponse.h
  include/tencentcloud/billing/v20180709/model/BillResourceSummary.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductResponse.h
  include/tencentcloud/billing/v20180709/model/BillTagInfo.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h
  include/tencentcloud/billing/v20180709/model/RegionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/BillDetailComponent.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/ActionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductRequest.h
  include/tencentcloud/billing/v20180709/model/BillDetail.h
  include/tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ProjectSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectResponse.h
  include/tencentcloud/billing/v20180709/model/PayModeSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryTotal.h
  )

set(billing_src
  src/v20180709/BillingClient.cpp
  src/v20180709/model/DescribeBillSummaryByTagResponse.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeResponse.cpp
  src/v20180709/model/BillResourceSummary.cpp
  src/v20180709/model/DescribeBillSummaryByTagRequest.cpp
  src/v20180709/model/DescribeBillSummaryByProductResponse.cpp
  src/v20180709/model/BillTagInfo.cpp
  src/v20180709/model/DescribeBillSummaryByRegionResponse.cpp
  src/v20180709/model/DescribeBillDetailRequest.cpp
  src/v20180709/model/RegionSummaryOverviewItem.cpp
  src/v20180709/model/BusinessSummaryOverviewItem.cpp
  src/v20180709/model/BillDetailComponent.cpp
  src/v20180709/model/DescribeBillSummaryByRegionRequest.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryResponse.cpp
  src/v20180709/model/ActionSummaryOverviewItem.cpp
  src/v20180709/model/DescribeBillSummaryByProjectRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryRequest.cpp
  src/v20180709/model/DescribeBillSummaryByProductRequest.cpp
  src/v20180709/model/BillDetail.cpp
  src/v20180709/model/TagSummaryOverviewItem.cpp
  src/v20180709/model/ProjectSummaryOverviewItem.cpp
  src/v20180709/model/DescribeBillDetailResponse.cpp
  src/v20180709/model/DescribeBillSummaryByProjectResponse.cpp
  src/v20180709/model/PayModeSummaryOverviewItem.cpp
  src/v20180709/model/BusinessSummaryTotal.cpp
  )

set(billing_include
    include/tencentcloud/billing
  )

add_library(billing ${LIB_TYPE}
  ${billing_public_header}
  ${billing_public_header_model}
  ${billing_src})

set_target_properties(billing
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}billing
  )

target_include_directories(billing
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(billing
  core)

#install(FILES ${billing_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709)
#install(FILES ${billing_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709/model)
install(DIRECTORY ${billing_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS billing
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
