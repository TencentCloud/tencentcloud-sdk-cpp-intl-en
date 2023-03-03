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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The room name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The room name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name The room name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The room start time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime The room start time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The room start time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param StartTime The room start time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The room end time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime The room end time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The room end time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndTime The room end time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resolution The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Resolution The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MaxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubType The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubType The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TeacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取Whether to automatically turn the mic on when a user enters the room. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoMic Whether to automatically turn the mic on when a user enters the room. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置Whether to automatically turn the mic on when a user enters the room. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AutoMic Whether to automatically turn the mic on when a user enters the room. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0`: Yes (default value); `1`: No.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TurnOffMic Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0`: Yes (default value); `1`: No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTurnOffMic() const;

                    /**
                     * 设置Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0`: Yes (default value); `1`: No.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TurnOffMic Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0`: Yes (default value); `1`: No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTurnOffMic(const uint64_t& _turnOffMic);

                    /**
                     * 判断参数 TurnOffMic 是否已赋值
                     * @return TurnOffMic 是否已赋值
                     */
                    bool TurnOffMicHasBeenSet() const;

                    /**
                     * 获取Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioQuality Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AudioQuality Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisableRecord Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DisableRecord Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取The number of RTC users.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RTCAudienceNumber The number of RTC users.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRTCAudienceNumber() const;

                    /**
                     * 设置The number of RTC users.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RTCAudienceNumber The number of RTC users.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber);

                    /**
                     * 判断参数 RTCAudienceNumber 是否已赋值
                     * @return RTCAudienceNumber 是否已赋值
                     */
                    bool RTCAudienceNumberHasBeenSet() const;

                    /**
                     * 获取The audience type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudienceType The audience type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetAudienceType() const;

                    /**
                     * 设置The audience type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AudienceType The audience type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudienceType(const uint64_t& _audienceType);

                    /**
                     * 判断参数 AudienceType 是否已赋值
                     * @return AudienceType 是否已赋值
                     */
                    bool AudienceTypeHasBeenSet() const;

                    /**
                     * 获取The recording layout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordLayout The recording layout.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置The recording layout.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RecordLayout The recording layout.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取The ID of the group to bind.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId The ID of the group to bind.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The ID of the group to bind.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupId The ID of the group to bind.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * The room name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The room start time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The room end time (Unix timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only; `coteaching`: Dual-teacher.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * The user ID of the teacher. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * Whether to automatically turn the mic on when a user enters the room. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * Whether to disconnect communication after audio/video permissions are revoked. Valid values: `0`: Yes (default value); `1`: No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_turnOffMic;
                    bool m_turnOffMicHasBeenSet;

                    /**
                     * Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * The number of RTC users.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rTCAudienceNumber;
                    bool m_rTCAudienceNumberHasBeenSet;

                    /**
                     * The audience type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_audienceType;
                    bool m_audienceTypeHasBeenSet;

                    /**
                     * The recording layout.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * The ID of the group to bind.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_
