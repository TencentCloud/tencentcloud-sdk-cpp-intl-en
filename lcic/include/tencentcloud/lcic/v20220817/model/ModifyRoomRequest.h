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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_

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
                * ModifyRoom request structure.
                */
                class ModifyRoomRequest : public AbstractModel
                {
                public:
                    ModifyRoomRequest();
                    ~ModifyRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The room ID.
                     * @return RoomId The room ID.
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
                     * @param RoomId The room ID.
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param SdkAppId The SDKAppID assigned by LCIC.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The room start time (Unix timestamp).
                     * @return StartTime The room start time (Unix timestamp).
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The room start time (Unix timestamp).
                     * @param StartTime The room start time (Unix timestamp).
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The room end time (Unix timestamp).
                     * @return EndTime The room end time (Unix timestamp).
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The room end time (Unix timestamp).
                     * @param EndTime The room end time (Unix timestamp).
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * @return TeacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher. User IDs are returned by the user registration APIs.
                     * @param TeacherId The user ID of the teacher. User IDs are returned by the user registration APIs.
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取The room name.
                     * @return Name The room name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The room name.
                     * @param Name The room name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The resolution. Valid values: 1: SD; 2: HD; 3: FHD.
                     * @return Resolution The resolution. Valid values: 1: SD; 2: HD; 3: FHD.
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置The resolution. Valid values: 1: SD; 2: HD; 3: FHD.
                     * @param Resolution The resolution. Valid values: 1: SD; 2: HD; 3: FHD.
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * @return MaxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     * @param MaxMicNumber The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取Whether to automatically turn the mic on when a user enters the room. Valid values: 0: No (default value); 1: Yes.
                     * @return AutoMic Whether to automatically turn the mic on when a user enters the room. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置Whether to automatically turn the mic on when a user enters the room. Valid values: 0: No (default value); 1: Yes.
                     * @param AutoMic Whether to automatically turn the mic on when a user enters the room. Valid values: 0: No (default value); 1: Yes.
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     * @return AudioQuality Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     * @param AudioQuality Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取The room subtype. Valid values: videodoc: Document + Video; video: Video only; coteaching: Dual-teacher.
                     * @return SubType The room subtype. Valid values: videodoc: Document + Video; video: Video only; coteaching: Dual-teacher.
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置The room subtype. Valid values: videodoc: Document + Video; video: Video only; coteaching: Dual-teacher.
                     * @param SubType The room subtype. Valid values: videodoc: Document + Video; video: Video only; coteaching: Dual-teacher.
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     * @return DisableRecord Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     * @param DisableRecord Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * @return Assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     * @param Assistants The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取The ID of the group to bind.
                     * @return GroupId The ID of the group to bind.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The ID of the group to bind.
                     * @param GroupId The ID of the group to bind.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

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
                     * The user ID of the teacher. User IDs are returned by the user registration APIs.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * The room name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The resolution. Valid values: 1: SD; 2: HD; 3: FHD.
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The maximum number of mic-on users (excluding the teacher). Value range: 0-16.
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * Whether to automatically turn the mic on when a user enters the room. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * Whether to enable the high audio quality mode. Valid values: 0: No (default value); 1: Yes.
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * The room subtype. Valid values: videodoc: Document + Video; video: Video only; coteaching: Dual-teacher.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Whether to disable auto recording. Valid values: 0: No (default); 1: Yes. If this parameter is 0, recording will start when the class starts and stops when the class ends.
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * The user IDs of the teacher assistants. User IDs are returned by the user registration APIs.
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * The ID of the group to bind.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
