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

set(iotcloud_public_header
  include/tencentcloud/iotcloud/v20210408/IotcloudClient.h
  )

set(iotcloud_public_header_model
  include/tencentcloud/iotcloud/v20210408/model/DeleteProductRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceShadowResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdatePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeletePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceTag.h
  include/tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteProductResponse.h
  include/tencentcloud/iotcloud/v20210408/model/CreatePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductsRequest.h
  include/tencentcloud/iotcloud/v20210408/model/BindProductInfo.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDevicesResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceShadowRequest.h
  include/tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusRequest.h
  include/tencentcloud/iotcloud/v20210408/model/ProductInfo.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/CreatePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceLabel.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterRequest.h
  include/tencentcloud/iotcloud/v20210408/model/CertInfo.h
  include/tencentcloud/iotcloud/v20210408/model/ProductMetadata.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsRequest.h
  include/tencentcloud/iotcloud/v20210408/model/CreateProductResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDevicesRequest.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelResponse.h
  include/tencentcloud/iotcloud/v20210408/model/CreateDeviceResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateRequest.h
  include/tencentcloud/iotcloud/v20210408/model/CreateDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductsResponse.h
  include/tencentcloud/iotcloud/v20210408/model/CreateProductRequest.h
  include/tencentcloud/iotcloud/v20210408/model/Attribute.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeletePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceInfo.h
  include/tencentcloud/iotcloud/v20210408/model/ProductProperties.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDeviceResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterResponse.h
  )

set(iotcloud_src
  src/v20210408/IotcloudClient.cpp
  src/v20210408/model/DeleteProductRequest.cpp
  src/v20210408/model/DescribePrivateCABindedProductsRequest.cpp
  src/v20210408/model/DescribePrivateCAsResponse.cpp
  src/v20210408/model/UpdateDevicesEnableStateResponse.cpp
  src/v20210408/model/DescribePrivateCARequest.cpp
  src/v20210408/model/DescribeProductCAResponse.cpp
  src/v20210408/model/DeleteDeviceShadowResponse.cpp
  src/v20210408/model/UpdatePrivateCAResponse.cpp
  src/v20210408/model/DeletePrivateCAResponse.cpp
  src/v20210408/model/DeviceTag.cpp
  src/v20210408/model/UpdatePrivateCARequest.cpp
  src/v20210408/model/DescribePrivateCABindedProductsResponse.cpp
  src/v20210408/model/DeleteDeviceRequest.cpp
  src/v20210408/model/DeleteProductResponse.cpp
  src/v20210408/model/CreatePrivateCAResponse.cpp
  src/v20210408/model/DescribeProductsRequest.cpp
  src/v20210408/model/BindProductInfo.cpp
  src/v20210408/model/DescribeDevicesResponse.cpp
  src/v20210408/model/DeleteDeviceShadowRequest.cpp
  src/v20210408/model/SetProductsForbiddenStatusRequest.cpp
  src/v20210408/model/ProductInfo.cpp
  src/v20210408/model/DescribeProductCARequest.cpp
  src/v20210408/model/CreatePrivateCARequest.cpp
  src/v20210408/model/DescribeProductResponse.cpp
  src/v20210408/model/DescribeDeviceRequest.cpp
  src/v20210408/model/SetProductsForbiddenStatusResponse.cpp
  src/v20210408/model/DeviceLabel.cpp
  src/v20210408/model/UpdateProductDynamicRegisterRequest.cpp
  src/v20210408/model/CertInfo.cpp
  src/v20210408/model/ProductMetadata.cpp
  src/v20210408/model/DescribePrivateCAsRequest.cpp
  src/v20210408/model/CreateProductResponse.cpp
  src/v20210408/model/DescribeDevicesRequest.cpp
  src/v20210408/model/UpdateDeviceLogLevelRequest.cpp
  src/v20210408/model/DescribePrivateCAResponse.cpp
  src/v20210408/model/UpdateDeviceLogLevelResponse.cpp
  src/v20210408/model/CreateDeviceResponse.cpp
  src/v20210408/model/UpdateDevicesEnableStateRequest.cpp
  src/v20210408/model/CreateDeviceRequest.cpp
  src/v20210408/model/DescribeProductRequest.cpp
  src/v20210408/model/DescribeProductsResponse.cpp
  src/v20210408/model/CreateProductRequest.cpp
  src/v20210408/model/Attribute.cpp
  src/v20210408/model/DeleteDeviceResponse.cpp
  src/v20210408/model/DeletePrivateCARequest.cpp
  src/v20210408/model/DeviceInfo.cpp
  src/v20210408/model/ProductProperties.cpp
  src/v20210408/model/DescribeDeviceResponse.cpp
  src/v20210408/model/UpdateProductDynamicRegisterResponse.cpp
  )

set(iotcloud_include
    include/tencentcloud/iotcloud
  )

add_library(iotcloud ${LIB_TYPE}
  ${iotcloud_public_header}
  ${iotcloud_public_header_model}
  ${iotcloud_src})

set_target_properties(iotcloud
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotcloud
  )

target_include_directories(iotcloud
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotcloud
  core)

#install(FILES ${iotcloud_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20210408)
#install(FILES ${iotcloud_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20210408/model)
install(DIRECTORY ${iotcloud_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotcloud
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
