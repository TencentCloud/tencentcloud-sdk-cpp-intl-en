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

set(batch_public_header
  include/tencentcloud/batch/v20170312/BatchClient.h
  )

set(batch_public_header_model
  include/tencentcloud/batch/v20170312/model/LocalDiskType.h
  include/tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesRequest.h
  include/tencentcloud/batch/v20170312/model/InstanceTypeConfig.h
  include/tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.h
  include/tencentcloud/batch/v20170312/model/Externals.h
  include/tencentcloud/batch/v20170312/model/StorageBlock.h
  include/tencentcloud/batch/v20170312/model/Filter.h
  include/tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesResponse.h
  include/tencentcloud/batch/v20170312/model/InstanceTypeQuotaItem.h
  include/tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.h
  include/tencentcloud/batch/v20170312/model/InstanceCategoryItem.h
  include/tencentcloud/batch/v20170312/model/ItemPrice.h
  )

set(batch_src
  src/v20170312/BatchClient.cpp
  src/v20170312/model/LocalDiskType.cpp
  src/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.cpp
  src/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.cpp
  src/v20170312/model/DescribeInstanceCategoriesRequest.cpp
  src/v20170312/model/InstanceTypeConfig.cpp
  src/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.cpp
  src/v20170312/model/Externals.cpp
  src/v20170312/model/StorageBlock.cpp
  src/v20170312/model/Filter.cpp
  src/v20170312/model/DescribeInstanceCategoriesResponse.cpp
  src/v20170312/model/InstanceTypeQuotaItem.cpp
  src/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.cpp
  src/v20170312/model/InstanceCategoryItem.cpp
  src/v20170312/model/ItemPrice.cpp
  )

set(batch_include
    include/tencentcloud/batch
  )

add_library(batch ${LIB_TYPE}
  ${batch_public_header}
  ${batch_public_header_model}
  ${batch_src})

set_target_properties(batch
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}batch
  )

target_include_directories(batch
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(batch
  core)

#install(FILES ${batch_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/batch/v20170312)
#install(FILES ${batch_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/batch/v20170312/model)
install(DIRECTORY ${batch_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS batch
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
