/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The information of the room to create.
Used by actions: BatchCreateRoom.
                */
                class RoomInfo : public AbstractModel
                {
                public:
                    RoomInfo();
                    ~RoomInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The room name.
                     * @return Name The room name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The room name.
                     * @param _name The room name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The room start time (Unix timestamp).
                     * @return StartTime The room start time (Unix timestamp).
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The room start time (Unix timestamp).
                     * @param _startTime The room start time (Unix timestamp).
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The room end time (Unix timestamp).
                     * @return EndTime The room end time (Unix timestamp).
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The room end time (Unix timestamp).
                     * @param _endTime The room end time (Unix timestamp).
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
                     * @return Resolution The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
                     * @param _resolution The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
                     * 
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * @return MaxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * @param _maxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * 
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     * 
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
                     * @return SubType The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
                     * @param _subType The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * @return TeacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * @param _teacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取Whether to automatically turn the mic on when a user enters the room. Valid values: `0` (default): No; `1`: Yes.
                     * @return AutoMic Whether to automatically turn the mic on when a user enters the room. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置Whether to automatically turn the mic on when a user enters the room. Valid values: `0` (default): No; `1`: Yes.
                     * @param _autoMic Whether to automatically turn the mic on when a user enters the room. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     * 
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0` (default): Yes; `1`: No.
                     * @return TurnOffMic Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0` (default): Yes; `1`: No.
                     * 
                     */
                    uint64_t GetTurnOffMic() const;

                    /**
                     * 设置Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0` (default): Yes; `1`: No.
                     * @param _turnOffMic Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0` (default): Yes; `1`: No.
                     * 
                     */
                    void SetTurnOffMic(const uint64_t& _turnOffMic);

                    /**
                     * 判断参数 TurnOffMic 是否已赋值
                     * @return TurnOffMic 是否已赋值
                     * 
                     */
                    bool TurnOffMicHasBeenSet() const;

                    /**
                     * 获取Whether to enable the high audio quality mode. Valid values: `0` (default): No; `1`: Yes.
                     * @return AudioQuality Whether to enable the high audio quality mode. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置Whether to enable the high audio quality mode. Valid values: `0` (default): No; `1`: Yes.
                     * @param _audioQuality Whether to enable the high audio quality mode. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     * 
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取Whether to disable auto recording. Valid values: `0` (default): No; `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
                     * @return DisableRecord Whether to disable auto recording. Valid values: `0` (default): No; `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
                     * 
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置Whether to disable auto recording. Valid values: `0` (default): No; `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
                     * @param _disableRecord Whether to disable auto recording. Valid values: `0` (default): No; `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
                     * 
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * @return Assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * 
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * @param _assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * 
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     * 
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取The number of RTC users.
                     * @return RTCAudienceNumber The number of RTC users.
                     * 
                     */
                    uint64_t GetRTCAudienceNumber() const;

                    /**
                     * 设置The number of RTC users.
                     * @param _rTCAudienceNumber The number of RTC users.
                     * 
                     */
                    void SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber);

                    /**
                     * 判断参数 RTCAudienceNumber 是否已赋值
                     * @return RTCAudienceNumber 是否已赋值
                     * 
                     */
                    bool RTCAudienceNumberHasBeenSet() const;

                    /**
                     * 获取The audience type.
                     * @return AudienceType The audience type.
                     * 
                     */
                    uint64_t GetAudienceType() const;

                    /**
                     * 设置The audience type.
                     * @param _audienceType The audience type.
                     * 
                     */
                    void SetAudienceType(const uint64_t& _audienceType);

                    /**
                     * 判断参数 AudienceType 是否已赋值
                     * @return AudienceType 是否已赋值
                     * 
                     */
                    bool AudienceTypeHasBeenSet() const;

                    /**
                     * 获取The recording layout.
                     * @return RecordLayout The recording layout.
                     * 
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置The recording layout.
                     * @param _recordLayout The recording layout.
                     * 
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     * 
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取The ID of the group to bind. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId The ID of the group to bind. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The ID of the group to bind. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupId The ID of the group to bind. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

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
                     * 设置Whether the students' consent is required to control their cameras/microphones.
                     * @param _enableDirectControl Whether the students' consent is required to control their cameras/microphones.
                     * 
                     */
                    void SetEnableDirectControl(const uint64_t& _enableDirectControl);

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
                     * 设置Turn on focus mode. 0 Watch all character audio and video (default) 1 Watch only teachers and teaching assistants
                     * @param _interactionMode Turn on focus mode. 0 Watch all character audio and video (default) 1 Watch only teachers and teaching assistants
                     * 
                     */
                    void SetInteractionMode(const int64_t& _interactionMode);

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
                    int64_t GetVideoOrientation() const;

                    /**
                     * 设置Horizontal and vertical screen. 0: Horizontal screen to open broadcast (default); 1: Vertical screen to open broadcast, currently only support mobile pure video type
                     * @param _videoOrientation Horizontal and vertical screen. 0: Horizontal screen to open broadcast (default); 1: Vertical screen to open broadcast, currently only support mobile pure video type
                     * 
                     */
                    void SetVideoOrientation(const int64_t& _videoOrientation);

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
                     * 设置Whether the room is enabled for grading after the lesson. 0: not enabled 1: enabled
                     * @param _isGradingRequiredPostClass Whether the room is enabled for grading after the lesson. 0: not enabled 1: enabled
                     * 
                     */
                    void SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass);

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
                     * 设置Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * @param _roomType Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * 
                     */
                    void SetRoomType(const int64_t& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * @return EndDelayTime Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * 
                     */
                    int64_t GetEndDelayTime() const;

                    /**
                     * 设置Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * @param _endDelayTime Drag class time: unit minutes, 0 is unlimited (default), -1 is can't drag the class, greater than 0 is the time of dragging the class, the maximum value of 120 minutes
                     * 
                     */
                    void SetEndDelayTime(const int64_t& _endDelayTime);

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
                     * 设置Live type: 0 regular (default) 1 Simulated Live
                     * @param _liveType Live type: 0 regular (default) 1 Simulated Live
                     * 
                     */
                    void SetLiveType(const uint64_t& _liveType);

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
                     * 设置Simulated Live link
                     * @param _recordLiveUrl Simulated Live link
                     * 
                     */
                    void SetRecordLiveUrl(const std::string& _recordLiveUrl);

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
                     * 设置Whether to start the lesson automatically: 0 not automatic lesson (default) 1 automatic lesson live_type=1 is valid
                     * @param _enableAutoStart Whether to start the lesson automatically: 0 not automatic lesson (default) 1 automatic lesson live_type=1 is valid
                     * 
                     */
                    void SetEnableAutoStart(const uint64_t& _enableAutoStart);

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
                     * 设置Recorded file background image, support png, jpg, jpeg, bmp format, does not support transparent channel for the time being
                     * @param _recordBackground Recorded file background image, support png, jpg, jpeg, bmp format, does not support transparent channel for the time being
                     * 
                     */
                    void SetRecordBackground(const std::string& _recordBackground);

                    /**
                     * 判断参数 RecordBackground 是否已赋值
                     * @return RecordBackground 是否已赋值
                     * 
                     */
                    bool RecordBackgroundHasBeenSet() const;

                    /**
                     * 获取Record customized scene, only recordlayout=9 this parameter is valid, the data content for the user-defined scene parameters, data format for the json key-value pairs, where the key-value pairs of the value for the string type.
                     * @return RecordScene Record customized scene, only recordlayout=9 this parameter is valid, the data content for the user-defined scene parameters, data format for the json key-value pairs, where the key-value pairs of the value for the string type.
                     * 
                     */
                    std::string GetRecordScene() const;

                    /**
                     * 设置Record customized scene, only recordlayout=9 this parameter is valid, the data content for the user-defined scene parameters, data format for the json key-value pairs, where the key-value pairs of the value for the string type.
                     * @param _recordScene Record customized scene, only recordlayout=9 this parameter is valid, the data content for the user-defined scene parameters, data format for the json key-value pairs, where the key-value pairs of the value for the string type.
                     * 
                     */
                    void SetRecordScene(const std::string& _recordScene);

                    /**
                     * 判断参数 RecordScene 是否已赋值
                     * @return RecordScene 是否已赋值
                     * 
                     */
                    bool RecordSceneHasBeenSet() const;

                    /**
                     * 获取Record customized language, only when recordlayout=9, this parameter is valid.
                     * @return RecordLang Record customized language, only when recordlayout=9, this parameter is valid.
                     * @deprecated
                     */
                    std::string GetRecordLang() const;

                    /**
                     * 设置Record customized language, only when recordlayout=9, this parameter is valid.
                     * @param _recordLang Record customized language, only when recordlayout=9, this parameter is valid.
                     * @deprecated
                     */
                    void SetRecordLang(const std::string& _recordLang);

                    /**
                     * 判断参数 RecordLang 是否已赋值
                     * @return RecordLang 是否已赋值
                     * @deprecated
                     */
                    bool RecordLangHasBeenSet() const;

                private:

                    /**
                     * The room name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The room start time (Unix timestamp).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The room end time (Unix timestamp).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * The user ID of the teacher. User IDs are returned by the user registration APIs.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * Whether to automatically turn the mic on when a user enters the room. Valid values: `0` (default): No; `1`: Yes.
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0` (default): Yes; `1`: No.
                     */
                    uint64_t m_turnOffMic;
                    bool m_turnOffMicHasBeenSet;

                    /**
                     * Whether to enable the high audio quality mode. Valid values: `0` (default): No; `1`: Yes.
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * Whether to disable auto recording. Valid values: `0` (default): No; `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * The number of RTC users.
                     */
                    uint64_t m_rTCAudienceNumber;
                    bool m_rTCAudienceNumberHasBeenSet;

                    /**
                     * The audience type.
                     */
                    uint64_t m_audienceType;
                    bool m_audienceTypeHasBeenSet;

                    /**
                     * The recording layout.
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * The ID of the group to bind. Note: This field may return null, indicating that no valid values can be obtained.
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
                    int64_t m_videoOrientation;
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
                     * Record customized scene, only recordlayout=9 this parameter is valid, the data content for the user-defined scene parameters, data format for the json key-value pairs, where the key-value pairs of the value for the string type.
                     */
                    std::string m_recordScene;
                    bool m_recordSceneHasBeenSet;

                    /**
                     * Record customized language, only when recordlayout=9, this parameter is valid.
                     */
                    std::string m_recordLang;
                    bool m_recordLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_
