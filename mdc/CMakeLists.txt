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

set(mdc_public_header
  include/tencentcloud/mdc/v20200828/MdcClient.h
  )

set(mdc_public_header_model
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPSettings.h
  include/tencentcloud/mdc/v20200828/model/OutputAddress.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsRequest.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutput.h
  include/tencentcloud/mdc/v20200828/model/DescribeFlow.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputRequest.h
  include/tencentcloud/mdc/v20200828/model/CreateInputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTMPSettings.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/StartStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/RegionInfo.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/StopStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/InputAddress.h
  include/tencentcloud/mdc/v20200828/model/StopStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/CreateInput.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPPullServerUrl.h
  include/tencentcloud/mdc/v20200828/model/DescribeInput.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsResponse.h
  include/tencentcloud/mdc/v20200828/model/RTMPAddressDestination.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/StartStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateInputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/SRTAddressDestination.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsRequest.h
  include/tencentcloud/mdc/v20200828/model/StreamLinkRegionInfo.h
  include/tencentcloud/mdc/v20200828/model/RTPAddressDestination.h
  )

set(mdc_src
  src/v20200828/MdcClient.cpp
  src/v20200828/model/DescribeOutputRTMPSettings.cpp
  src/v20200828/model/OutputAddress.cpp
  src/v20200828/model/DescribeInputRTPSettings.cpp
  src/v20200828/model/DescribeStreamLinkRegionsRequest.cpp
  src/v20200828/model/ModifyStreamLinkFlowRequest.cpp
  src/v20200828/model/DeleteStreamLinkFlowRequest.cpp
  src/v20200828/model/CreateStreamLinkFlowRequest.cpp
  src/v20200828/model/DescribeOutput.cpp
  src/v20200828/model/DescribeFlow.cpp
  src/v20200828/model/DeleteStreamLinkOutputRequest.cpp
  src/v20200828/model/CreateInputSRTSettings.cpp
  src/v20200828/model/DescribeInputRTMPSettings.cpp
  src/v20200828/model/ModifyStreamLinkFlowResponse.cpp
  src/v20200828/model/StartStreamLinkFlowRequest.cpp
  src/v20200828/model/RegionInfo.cpp
  src/v20200828/model/DescribeStreamLinkFlowResponse.cpp
  src/v20200828/model/StopStreamLinkFlowResponse.cpp
  src/v20200828/model/InputAddress.cpp
  src/v20200828/model/StopStreamLinkFlowRequest.cpp
  src/v20200828/model/CreateInput.cpp
  src/v20200828/model/DescribeOutputRTMPPullServerUrl.cpp
  src/v20200828/model/DescribeInput.cpp
  src/v20200828/model/DescribeStreamLinkFlowRequest.cpp
  src/v20200828/model/DescribeOutputSRTSettings.cpp
  src/v20200828/model/DeleteStreamLinkOutputResponse.cpp
  src/v20200828/model/DescribeOutputRTMPPullSettings.cpp
  src/v20200828/model/DescribeStreamLinkFlowsResponse.cpp
  src/v20200828/model/RTMPAddressDestination.cpp
  src/v20200828/model/DeleteStreamLinkFlowResponse.cpp
  src/v20200828/model/DescribeStreamLinkRegionsResponse.cpp
  src/v20200828/model/DescribeOutputRTPSettings.cpp
  src/v20200828/model/DescribeInputSRTSettings.cpp
  src/v20200828/model/StartStreamLinkFlowResponse.cpp
  src/v20200828/model/CreateStreamLinkFlowResponse.cpp
  src/v20200828/model/CreateInputRTPSettings.cpp
  src/v20200828/model/SRTAddressDestination.cpp
  src/v20200828/model/DescribeStreamLinkFlowsRequest.cpp
  src/v20200828/model/StreamLinkRegionInfo.cpp
  src/v20200828/model/RTPAddressDestination.cpp
  )

set(mdc_include
    include/tencentcloud/mdc
  )

add_library(mdc ${LIB_TYPE}
  ${mdc_public_header}
  ${mdc_public_header_model}
  ${mdc_src})

set_target_properties(mdc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mdc
  )

target_include_directories(mdc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mdc
  core)

#install(FILES ${mdc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdc/v20200828)
#install(FILES ${mdc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdc/v20200828/model)
install(DIRECTORY ${mdc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mdc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )