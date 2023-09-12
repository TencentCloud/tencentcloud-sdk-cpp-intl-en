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

set(mdl_public_header
  include/tencentcloud/mdl/v20200326/MdlClient.h
  )

set(mdl_public_header_model
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/VideoPipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/InputLossBehaviorInfo.h
  include/tencentcloud/mdl/v20200326/model/StreamVideoInfo.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLivePlanRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarksResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/QueryDispatchInputInfo.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/AudioPidSelectionInfo.h
  include/tencentcloud/mdl/v20200326/model/AudioPipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLivePlanResponse.h
  include/tencentcloud/mdl/v20200326/model/InputStreamInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelOutputStatisticsRequest.h
  include/tencentcloud/mdl/v20200326/model/ChannelPipelineAlerts.h
  include/tencentcloud/mdl/v20200326/model/InputInfo.h
  include/tencentcloud/mdl/v20200326/model/AVTemplate.h
  include/tencentcloud/mdl/v20200326/model/DestinationInfo.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveRegionsRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelAlertsRequest.h
  include/tencentcloud/mdl/v20200326/model/AudioSelectorInfo.h
  include/tencentcloud/mdl/v20200326/model/LogInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarkRequest.h
  include/tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/PipelineOutputStatistics.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLivePlanResponse.h
  include/tencentcloud/mdl/v20200326/model/CreateTextSettings.h
  include/tencentcloud/mdl/v20200326/model/DashRemuxSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveWatermarkRequest.h
  include/tencentcloud/mdl/v20200326/model/StreamInfo.h
  include/tencentcloud/mdl/v20200326/model/SDMCSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/AttachedInput.h
  include/tencentcloud/mdl/v20200326/model/QueryInputStreamStateResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarksRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeTranscodeDetailInfo.h
  include/tencentcloud/mdl/v20200326/model/TimeShiftSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/DeliveryRestrictionsInfo.h
  include/tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h
  include/tencentcloud/mdl/v20200326/model/TimingSettingsReq.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveWatermarkRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveTranscodeDetailRequest.h
  include/tencentcloud/mdl/v20200326/model/SegmentationDescriptorRespInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelLogsResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelInputStatisticsRequest.h
  include/tencentcloud/mdl/v20200326/model/PipelineLogInfo.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLivePlanRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelsRequest.h
  include/tencentcloud/mdl/v20200326/model/FailOverSettings.h
  include/tencentcloud/mdl/v20200326/model/ChannelInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/HlsRemuxSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/EventSettingsResp.h
  include/tencentcloud/mdl/v20200326/model/TimingSettingsResp.h
  include/tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h
  include/tencentcloud/mdl/v20200326/model/StreamPackageSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelsResponse.h
  include/tencentcloud/mdl/v20200326/model/QueryInputStreamStateRequest.h
  include/tencentcloud/mdl/v20200326/model/PlanReq.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveWatermarkRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveRegionsResponse.h
  include/tencentcloud/mdl/v20200326/model/TimedRecordSettings.h
  include/tencentcloud/mdl/v20200326/model/StreamLiveRegionInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLivePlansRequest.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveTranscodeDetailResponse.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveWatermarkResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputsResponse.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelAlertsResponse.h
  include/tencentcloud/mdl/v20200326/model/PlanResp.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLivePlansResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelLogsRequest.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelOutputStatisticsResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeWatermarkInfo.h
  include/tencentcloud/mdl/v20200326/model/EventSettingsDestinationReq.h
  include/tencentcloud/mdl/v20200326/model/EventSettingsReq.h
  include/tencentcloud/mdl/v20200326/model/DrmKey.h
  include/tencentcloud/mdl/v20200326/model/EventSettingsDestinationResp.h
  include/tencentcloud/mdl/v20200326/model/OutputInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelInputStatisticsResponse.h
  include/tencentcloud/mdl/v20200326/model/StopStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/PushEventSetting.h
  include/tencentcloud/mdl/v20200326/model/CreateImageSettings.h
  include/tencentcloud/mdl/v20200326/model/StartStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/StreamLiveOutputGroupsInfo.h
  include/tencentcloud/mdl/v20200326/model/ChannelOutputsStatistics.h
  include/tencentcloud/mdl/v20200326/model/PlanSettings.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupsResponse.h
  include/tencentcloud/mdl/v20200326/model/EventNotifySetting.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/StartStreamLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarkResponse.h
  include/tencentcloud/mdl/v20200326/model/StreamScte35Info.h
  include/tencentcloud/mdl/v20200326/model/StreamAudioInfo.h
  include/tencentcloud/mdl/v20200326/model/OutputsStatistics.h
  include/tencentcloud/mdl/v20200326/model/InputSecurityGroupInfo.h
  include/tencentcloud/mdl/v20200326/model/RegionInfo.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/ChannelAlertInfos.h
  include/tencentcloud/mdl/v20200326/model/PipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/StopStreamLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/InputStatistics.h
  include/tencentcloud/mdl/v20200326/model/LogMessageInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputsRequest.h
  include/tencentcloud/mdl/v20200326/model/Scte35SettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveWatermarkResponse.h
  include/tencentcloud/mdl/v20200326/model/ModifyStreamLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeTextSettings.h
  include/tencentcloud/mdl/v20200326/model/DescribeImageSettings.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveWatermarkResponse.h
  include/tencentcloud/mdl/v20200326/model/CreateStreamLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/StreamLiveChannelInfo.h
  include/tencentcloud/mdl/v20200326/model/SegmentationDescriptorInfo.h
  include/tencentcloud/mdl/v20200326/model/InputSettingInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupsRequest.h
  include/tencentcloud/mdl/v20200326/model/DeleteStreamLiveChannelRequest.h
  )

set(mdl_src
  src/v20200326/MdlClient.cpp
  src/v20200326/model/DeleteStreamLiveChannelResponse.cpp
  src/v20200326/model/VideoPipelineInputStatistics.cpp
  src/v20200326/model/CreateStreamLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/InputLossBehaviorInfo.cpp
  src/v20200326/model/StreamVideoInfo.cpp
  src/v20200326/model/CreateStreamLivePlanRequest.cpp
  src/v20200326/model/DescribeStreamLiveWatermarksResponse.cpp
  src/v20200326/model/DescribeStreamLiveInputRequest.cpp
  src/v20200326/model/QueryDispatchInputInfo.cpp
  src/v20200326/model/CreateStreamLiveInputRequest.cpp
  src/v20200326/model/AudioPidSelectionInfo.cpp
  src/v20200326/model/AudioPipelineInputStatistics.cpp
  src/v20200326/model/CreateStreamLivePlanResponse.cpp
  src/v20200326/model/InputStreamInfo.cpp
  src/v20200326/model/DescribeStreamLiveChannelOutputStatisticsRequest.cpp
  src/v20200326/model/ChannelPipelineAlerts.cpp
  src/v20200326/model/InputInfo.cpp
  src/v20200326/model/AVTemplate.cpp
  src/v20200326/model/DestinationInfo.cpp
  src/v20200326/model/DeleteStreamLiveInputRequest.cpp
  src/v20200326/model/ModifyStreamLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/ModifyStreamLiveInputRequest.cpp
  src/v20200326/model/DescribeStreamLiveChannelResponse.cpp
  src/v20200326/model/DescribeStreamLiveRegionsRequest.cpp
  src/v20200326/model/DescribeStreamLiveChannelAlertsRequest.cpp
  src/v20200326/model/AudioSelectorInfo.cpp
  src/v20200326/model/LogInfo.cpp
  src/v20200326/model/DescribeStreamLiveWatermarkRequest.cpp
  src/v20200326/model/DrmSettingsInfo.cpp
  src/v20200326/model/PipelineOutputStatistics.cpp
  src/v20200326/model/DeleteStreamLivePlanResponse.cpp
  src/v20200326/model/CreateTextSettings.cpp
  src/v20200326/model/DashRemuxSettingsInfo.cpp
  src/v20200326/model/CreateStreamLiveWatermarkRequest.cpp
  src/v20200326/model/StreamInfo.cpp
  src/v20200326/model/SDMCSettingsInfo.cpp
  src/v20200326/model/DeleteStreamLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/AttachedInput.cpp
  src/v20200326/model/QueryInputStreamStateResponse.cpp
  src/v20200326/model/DescribeStreamLiveWatermarksRequest.cpp
  src/v20200326/model/DescribeTranscodeDetailInfo.cpp
  src/v20200326/model/TimeShiftSettingsInfo.cpp
  src/v20200326/model/DeliveryRestrictionsInfo.cpp
  src/v20200326/model/VideoTemplateInfo.cpp
  src/v20200326/model/TimingSettingsReq.cpp
  src/v20200326/model/ModifyStreamLiveWatermarkRequest.cpp
  src/v20200326/model/DescribeStreamLiveTranscodeDetailRequest.cpp
  src/v20200326/model/SegmentationDescriptorRespInfo.cpp
  src/v20200326/model/DescribeStreamLiveChannelLogsResponse.cpp
  src/v20200326/model/DescribeStreamLiveChannelInputStatisticsRequest.cpp
  src/v20200326/model/PipelineLogInfo.cpp
  src/v20200326/model/DeleteStreamLivePlanRequest.cpp
  src/v20200326/model/DescribeStreamLiveChannelsRequest.cpp
  src/v20200326/model/FailOverSettings.cpp
  src/v20200326/model/ChannelInputStatistics.cpp
  src/v20200326/model/HlsRemuxSettingsInfo.cpp
  src/v20200326/model/EventSettingsResp.cpp
  src/v20200326/model/TimingSettingsResp.cpp
  src/v20200326/model/AudioTemplateInfo.cpp
  src/v20200326/model/StreamPackageSettingsInfo.cpp
  src/v20200326/model/DescribeStreamLiveChannelsResponse.cpp
  src/v20200326/model/QueryInputStreamStateRequest.cpp
  src/v20200326/model/PlanReq.cpp
  src/v20200326/model/DeleteStreamLiveWatermarkRequest.cpp
  src/v20200326/model/DescribeStreamLiveRegionsResponse.cpp
  src/v20200326/model/TimedRecordSettings.cpp
  src/v20200326/model/StreamLiveRegionInfo.cpp
  src/v20200326/model/DescribeStreamLiveChannelRequest.cpp
  src/v20200326/model/DescribeStreamLivePlansRequest.cpp
  src/v20200326/model/CreateStreamLiveChannelRequest.cpp
  src/v20200326/model/DescribeStreamLiveTranscodeDetailResponse.cpp
  src/v20200326/model/CreateStreamLiveWatermarkResponse.cpp
  src/v20200326/model/DescribeStreamLiveInputsResponse.cpp
  src/v20200326/model/ModifyStreamLiveInputResponse.cpp
  src/v20200326/model/DescribeStreamLiveChannelAlertsResponse.cpp
  src/v20200326/model/PlanResp.cpp
  src/v20200326/model/DescribeStreamLivePlansResponse.cpp
  src/v20200326/model/DescribeStreamLiveChannelLogsRequest.cpp
  src/v20200326/model/CreateStreamLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/DescribeStreamLiveChannelOutputStatisticsResponse.cpp
  src/v20200326/model/DescribeWatermarkInfo.cpp
  src/v20200326/model/EventSettingsDestinationReq.cpp
  src/v20200326/model/EventSettingsReq.cpp
  src/v20200326/model/DrmKey.cpp
  src/v20200326/model/EventSettingsDestinationResp.cpp
  src/v20200326/model/OutputInfo.cpp
  src/v20200326/model/DescribeStreamLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/CreateStreamLiveChannelResponse.cpp
  src/v20200326/model/DescribeStreamLiveChannelInputStatisticsResponse.cpp
  src/v20200326/model/StopStreamLiveChannelResponse.cpp
  src/v20200326/model/PushEventSetting.cpp
  src/v20200326/model/CreateImageSettings.cpp
  src/v20200326/model/StartStreamLiveChannelResponse.cpp
  src/v20200326/model/StreamLiveOutputGroupsInfo.cpp
  src/v20200326/model/ChannelOutputsStatistics.cpp
  src/v20200326/model/PlanSettings.cpp
  src/v20200326/model/DescribeStreamLiveInputSecurityGroupsResponse.cpp
  src/v20200326/model/EventNotifySetting.cpp
  src/v20200326/model/DeleteStreamLiveInputResponse.cpp
  src/v20200326/model/StartStreamLiveChannelRequest.cpp
  src/v20200326/model/DescribeStreamLiveWatermarkResponse.cpp
  src/v20200326/model/StreamScte35Info.cpp
  src/v20200326/model/StreamAudioInfo.cpp
  src/v20200326/model/OutputsStatistics.cpp
  src/v20200326/model/InputSecurityGroupInfo.cpp
  src/v20200326/model/RegionInfo.cpp
  src/v20200326/model/ModifyStreamLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/ChannelAlertInfos.cpp
  src/v20200326/model/PipelineInputStatistics.cpp
  src/v20200326/model/ModifyStreamLiveChannelResponse.cpp
  src/v20200326/model/DeleteStreamLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/StopStreamLiveChannelRequest.cpp
  src/v20200326/model/DescribeStreamLiveInputResponse.cpp
  src/v20200326/model/InputStatistics.cpp
  src/v20200326/model/LogMessageInfo.cpp
  src/v20200326/model/DescribeStreamLiveInputsRequest.cpp
  src/v20200326/model/Scte35SettingsInfo.cpp
  src/v20200326/model/ModifyStreamLiveWatermarkResponse.cpp
  src/v20200326/model/ModifyStreamLiveChannelRequest.cpp
  src/v20200326/model/DescribeTextSettings.cpp
  src/v20200326/model/DescribeImageSettings.cpp
  src/v20200326/model/DeleteStreamLiveWatermarkResponse.cpp
  src/v20200326/model/CreateStreamLiveInputResponse.cpp
  src/v20200326/model/DescribeStreamLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/StreamLiveChannelInfo.cpp
  src/v20200326/model/SegmentationDescriptorInfo.cpp
  src/v20200326/model/InputSettingInfo.cpp
  src/v20200326/model/DescribeStreamLiveInputSecurityGroupsRequest.cpp
  src/v20200326/model/DeleteStreamLiveChannelRequest.cpp
  )

set(mdl_include
    include/tencentcloud/mdl
  )

add_library(mdl ${LIB_TYPE}
  ${mdl_public_header}
  ${mdl_public_header_model}
  ${mdl_src})

set_target_properties(mdl
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mdl
  )

target_include_directories(mdl
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mdl
  core)

#install(FILES ${mdl_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdl/v20200326)
#install(FILES ${mdl_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdl/v20200326/model)
install(DIRECTORY ${mdl_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mdl
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
