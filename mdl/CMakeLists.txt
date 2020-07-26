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
  include/tencentcloud/mdl/v20200326/model/InputStatistics.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/PipelineOutputStatistics.h
  include/tencentcloud/mdl/v20200326/model/AttachedInputInfo.h
  include/tencentcloud/mdl/v20200326/model/OutputGroupsInfo.h
  include/tencentcloud/mdl/v20200326/model/DashRemuxSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/MediaPackageSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/StartMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/OutputsStatistics.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/VideoPipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/Scte35SettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputsRequest.h
  include/tencentcloud/mdl/v20200326/model/PipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputRequest.h
  include/tencentcloud/mdl/v20200326/model/AudioPidSelectionInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/StartMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/DrmKey.h
  include/tencentcloud/mdl/v20200326/model/AudioPipelineInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupsResponse.h
  include/tencentcloud/mdl/v20200326/model/InputSecurityGroupInfo.h
  include/tencentcloud/mdl/v20200326/model/StopMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupsRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/ChannelAlertInfos.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/ChannelInfo.h
  include/tencentcloud/mdl/v20200326/model/ChannelPipelineAlerts.h
  include/tencentcloud/mdl/v20200326/model/InputInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/DestinationInfo.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelInputStatisticsRequest.h
  include/tencentcloud/mdl/v20200326/model/InputSettingInfo.h
  include/tencentcloud/mdl/v20200326/model/OutputInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelAlertsRequest.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputsResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelOutputStatisticsResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelAlertsResponse.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelsResponse.h
  include/tencentcloud/mdl/v20200326/model/ChannelInputStatistics.h
  include/tencentcloud/mdl/v20200326/model/HlsRemuxSettingsInfo.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveChannelResponse.h
  include/tencentcloud/mdl/v20200326/model/CreateMediaLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputSecurityGroupRequest.h
  include/tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelOutputStatisticsRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelInputStatisticsResponse.h
  include/tencentcloud/mdl/v20200326/model/AudioSelectorInfo.h
  include/tencentcloud/mdl/v20200326/model/StopMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputSecurityGroupResponse.h
  include/tencentcloud/mdl/v20200326/model/ChannelOutputsStatistics.h
  include/tencentcloud/mdl/v20200326/model/ModifyMediaLiveChannelRequest.h
  include/tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelsRequest.h
  )

set(mdl_src
  src/v20200326/MdlClient.cpp
  src/v20200326/model/InputStatistics.cpp
  src/v20200326/model/ModifyMediaLiveInputRequest.cpp
  src/v20200326/model/DrmSettingsInfo.cpp
  src/v20200326/model/PipelineOutputStatistics.cpp
  src/v20200326/model/AttachedInputInfo.cpp
  src/v20200326/model/OutputGroupsInfo.cpp
  src/v20200326/model/DashRemuxSettingsInfo.cpp
  src/v20200326/model/MediaPackageSettingsInfo.cpp
  src/v20200326/model/StartMediaLiveChannelRequest.cpp
  src/v20200326/model/VideoTemplateInfo.cpp
  src/v20200326/model/DeleteMediaLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/DeleteMediaLiveInputRequest.cpp
  src/v20200326/model/ModifyMediaLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/OutputsStatistics.cpp
  src/v20200326/model/DeleteMediaLiveInputResponse.cpp
  src/v20200326/model/ModifyMediaLiveInputResponse.cpp
  src/v20200326/model/VideoPipelineInputStatistics.cpp
  src/v20200326/model/CreateMediaLiveInputRequest.cpp
  src/v20200326/model/Scte35SettingsInfo.cpp
  src/v20200326/model/DescribeMediaLiveInputsRequest.cpp
  src/v20200326/model/PipelineInputStatistics.cpp
  src/v20200326/model/DescribeMediaLiveInputRequest.cpp
  src/v20200326/model/AudioPidSelectionInfo.cpp
  src/v20200326/model/DescribeMediaLiveChannelRequest.cpp
  src/v20200326/model/StartMediaLiveChannelResponse.cpp
  src/v20200326/model/DrmKey.cpp
  src/v20200326/model/AudioPipelineInputStatistics.cpp
  src/v20200326/model/DescribeMediaLiveInputSecurityGroupsResponse.cpp
  src/v20200326/model/InputSecurityGroupInfo.cpp
  src/v20200326/model/StopMediaLiveChannelResponse.cpp
  src/v20200326/model/CreateMediaLiveChannelRequest.cpp
  src/v20200326/model/DescribeMediaLiveInputSecurityGroupsRequest.cpp
  src/v20200326/model/DescribeMediaLiveChannelResponse.cpp
  src/v20200326/model/ChannelAlertInfos.cpp
  src/v20200326/model/DeleteMediaLiveChannelResponse.cpp
  src/v20200326/model/ChannelInfo.cpp
  src/v20200326/model/ChannelPipelineAlerts.cpp
  src/v20200326/model/InputInfo.cpp
  src/v20200326/model/DescribeMediaLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/DeleteMediaLiveChannelRequest.cpp
  src/v20200326/model/CreateMediaLiveInputResponse.cpp
  src/v20200326/model/DestinationInfo.cpp
  src/v20200326/model/CreateMediaLiveChannelResponse.cpp
  src/v20200326/model/DescribeMediaLiveInputResponse.cpp
  src/v20200326/model/DescribeMediaLiveChannelInputStatisticsRequest.cpp
  src/v20200326/model/InputSettingInfo.cpp
  src/v20200326/model/OutputInfo.cpp
  src/v20200326/model/DescribeMediaLiveChannelAlertsRequest.cpp
  src/v20200326/model/CreateMediaLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/DescribeMediaLiveInputsResponse.cpp
  src/v20200326/model/DescribeMediaLiveChannelOutputStatisticsResponse.cpp
  src/v20200326/model/DescribeMediaLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/DescribeMediaLiveChannelAlertsResponse.cpp
  src/v20200326/model/DescribeMediaLiveChannelsResponse.cpp
  src/v20200326/model/ChannelInputStatistics.cpp
  src/v20200326/model/HlsRemuxSettingsInfo.cpp
  src/v20200326/model/ModifyMediaLiveChannelResponse.cpp
  src/v20200326/model/CreateMediaLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/DeleteMediaLiveInputSecurityGroupRequest.cpp
  src/v20200326/model/AudioTemplateInfo.cpp
  src/v20200326/model/DescribeMediaLiveChannelOutputStatisticsRequest.cpp
  src/v20200326/model/DescribeMediaLiveChannelInputStatisticsResponse.cpp
  src/v20200326/model/AudioSelectorInfo.cpp
  src/v20200326/model/StopMediaLiveChannelRequest.cpp
  src/v20200326/model/ModifyMediaLiveInputSecurityGroupResponse.cpp
  src/v20200326/model/ChannelOutputsStatistics.cpp
  src/v20200326/model/ModifyMediaLiveChannelRequest.cpp
  src/v20200326/model/DescribeMediaLiveChannelsRequest.cpp
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
