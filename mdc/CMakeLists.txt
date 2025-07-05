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

set(mdc_public_header
  include/tencentcloud/mdc/v20200828/MdcClient.h
  )

set(mdc_public_header_model
  include/tencentcloud/mdc/v20200828/model/OutputAddress.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPPullServerUrl.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/FlowRealtimeStatusRTP.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsRequest.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkInputResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputSrtSettingsDestinations.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowStatisticsRequest.h
  include/tencentcloud/mdc/v20200828/model/StopStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkOutputInfoResponse.h
  include/tencentcloud/mdc/v20200828/model/FlowSRTInfo.h
  include/tencentcloud/mdc/v20200828/model/SRTSourceAddressResp.h
  include/tencentcloud/mdc/v20200828/model/DescribeInput.h
  include/tencentcloud/mdc/v20200828/model/FlowMediaInfo.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeRTMPPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowSRTStatisticsResponse.h
  include/tencentcloud/mdc/v20200828/model/ModifyOutputInfo.h
  include/tencentcloud/mdc/v20200828/model/CreateInputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkOutputInfoResponse.h
  include/tencentcloud/mdc/v20200828/model/RTPAddressDestination.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowLogsResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutput.h
  include/tencentcloud/mdc/v20200828/model/CreateInputHLSPullSettings.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputSrtSettings.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/StartStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/StartStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputRTPSettingsDestinations.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputInfo.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRealtimeStatusResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTSPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/FlowMediaAudio.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/ModifyInput.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowLogsRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTMPSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTMPSettings.h
  include/tencentcloud/mdc/v20200828/model/OutputSRTSourceAddressResp.h
  include/tencentcloud/mdc/v20200828/model/CreateInputRTMPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/FlowVideo.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/RTMPAddressDestination.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowMediaStatisticsResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputInfoRTPSettings.h
  include/tencentcloud/mdc/v20200828/model/SRTSourceAddressReq.h
  include/tencentcloud/mdc/v20200828/model/DescribeFlow.h
  include/tencentcloud/mdc/v20200828/model/DescribeRTSPPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTSPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRealtimeStatusRequest.h
  include/tencentcloud/mdc/v20200828/model/FlowAudio.h
  include/tencentcloud/mdc/v20200828/model/FlowMediaVideo.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputHLSPullServerUrl.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowSRTStatisticsRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputHLSPullSettings.h
  include/tencentcloud/mdc/v20200828/model/FlowStatisticsArray.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowStatisticsResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputHLSPullSettings.h
  include/tencentcloud/mdc/v20200828/model/SRTAddressDestination.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsRequest.h
  include/tencentcloud/mdc/v20200828/model/FlowRealtimeStatusItem.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkOutputInfoRequest.h
  include/tencentcloud/mdc/v20200828/model/CreateInputRTSPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/FlowRealtimeStatusSRT.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/FlowStatistics.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputRequest.h
  include/tencentcloud/mdc/v20200828/model/RTSPPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/DescribeHLSPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/FlowRealtimeStatusCommon.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowMediaStatisticsRequest.h
  include/tencentcloud/mdc/v20200828/model/RegionInfo.h
  include/tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkInputResponse.h
  include/tencentcloud/mdc/v20200828/model/FlowRealtimeStatusRTMP.h
  include/tencentcloud/mdc/v20200828/model/StopStreamLinkFlowRequest.h
  include/tencentcloud/mdc/v20200828/model/CreateInput.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputRTMPSettings.h
  include/tencentcloud/mdc/v20200828/model/HLSPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/CreateOutputRtmpSettingsDestinations.h
  include/tencentcloud/mdc/v20200828/model/FlowLogInfo.h
  include/tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputResponse.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkOutputInfoRequest.h
  include/tencentcloud/mdc/v20200828/model/ModifyStreamLinkInputRequest.h
  include/tencentcloud/mdc/v20200828/model/ResilientStreamConf.h
  include/tencentcloud/mdc/v20200828/model/CreateStreamLinkInputRequest.h
  include/tencentcloud/mdc/v20200828/model/DescribeOutputRTSPPullServerUrl.h
  include/tencentcloud/mdc/v20200828/model/InputAddress.h
  include/tencentcloud/mdc/v20200828/model/DescribeInputRTMPPullSettings.h
  include/tencentcloud/mdc/v20200828/model/CreateInputSRTSettings.h
  include/tencentcloud/mdc/v20200828/model/RTMPPullSourceAddress.h
  include/tencentcloud/mdc/v20200828/model/StreamLinkRegionInfo.h
  )

set(mdc_src
  src/v20200828/MdcClient.cpp
  src/v20200828/model/OutputAddress.cpp
  src/v20200828/model/DescribeOutputRTMPPullServerUrl.cpp
  src/v20200828/model/DescribeInputRTPSettings.cpp
  src/v20200828/model/FlowRealtimeStatusRTP.cpp
  src/v20200828/model/DescribeStreamLinkRegionsRequest.cpp
  src/v20200828/model/DeleteStreamLinkFlowRequest.cpp
  src/v20200828/model/ModifyStreamLinkInputResponse.cpp
  src/v20200828/model/CreateOutputSrtSettingsDestinations.cpp
  src/v20200828/model/DescribeStreamLinkFlowStatisticsRequest.cpp
  src/v20200828/model/StopStreamLinkFlowResponse.cpp
  src/v20200828/model/ModifyStreamLinkOutputInfoResponse.cpp
  src/v20200828/model/FlowSRTInfo.cpp
  src/v20200828/model/SRTSourceAddressResp.cpp
  src/v20200828/model/DescribeInput.cpp
  src/v20200828/model/FlowMediaInfo.cpp
  src/v20200828/model/DescribeOutputSRTSettings.cpp
  src/v20200828/model/DescribeRTMPPullSourceAddress.cpp
  src/v20200828/model/DescribeOutputRTMPPullSettings.cpp
  src/v20200828/model/DescribeStreamLinkFlowSRTStatisticsResponse.cpp
  src/v20200828/model/ModifyOutputInfo.cpp
  src/v20200828/model/CreateInputRTPSettings.cpp
  src/v20200828/model/CreateStreamLinkOutputInfoResponse.cpp
  src/v20200828/model/RTPAddressDestination.cpp
  src/v20200828/model/DescribeStreamLinkFlowLogsResponse.cpp
  src/v20200828/model/DescribeOutput.cpp
  src/v20200828/model/CreateInputHLSPullSettings.cpp
  src/v20200828/model/CreateOutputSrtSettings.cpp
  src/v20200828/model/ModifyStreamLinkFlowResponse.cpp
  src/v20200828/model/StartStreamLinkFlowRequest.cpp
  src/v20200828/model/StartStreamLinkFlowResponse.cpp
  src/v20200828/model/CreateOutputRTPSettingsDestinations.cpp
  src/v20200828/model/CreateOutputInfo.cpp
  src/v20200828/model/DescribeStreamLinkFlowRealtimeStatusResponse.cpp
  src/v20200828/model/DescribeStreamLinkFlowsResponse.cpp
  src/v20200828/model/DescribeInputRTSPPullSettings.cpp
  src/v20200828/model/FlowMediaAudio.cpp
  src/v20200828/model/DescribeOutputRTPSettings.cpp
  src/v20200828/model/ModifyInput.cpp
  src/v20200828/model/DescribeStreamLinkFlowLogsRequest.cpp
  src/v20200828/model/DescribeInputRTMPSettings.cpp
  src/v20200828/model/DescribeOutputRTMPSettings.cpp
  src/v20200828/model/OutputSRTSourceAddressResp.cpp
  src/v20200828/model/CreateInputRTMPPullSettings.cpp
  src/v20200828/model/FlowVideo.cpp
  src/v20200828/model/ModifyStreamLinkFlowRequest.cpp
  src/v20200828/model/RTMPAddressDestination.cpp
  src/v20200828/model/DescribeStreamLinkFlowMediaStatisticsResponse.cpp
  src/v20200828/model/CreateOutputInfoRTPSettings.cpp
  src/v20200828/model/SRTSourceAddressReq.cpp
  src/v20200828/model/DescribeFlow.cpp
  src/v20200828/model/DescribeRTSPPullSourceAddress.cpp
  src/v20200828/model/DeleteStreamLinkFlowResponse.cpp
  src/v20200828/model/DescribeOutputRTSPPullSettings.cpp
  src/v20200828/model/DescribeStreamLinkFlowRealtimeStatusRequest.cpp
  src/v20200828/model/FlowAudio.cpp
  src/v20200828/model/FlowMediaVideo.cpp
  src/v20200828/model/DescribeOutputHLSPullServerUrl.cpp
  src/v20200828/model/DescribeStreamLinkFlowSRTStatisticsRequest.cpp
  src/v20200828/model/DescribeStreamLinkFlowRequest.cpp
  src/v20200828/model/DescribeOutputHLSPullSettings.cpp
  src/v20200828/model/FlowStatisticsArray.cpp
  src/v20200828/model/DescribeStreamLinkRegionsResponse.cpp
  src/v20200828/model/DescribeInputSRTSettings.cpp
  src/v20200828/model/DescribeStreamLinkFlowStatisticsResponse.cpp
  src/v20200828/model/CreateStreamLinkFlowResponse.cpp
  src/v20200828/model/DescribeInputHLSPullSettings.cpp
  src/v20200828/model/SRTAddressDestination.cpp
  src/v20200828/model/DescribeStreamLinkFlowsRequest.cpp
  src/v20200828/model/FlowRealtimeStatusItem.cpp
  src/v20200828/model/ModifyStreamLinkOutputInfoRequest.cpp
  src/v20200828/model/CreateInputRTSPPullSettings.cpp
  src/v20200828/model/FlowRealtimeStatusSRT.cpp
  src/v20200828/model/CreateStreamLinkFlowRequest.cpp
  src/v20200828/model/FlowStatistics.cpp
  src/v20200828/model/DeleteStreamLinkOutputRequest.cpp
  src/v20200828/model/RTSPPullSourceAddress.cpp
  src/v20200828/model/DescribeHLSPullSourceAddress.cpp
  src/v20200828/model/FlowRealtimeStatusCommon.cpp
  src/v20200828/model/DescribeStreamLinkFlowMediaStatisticsRequest.cpp
  src/v20200828/model/RegionInfo.cpp
  src/v20200828/model/DescribeStreamLinkFlowResponse.cpp
  src/v20200828/model/CreateStreamLinkInputResponse.cpp
  src/v20200828/model/FlowRealtimeStatusRTMP.cpp
  src/v20200828/model/StopStreamLinkFlowRequest.cpp
  src/v20200828/model/CreateInput.cpp
  src/v20200828/model/CreateOutputRTMPSettings.cpp
  src/v20200828/model/HLSPullSourceAddress.cpp
  src/v20200828/model/CreateOutputRtmpSettingsDestinations.cpp
  src/v20200828/model/FlowLogInfo.cpp
  src/v20200828/model/DeleteStreamLinkOutputResponse.cpp
  src/v20200828/model/CreateStreamLinkOutputInfoRequest.cpp
  src/v20200828/model/ModifyStreamLinkInputRequest.cpp
  src/v20200828/model/ResilientStreamConf.cpp
  src/v20200828/model/CreateStreamLinkInputRequest.cpp
  src/v20200828/model/DescribeOutputRTSPPullServerUrl.cpp
  src/v20200828/model/InputAddress.cpp
  src/v20200828/model/DescribeInputRTMPPullSettings.cpp
  src/v20200828/model/CreateInputSRTSettings.cpp
  src/v20200828/model/RTMPPullSourceAddress.cpp
  src/v20200828/model/StreamLinkRegionInfo.cpp
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
