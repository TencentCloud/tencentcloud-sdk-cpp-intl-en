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

set(gme_public_header
  include/tencentcloud/gme/v20180711/GmeClient.h
  )

set(gme_public_header_model
  include/tencentcloud/gme/v20180711/model/StatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeRecordInfoResponse.h
  include/tencentcloud/gme/v20180711/model/AppStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DeleteRoomMemberRequest.h
  include/tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h
  include/tencentcloud/gme/v20180711/model/ModifyRecordInfoRequest.h
  include/tencentcloud/gme/v20180711/model/DescribeApplicationDataRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeRecordInfoRequest.h
  include/tencentcloud/gme/v20180711/model/StartRecordResponse.h
  include/tencentcloud/gme/v20180711/model/StartRecordRequest.h
  include/tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeAppStatisticsRequest.h
  include/tencentcloud/gme/v20180711/model/StreamTextStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/Tag.h
  include/tencentcloud/gme/v20180711/model/VoiceMessageConf.h
  include/tencentcloud/gme/v20180711/model/AudioTextStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeTaskInfoResponse.h
  include/tencentcloud/gme/v20180711/model/ApplicationDataStatistics.h
  include/tencentcloud/gme/v20180711/model/ModifyAppStatusResp.h
  include/tencentcloud/gme/v20180711/model/DescribeAppStatisticsResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeApplicationDataResponse.h
  include/tencentcloud/gme/v20180711/model/DeleteRoomMemberResponse.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/CreateAppResp.h
  include/tencentcloud/gme/v20180711/model/RecordInfo.h
  include/tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h
  include/tencentcloud/gme/v20180711/model/RealtimeTextStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/SceneInfo.h
  include/tencentcloud/gme/v20180711/model/DeleteResult.h
  include/tencentcloud/gme/v20180711/model/OverseaTextStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeTaskInfoRequest.h
  include/tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h
  include/tencentcloud/gme/v20180711/model/DescribeAppStatisticsResp.h
  include/tencentcloud/gme/v20180711/model/AsrConf.h
  include/tencentcloud/gme/v20180711/model/CreateAppResponse.h
  include/tencentcloud/gme/v20180711/model/StopRecordRequest.h
  include/tencentcloud/gme/v20180711/model/StopRecordResponse.h
  include/tencentcloud/gme/v20180711/model/CreateAppRequest.h
  include/tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterConf.h
  include/tencentcloud/gme/v20180711/model/ModifyRecordInfoResponse.h
  )

set(gme_src
  src/v20180711/GmeClient.cpp
  src/v20180711/model/StatisticsItem.cpp
  src/v20180711/model/DescribeRecordInfoResponse.cpp
  src/v20180711/model/AppStatisticsItem.cpp
  src/v20180711/model/DeleteRoomMemberRequest.cpp
  src/v20180711/model/ModifyAppStatusRequest.cpp
  src/v20180711/model/ModifyRecordInfoRequest.cpp
  src/v20180711/model/DescribeApplicationDataRequest.cpp
  src/v20180711/model/VoiceMessageStatisticsItem.cpp
  src/v20180711/model/DescribeRecordInfoRequest.cpp
  src/v20180711/model/StartRecordResponse.cpp
  src/v20180711/model/StartRecordRequest.cpp
  src/v20180711/model/RealTimeSpeechStatisticsItem.cpp
  src/v20180711/model/DescribeAppStatisticsRequest.cpp
  src/v20180711/model/StreamTextStatisticsItem.cpp
  src/v20180711/model/Tag.cpp
  src/v20180711/model/VoiceMessageConf.cpp
  src/v20180711/model/AudioTextStatisticsItem.cpp
  src/v20180711/model/DescribeTaskInfoResponse.cpp
  src/v20180711/model/ApplicationDataStatistics.cpp
  src/v20180711/model/ModifyAppStatusResp.cpp
  src/v20180711/model/DescribeAppStatisticsResponse.cpp
  src/v20180711/model/DescribeApplicationDataResponse.cpp
  src/v20180711/model/DeleteRoomMemberResponse.cpp
  src/v20180711/model/VoiceFilterStatisticsItem.cpp
  src/v20180711/model/CreateAppResp.cpp
  src/v20180711/model/RecordInfo.cpp
  src/v20180711/model/SubscribeRecordUserIds.cpp
  src/v20180711/model/RealtimeTextStatisticsItem.cpp
  src/v20180711/model/SceneInfo.cpp
  src/v20180711/model/DeleteResult.cpp
  src/v20180711/model/OverseaTextStatisticsItem.cpp
  src/v20180711/model/DescribeTaskInfoRequest.cpp
  src/v20180711/model/RealtimeSpeechConf.cpp
  src/v20180711/model/DescribeAppStatisticsResp.cpp
  src/v20180711/model/AsrConf.cpp
  src/v20180711/model/CreateAppResponse.cpp
  src/v20180711/model/StopRecordRequest.cpp
  src/v20180711/model/StopRecordResponse.cpp
  src/v20180711/model/CreateAppRequest.cpp
  src/v20180711/model/ModifyAppStatusResponse.cpp
  src/v20180711/model/VoiceFilterConf.cpp
  src/v20180711/model/ModifyRecordInfoResponse.cpp
  )

set(gme_include
    include/tencentcloud/gme
  )

add_library(gme ${LIB_TYPE}
  ${gme_public_header}
  ${gme_public_header_model}
  ${gme_src})

set_target_properties(gme
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gme
  )

target_include_directories(gme
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gme
  core)

#install(FILES ${gme_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711)
#install(FILES ${gme_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711/model)
install(DIRECTORY ${gme_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gme
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
