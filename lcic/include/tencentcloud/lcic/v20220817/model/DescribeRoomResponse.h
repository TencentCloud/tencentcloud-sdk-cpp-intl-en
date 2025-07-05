/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeRoom response structure.
                */
                class DescribeRoomResponse : public AbstractModel
                {
                public:
                    DescribeRoomResponse();
                    ~DescribeRoomResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Room name	
                     * @return Name Room name	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Reserved room start time, in UNIX timestamp format	
                     * @return StartTime Reserved room start time, in UNIX timestamp format	
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Reserved room end time, in UNIX timestamp format	
                     * @return EndTime Reserved room end time, in UNIX timestamp format	
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Teacher ID	
                     * @return TeacherId Teacher ID	
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取LCIC SdkAppId	
                     * @return SdkAppId LCIC SdkAppId	
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取 Watch type. Can have the following values: 1 interactive viewing 2 standard viewing
                     * @return AudienceType  Watch type. Can have the following values: 1 interactive viewing 2 standard viewing
                     * 
                     */
                    uint64_t GetAudienceType() const;

                    /**
                     * 判断参数 AudienceType 是否已赋值
                     * @return AudienceType 是否已赋值
                     * 
                     */
                    bool AudienceTypeHasBeenSet() const;

                    /**
                     * 获取Resolution. Valid values: 1: SD; 2: HD; 3: FHD
                     * @return Resolution Resolution. Valid values: 1: SD; 2: HD; 3: FHD
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Maximum number of mic-on users (excluding teachers). Value range: [0, 16]
                     * @return MaxMicNumber Maximum number of mic-on users (excluding teachers). Value range: [0, 16]
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     * 
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取Whether to automatically turn the mic on when the user enters a room. Valid values: 0: No (default value); 1: Yes.
                     * @return AutoMic Whether to automatically turn the mic on when the user enters a room. Valid values: 0: No (default value); 1: Yes.
                     * 
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     * 
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     * @return AudioQuality Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     * 
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     * 
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取The room subtype. Valid values: videodoc: Document + Video; video: Video only.
                     * @return SubType The room subtype. Valid values: videodoc: Document + Video; video: Video only.
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     * @return DisableRecord Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     * 
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取Assistant ID list Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Assistants Assistant ID list Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     * 
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取Recording URL. This parameter exists only after a room is ended. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordUrl Recording URL. This parameter exists only after a room is ended. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取The class status. 0: The class has not started. 1: The class has started. 2: The class ended. 3: The class expired. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The class status. 0: The class has not started. 1: The class has started. 2: The class ended. 3: The class expired. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether the students' consent is required to control their cameras/microphones.
                     * @return EnableDirectControl Whether the students' consent is required to control their cameras/microphones.
                     * 
                     */
                    uint64_t GetEnableDirectControl() const;

                    /**
                     * 判断参数 EnableDirectControl 是否已赋值
                     * @return EnableDirectControl 是否已赋值
                     * 
                     */
                    bool EnableDirectControlHasBeenSet() const;

                    /**
                     * 获取Turn on focus mode. 0 Watch all character audio and video (default) 1 Watch only teachers and teaching assistants
                     * @return InteractionMode Turn on focus mode. 0 Watch all character audio and video (default) 1 Watch only teachers and teaching assistants
                     * 
                     */
                    int64_t GetInteractionMode() const;

                    /**
                     * 判断参数 InteractionMode 是否已赋值
                     * @return InteractionMode 是否已赋值
                     * 
                     */
                    bool InteractionModeHasBeenSet() const;

                    /**
                     * 获取Horizontal and vertical screen. 0: Horizontal screen to open broadcast (default); 1: Vertical screen to open broadcast, currently only support mobile pure video type
                     * @return VideoOrientation Horizontal and vertical screen. 0: Horizontal screen to open broadcast (default); 1: Vertical screen to open broadcast, currently only support mobile pure video type
                     * 
                     */
                    uint64_t GetVideoOrientation() const;

                    /**
                     * 判断参数 VideoOrientation 是否已赋值
                     * @return VideoOrientation 是否已赋值
                     * 
                     */
                    bool VideoOrientationHasBeenSet() const;

                    /**
                     * 获取Whether the room is enabled for grading after the lesson. 0: not enabled 1: enabled
                     * @return IsGradingRequiredPostClass Whether the room is enabled for grading after the lesson. 0: not enabled 1: enabled
                     * 
                     */
                    int64_t GetIsGradingRequiredPostClass() const;

                    /**
                     * 判断参数 IsGradingRequiredPostClass 是否已赋值
                     * @return IsGradingRequiredPostClass 是否已赋值
                     * 
                     */
                    bool IsGradingRequiredPostClassHasBeenSet() const;

                    /**
                     * 获取Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * @return RoomType Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * 
                     */
                    int64_t GetRoomType() const;

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取Recording Duration
                     * @return VideoDuration Recording Duration
                     * 
                     */
                    uint64_t GetVideoDuration() const;

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     * 
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * @return EndDelayTime Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * 
                     */
                    int64_t GetEndDelayTime() const;

                    /**
                     * 判断参数 EndDelayTime 是否已赋值
                     * @return EndDelayTime 是否已赋值
                     * 
                     */
                    bool EndDelayTimeHasBeenSet() const;

                    /**
                     * 获取Live type: 0 regular (default) 1 Simulated Live
                     * @return LiveType Live type: 0 regular (default) 1 Simulated Live
                     * 
                     */
                    uint64_t GetLiveType() const;

                    /**
                     * 判断参数 LiveType 是否已赋值
                     * @return LiveType 是否已赋值
                     * 
                     */
                    bool LiveTypeHasBeenSet() const;

                    /**
                     * 获取Simulated Live link
                     * @return RecordLiveUrl Simulated Live link
                     * 
                     */
                    std::string GetRecordLiveUrl() const;

                    /**
                     * 判断参数 RecordLiveUrl 是否已赋值
                     * @return RecordLiveUrl 是否已赋值
                     * 
                     */
                    bool RecordLiveUrlHasBeenSet() const;

                    /**
                     * 获取Whether to start the lesson automatically: 0 not automatic lesson (default) 1 automatic lesson live_type=1 is valid
                     * @return EnableAutoStart Whether to start the lesson automatically: 0 not automatic lesson (default) 1 automatic lesson live_type=1 is valid
                     * 
                     */
                    uint64_t GetEnableAutoStart() const;

                    /**
                     * 判断参数 EnableAutoStart 是否已赋值
                     * @return EnableAutoStart 是否已赋值
                     * 
                     */
                    bool EnableAutoStartHasBeenSet() const;

                    /**
                     * 获取Recorded file background image, support png, jpg, jpeg, bmp format, does not support transparent channel for the time being
                     * @return RecordBackground Recorded file background image, support png, jpg, jpeg, bmp format, does not support transparent channel for the time being
                     * 
                     */
                    std::string GetRecordBackground() const;

                    /**
                     * 判断参数 RecordBackground 是否已赋值
                     * @return RecordBackground 是否已赋值
                     * 
                     */
                    bool RecordBackgroundHasBeenSet() const;

                    /**
                     * 获取RTMP  stream link
                     * @return RTMPStreamingURL RTMP  stream link
                     * 
                     */
                    std::string GetRTMPStreamingURL() const;

                    /**
                     * 判断参数 RTMPStreamingURL 是否已赋值
                     * @return RTMPStreamingURL 是否已赋值
                     * 
                     */
                    bool RTMPStreamingURLHasBeenSet() const;

                    /**
                     * 获取Record customized scene, only recordlayout=9 this parameter is valid
                     * @return RecordScene Record customized scene, only recordlayout=9 this parameter is valid
                     * 
                     */
                    std::string GetRecordScene() const;

                    /**
                     * 判断参数 RecordScene 是否已赋值
                     * @return RecordScene 是否已赋值
                     * 
                     */
                    bool RecordSceneHasBeenSet() const;

                    /**
                     * 获取Record customized language, only when recordlayout=9, this parameter is valid
                     * @return RecordLang Record customized language, only when recordlayout=9, this parameter is valid
                     * 
                     */
                    std::string GetRecordLang() const;

                    /**
                     * 判断参数 RecordLang 是否已赋值
                     * @return RecordLang 是否已赋值
                     * 
                     */
                    bool RecordLangHasBeenSet() const;

                private:

                    /**
                     * Room name	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Reserved room start time, in UNIX timestamp format	
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Reserved room end time, in UNIX timestamp format	
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Teacher ID	
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * LCIC SdkAppId	
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     *  Watch type. Can have the following values: 1 interactive viewing 2 standard viewing
                     */
                    uint64_t m_audienceType;
                    bool m_audienceTypeHasBeenSet;

                    /**
                     * Resolution. Valid values: 1: SD; 2: HD; 3: FHD
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Maximum number of mic-on users (excluding teachers). Value range: [0, 16]
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * Whether to automatically turn the mic on when the user enters a room. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * The room subtype. Valid values: videodoc: Document + Video; video: Video only.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * Assistant ID list Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * Recording URL. This parameter exists only after a room is ended. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * The class status. 0: The class has not started. 1: The class has started. 2: The class ended. 3: The class expired. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether the students' consent is required to control their cameras/microphones.
                     */
                    uint64_t m_enableDirectControl;
                    bool m_enableDirectControlHasBeenSet;

                    /**
                     * Turn on focus mode. 0 Watch all character audio and video (default) 1 Watch only teachers and teaching assistants
                     */
                    int64_t m_interactionMode;
                    bool m_interactionModeHasBeenSet;

                    /**
                     * Horizontal and vertical screen. 0: Horizontal screen to open broadcast (default); 1: Vertical screen to open broadcast, currently only support mobile pure video type
                     */
                    uint64_t m_videoOrientation;
                    bool m_videoOrientationHasBeenSet;

                    /**
                     * Whether the room is enabled for grading after the lesson. 0: not enabled 1: enabled
                     */
                    int64_t m_isGradingRequiredPostClass;
                    bool m_isGradingRequiredPostClassHasBeenSet;

                    /**
                     * Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     */
                    int64_t m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * Recording Duration
                     */
                    uint64_t m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     */
                    int64_t m_endDelayTime;
                    bool m_endDelayTimeHasBeenSet;

                    /**
                     * Live type: 0 regular (default) 1 Simulated Live
                     */
                    uint64_t m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * Simulated Live link
                     */
                    std::string m_recordLiveUrl;
                    bool m_recordLiveUrlHasBeenSet;

                    /**
                     * Whether to start the lesson automatically: 0 not automatic lesson (default) 1 automatic lesson live_type=1 is valid
                     */
                    uint64_t m_enableAutoStart;
                    bool m_enableAutoStartHasBeenSet;

                    /**
                     * Recorded file background image, support png, jpg, jpeg, bmp format, does not support transparent channel for the time being
                     */
                    std::string m_recordBackground;
                    bool m_recordBackgroundHasBeenSet;

                    /**
                     * RTMP  stream link
                     */
                    std::string m_rTMPStreamingURL;
                    bool m_rTMPStreamingURLHasBeenSet;

                    /**
                     * Record customized scene, only recordlayout=9 this parameter is valid
                     */
                    std::string m_recordScene;
                    bool m_recordSceneHasBeenSet;

                    /**
                     * Record customized language, only when recordlayout=9, this parameter is valid
                     */
                    std::string m_recordLang;
                    bool m_recordLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_
