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

set(trtc_public_header
  include/tencentcloud/trtc/v20190722/TrtcClient.h
  )

set(trtc_public_header_model
  include/tencentcloud/trtc/v20190722/model/AgentConfig.h
  include/tencentcloud/trtc/v20190722/model/DescribeRecordingUsageResponse.h
  include/tencentcloud/trtc/v20190722/model/AudioEncodeParams.h
  include/tencentcloud/trtc/v20190722/model/ServerPushText.h
  include/tencentcloud/trtc/v20190722/model/McuRecordParams.h
  include/tencentcloud/trtc/v20190722/model/MixLayout.h
  include/tencentcloud/trtc/v20190722/model/McuVideoParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataRequest.h
  include/tencentcloud/trtc/v20190722/model/StartAIConversationResponse.h
  include/tencentcloud/trtc/v20190722/model/StartAIConversationRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataRequest.h
  include/tencentcloud/trtc/v20190722/model/McuLayoutVolume.h
  include/tencentcloud/trtc/v20190722/model/SetUserBlockedRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserEventRequest.h
  include/tencentcloud/trtc/v20190722/model/SetUserBlockedResponse.h
  include/tencentcloud/trtc/v20190722/model/WaterMarkChar.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageResponse.h
  include/tencentcloud/trtc/v20190722/model/StopPublishCdnStreamResponse.h
  include/tencentcloud/trtc/v20190722/model/AbnormalEvent.h
  include/tencentcloud/trtc/v20190722/model/ScaleInfomation.h
  include/tencentcloud/trtc/v20190722/model/AgentParams.h
  include/tencentcloud/trtc/v20190722/model/ControlAIConversationResponse.h
  include/tencentcloud/trtc/v20190722/model/StopAITranscriptionRequest.h
  include/tencentcloud/trtc/v20190722/model/VideoEncodeParams.h
  include/tencentcloud/trtc/v20190722/model/UpdateAIConversationResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserEventResponse.h
  include/tencentcloud/trtc/v20190722/model/VideoEncode.h
  include/tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataResponse.h
  include/tencentcloud/trtc/v20190722/model/McuTencentVod.h
  include/tencentcloud/trtc/v20190722/model/DescribeWebRecordResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserInfoRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeRelayUsageRequest.h
  include/tencentcloud/trtc/v20190722/model/CloudStorage.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcUsageResponse.h
  include/tencentcloud/trtc/v20190722/model/TimeValue.h
  include/tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeWebRecordRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeRoomInfoRequest.h
  include/tencentcloud/trtc/v20190722/model/StorageParams.h
  include/tencentcloud/trtc/v20190722/model/CloudVod.h
  include/tencentcloud/trtc/v20190722/model/EmulateMobileParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataResponse.h
  include/tencentcloud/trtc/v20190722/model/McuCustomCrop.h
  include/tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeStreamIngestResponse.h
  include/tencentcloud/trtc/v20190722/model/MixTranscodeParams.h
  include/tencentcloud/trtc/v20190722/model/StopStreamIngestRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataResponse.h
  include/tencentcloud/trtc/v20190722/model/SubscribeStreamUserIds.h
  include/tencentcloud/trtc/v20190722/model/WaterMarkImage.h
  include/tencentcloud/trtc/v20190722/model/McuUserInfoParams.h
  include/tencentcloud/trtc/v20190722/model/UserMediaStream.h
  include/tencentcloud/trtc/v20190722/model/EventList.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcUsageRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeRoomInfoResponse.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomRequest.h
  include/tencentcloud/trtc/v20190722/model/StartStreamIngestRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeAITranscriptionRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeAIConversationResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserInfoResponse.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/UpdateStreamIngestResponse.h
  include/tencentcloud/trtc/v20190722/model/WebRecordVideoParams.h
  include/tencentcloud/trtc/v20190722/model/McuWaterMarkImage.h
  include/tencentcloud/trtc/v20190722/model/StartPublishCdnStreamResponse.h
  include/tencentcloud/trtc/v20190722/model/TrtcUsage.h
  include/tencentcloud/trtc/v20190722/model/DescribeRelayUsageResponse.h
  include/tencentcloud/trtc/v20190722/model/McuLayout.h
  include/tencentcloud/trtc/v20190722/model/DescribeRecordingUsageRequest.h
  include/tencentcloud/trtc/v20190722/model/StorageFile.h
  include/tencentcloud/trtc/v20190722/model/WaterMark.h
  include/tencentcloud/trtc/v20190722/model/McuStorageParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeScaleInfoResponse.h
  include/tencentcloud/trtc/v20190722/model/MixLayoutParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageResponse.h
  include/tencentcloud/trtc/v20190722/model/McuFeedBackRoomParams.h
  include/tencentcloud/trtc/v20190722/model/AudioEncode.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserRequest.h
  include/tencentcloud/trtc/v20190722/model/McuLayoutParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeUnusualEventRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeCloudRecordingRequest.h
  include/tencentcloud/trtc/v20190722/model/TencentVod.h
  include/tencentcloud/trtc/v20190722/model/McuPassThrough.h
  include/tencentcloud/trtc/v20190722/model/SetUserBlockedByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/TRTCDataResult.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataRequest.h
  include/tencentcloud/trtc/v20190722/model/StartWebRecordResponse.h
  include/tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h
  include/tencentcloud/trtc/v20190722/model/RecognizeConfig.h
  include/tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h
  include/tencentcloud/trtc/v20190722/model/QualityData.h
  include/tencentcloud/trtc/v20190722/model/StopPublishCdnStreamRequest.h
  include/tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h
  include/tencentcloud/trtc/v20190722/model/StopAIConversationResponse.h
  include/tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeAIConversationRequest.h
  include/tencentcloud/trtc/v20190722/model/RowValues.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/StartStreamIngestResponse.h
  include/tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h
  include/tencentcloud/trtc/v20190722/model/VideoParams.h
  include/tencentcloud/trtc/v20190722/model/SetUserBlockedByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageRequest.h
  include/tencentcloud/trtc/v20190722/model/UserInformation.h
  include/tencentcloud/trtc/v20190722/model/DescribeScaleInfoRequest.h
  include/tencentcloud/trtc/v20190722/model/ControlAIConversationRequest.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeUnusualEventResponse.h
  include/tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeCloudRecordingResponse.h
  include/tencentcloud/trtc/v20190722/model/StartAITranscriptionRequest.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomResponse.h
  include/tencentcloud/trtc/v20190722/model/StopStreamIngestResponse.h
  include/tencentcloud/trtc/v20190722/model/MixUserInfo.h
  include/tencentcloud/trtc/v20190722/model/EventMessage.h
  include/tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataRequest.h
  include/tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h
  include/tencentcloud/trtc/v20190722/model/StartWebRecordRequest.h
  include/tencentcloud/trtc/v20190722/model/MaxVideoUser.h
  include/tencentcloud/trtc/v20190722/model/UpdateStreamIngestRequest.h
  include/tencentcloud/trtc/v20190722/model/StopWebRecordResponse.h
  include/tencentcloud/trtc/v20190722/model/STTConfig.h
  include/tencentcloud/trtc/v20190722/model/StopWebRecordRequest.h
  include/tencentcloud/trtc/v20190722/model/McuSeiParams.h
  include/tencentcloud/trtc/v20190722/model/StopAIConversationRequest.h
  include/tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamResponse.h
  include/tencentcloud/trtc/v20190722/model/McuWaterMarkText.h
  include/tencentcloud/trtc/v20190722/model/TranscriptionParams.h
  include/tencentcloud/trtc/v20190722/model/SeriesInfos.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/RecordParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeStreamIngestRequest.h
  include/tencentcloud/trtc/v20190722/model/McuAudioParams.h
  include/tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h
  include/tencentcloud/trtc/v20190722/model/AudioParams.h
  include/tencentcloud/trtc/v20190722/model/StopAITranscriptionResponse.h
  include/tencentcloud/trtc/v20190722/model/WaterMarkTimestamp.h
  include/tencentcloud/trtc/v20190722/model/McuCloudVod.h
  include/tencentcloud/trtc/v20190722/model/SingleSubscribeParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeAITranscriptionResponse.h
  include/tencentcloud/trtc/v20190722/model/McuWaterMarkParams.h
  include/tencentcloud/trtc/v20190722/model/AbnormalExperience.h
  include/tencentcloud/trtc/v20190722/model/UpdateAIConversationRequest.h
  include/tencentcloud/trtc/v20190722/model/RoomState.h
  include/tencentcloud/trtc/v20190722/model/StartAITranscriptionResponse.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserResponse.h
  )

set(trtc_src
  src/v20190722/TrtcClient.cpp
  src/v20190722/model/AgentConfig.cpp
  src/v20190722/model/DescribeRecordingUsageResponse.cpp
  src/v20190722/model/AudioEncodeParams.cpp
  src/v20190722/model/ServerPushText.cpp
  src/v20190722/model/McuRecordParams.cpp
  src/v20190722/model/MixLayout.cpp
  src/v20190722/model/McuVideoParams.cpp
  src/v20190722/model/DescribeTRTCRealTimeScaleDataRequest.cpp
  src/v20190722/model/StartAIConversationResponse.cpp
  src/v20190722/model/StartAIConversationRequest.cpp
  src/v20190722/model/DescribeTRTCMarketScaleDataRequest.cpp
  src/v20190722/model/McuLayoutVolume.cpp
  src/v20190722/model/SetUserBlockedRequest.cpp
  src/v20190722/model/DescribeUserEventRequest.cpp
  src/v20190722/model/SetUserBlockedResponse.cpp
  src/v20190722/model/WaterMarkChar.cpp
  src/v20190722/model/DescribeTrtcRoomUsageResponse.cpp
  src/v20190722/model/StopPublishCdnStreamResponse.cpp
  src/v20190722/model/AbnormalEvent.cpp
  src/v20190722/model/ScaleInfomation.cpp
  src/v20190722/model/AgentParams.cpp
  src/v20190722/model/ControlAIConversationResponse.cpp
  src/v20190722/model/StopAITranscriptionRequest.cpp
  src/v20190722/model/VideoEncodeParams.cpp
  src/v20190722/model/UpdateAIConversationResponse.cpp
  src/v20190722/model/DescribeUserEventResponse.cpp
  src/v20190722/model/VideoEncode.cpp
  src/v20190722/model/DescribeCallDetailInfoRequest.cpp
  src/v20190722/model/DescribeTRTCMarketScaleDataResponse.cpp
  src/v20190722/model/McuTencentVod.cpp
  src/v20190722/model/DescribeWebRecordResponse.cpp
  src/v20190722/model/DescribeUserInfoRequest.cpp
  src/v20190722/model/DescribeRelayUsageRequest.cpp
  src/v20190722/model/CloudStorage.cpp
  src/v20190722/model/DescribeTrtcUsageResponse.cpp
  src/v20190722/model/TimeValue.cpp
  src/v20190722/model/CreateCloudRecordingResponse.cpp
  src/v20190722/model/DescribeWebRecordRequest.cpp
  src/v20190722/model/DescribeTRTCRealTimeScaleDataResponse.cpp
  src/v20190722/model/DescribeRoomInfoRequest.cpp
  src/v20190722/model/StorageParams.cpp
  src/v20190722/model/CloudVod.cpp
  src/v20190722/model/EmulateMobileParams.cpp
  src/v20190722/model/DescribeCallDetailInfoResponse.cpp
  src/v20190722/model/DescribeTRTCRealTimeQualityDataResponse.cpp
  src/v20190722/model/McuCustomCrop.cpp
  src/v20190722/model/DescribeMixTranscodingUsageRequest.cpp
  src/v20190722/model/DescribeStreamIngestResponse.cpp
  src/v20190722/model/MixTranscodeParams.cpp
  src/v20190722/model/StopStreamIngestRequest.cpp
  src/v20190722/model/DescribeTRTCMarketQualityDataResponse.cpp
  src/v20190722/model/SubscribeStreamUserIds.cpp
  src/v20190722/model/WaterMarkImage.cpp
  src/v20190722/model/McuUserInfoParams.cpp
  src/v20190722/model/UserMediaStream.cpp
  src/v20190722/model/EventList.cpp
  src/v20190722/model/DescribeTrtcUsageRequest.cpp
  src/v20190722/model/DescribeRoomInfoResponse.cpp
  src/v20190722/model/DismissRoomRequest.cpp
  src/v20190722/model/StartStreamIngestRequest.cpp
  src/v20190722/model/DescribeAITranscriptionRequest.cpp
  src/v20190722/model/DescribeAIConversationResponse.cpp
  src/v20190722/model/DescribeUserInfoResponse.cpp
  src/v20190722/model/RemoveUserByStrRoomIdResponse.cpp
  src/v20190722/model/UpdateStreamIngestResponse.cpp
  src/v20190722/model/WebRecordVideoParams.cpp
  src/v20190722/model/McuWaterMarkImage.cpp
  src/v20190722/model/StartPublishCdnStreamResponse.cpp
  src/v20190722/model/TrtcUsage.cpp
  src/v20190722/model/DescribeRelayUsageResponse.cpp
  src/v20190722/model/McuLayout.cpp
  src/v20190722/model/DescribeRecordingUsageRequest.cpp
  src/v20190722/model/StorageFile.cpp
  src/v20190722/model/WaterMark.cpp
  src/v20190722/model/McuStorageParams.cpp
  src/v20190722/model/DescribeScaleInfoResponse.cpp
  src/v20190722/model/MixLayoutParams.cpp
  src/v20190722/model/DescribeMixTranscodingUsageResponse.cpp
  src/v20190722/model/McuFeedBackRoomParams.cpp
  src/v20190722/model/AudioEncode.cpp
  src/v20190722/model/RemoveUserRequest.cpp
  src/v20190722/model/McuLayoutParams.cpp
  src/v20190722/model/DescribeUnusualEventRequest.cpp
  src/v20190722/model/DescribeCloudRecordingRequest.cpp
  src/v20190722/model/TencentVod.cpp
  src/v20190722/model/McuPassThrough.cpp
  src/v20190722/model/SetUserBlockedByStrRoomIdResponse.cpp
  src/v20190722/model/TRTCDataResult.cpp
  src/v20190722/model/DescribeTRTCRealTimeQualityDataRequest.cpp
  src/v20190722/model/StartWebRecordResponse.cpp
  src/v20190722/model/CreateCloudRecordingRequest.cpp
  src/v20190722/model/RecognizeConfig.cpp
  src/v20190722/model/DeleteCloudRecordingResponse.cpp
  src/v20190722/model/QualityData.cpp
  src/v20190722/model/StopPublishCdnStreamRequest.cpp
  src/v20190722/model/ModifyCloudRecordingRequest.cpp
  src/v20190722/model/StopAIConversationResponse.cpp
  src/v20190722/model/StartPublishCdnStreamRequest.cpp
  src/v20190722/model/DescribeAIConversationRequest.cpp
  src/v20190722/model/RowValues.cpp
  src/v20190722/model/DismissRoomByStrRoomIdRequest.cpp
  src/v20190722/model/StartStreamIngestResponse.cpp
  src/v20190722/model/DeleteCloudRecordingRequest.cpp
  src/v20190722/model/VideoParams.cpp
  src/v20190722/model/SetUserBlockedByStrRoomIdRequest.cpp
  src/v20190722/model/DescribeTrtcRoomUsageRequest.cpp
  src/v20190722/model/UserInformation.cpp
  src/v20190722/model/DescribeScaleInfoRequest.cpp
  src/v20190722/model/ControlAIConversationRequest.cpp
  src/v20190722/model/DismissRoomByStrRoomIdResponse.cpp
  src/v20190722/model/DescribeUnusualEventResponse.cpp
  src/v20190722/model/ModifyCloudRecordingResponse.cpp
  src/v20190722/model/DescribeCloudRecordingResponse.cpp
  src/v20190722/model/StartAITranscriptionRequest.cpp
  src/v20190722/model/DismissRoomResponse.cpp
  src/v20190722/model/StopStreamIngestResponse.cpp
  src/v20190722/model/MixUserInfo.cpp
  src/v20190722/model/EventMessage.cpp
  src/v20190722/model/DescribeTRTCMarketQualityDataRequest.cpp
  src/v20190722/model/UpdatePublishCdnStreamRequest.cpp
  src/v20190722/model/StartWebRecordRequest.cpp
  src/v20190722/model/MaxVideoUser.cpp
  src/v20190722/model/UpdateStreamIngestRequest.cpp
  src/v20190722/model/StopWebRecordResponse.cpp
  src/v20190722/model/STTConfig.cpp
  src/v20190722/model/StopWebRecordRequest.cpp
  src/v20190722/model/McuSeiParams.cpp
  src/v20190722/model/StopAIConversationRequest.cpp
  src/v20190722/model/UpdatePublishCdnStreamResponse.cpp
  src/v20190722/model/McuWaterMarkText.cpp
  src/v20190722/model/TranscriptionParams.cpp
  src/v20190722/model/SeriesInfos.cpp
  src/v20190722/model/RemoveUserByStrRoomIdRequest.cpp
  src/v20190722/model/RecordParams.cpp
  src/v20190722/model/DescribeStreamIngestRequest.cpp
  src/v20190722/model/McuAudioParams.cpp
  src/v20190722/model/McuPublishCdnParam.cpp
  src/v20190722/model/AudioParams.cpp
  src/v20190722/model/StopAITranscriptionResponse.cpp
  src/v20190722/model/WaterMarkTimestamp.cpp
  src/v20190722/model/McuCloudVod.cpp
  src/v20190722/model/SingleSubscribeParams.cpp
  src/v20190722/model/DescribeAITranscriptionResponse.cpp
  src/v20190722/model/McuWaterMarkParams.cpp
  src/v20190722/model/AbnormalExperience.cpp
  src/v20190722/model/UpdateAIConversationRequest.cpp
  src/v20190722/model/RoomState.cpp
  src/v20190722/model/StartAITranscriptionResponse.cpp
  src/v20190722/model/RemoveUserResponse.cpp
  )

set(trtc_include
    include/tencentcloud/trtc
  )

add_library(trtc ${LIB_TYPE}
  ${trtc_public_header}
  ${trtc_public_header_model}
  ${trtc_src})

set_target_properties(trtc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trtc
  )

target_include_directories(trtc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trtc
  core)

#install(FILES ${trtc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722)
#install(FILES ${trtc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722/model)
install(DIRECTORY ${trtc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trtc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
