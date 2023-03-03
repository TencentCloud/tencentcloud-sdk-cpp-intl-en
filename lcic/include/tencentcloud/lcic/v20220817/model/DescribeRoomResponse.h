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
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Reserved room start time, in UNIX timestamp format	
                     * @return StartTime Reserved room start time, in UNIX timestamp format	
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Reserved room end time, in UNIX timestamp format	
                     * @return EndTime Reserved room end time, in UNIX timestamp format	
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Teacher ID	
                     * @return TeacherId Teacher ID	
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取LCIC SdkAppId	
                     * @return SdkAppId LCIC SdkAppId	
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD	
                     * @return Resolution Resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD	
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Maximum number of mic-on users (excluding teachers). Value range: [0, 16]	
                     * @return MaxMicNumber Maximum number of mic-on users (excluding teachers). Value range: [0, 16]	
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取Whether to automatically turn the mic on when the user enters a room. Valid values: `0`: No (default value); `1`: Yes.	
                     * @return AutoMic Whether to automatically turn the mic on when the user enters a room. Valid values: `0`: No (default value); `1`: Yes.	
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.	
                     * @return AudioQuality Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.	
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only.
                     * @return SubType The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only.
                     */
                    std::string GetSubType() const;

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.	
                     * @return DisableRecord Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.	
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取Assistant ID list	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Assistants Assistant ID list	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取Recording URL. This parameter exists only after a room is ended.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordUrl Recording URL. This parameter exists only after a room is ended.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取The class status. `0`: The class has not started. `1`: The class has started. `2`: The class ended. `3`: The class expired.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The class status. `0`: The class has not started. `1`: The class has started. `2`: The class ended. `3`: The class expired.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

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
                     * Resolution. Valid values: `1`: SD; `2`: HD; `3`: FHD	
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Maximum number of mic-on users (excluding teachers). Value range: [0, 16]	
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * Whether to automatically turn the mic on when the user enters a room. Valid values: `0`: No (default value); `1`: Yes.	
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * Whether to enable the high audio quality mode. Valid values: `0`: No (default value); `1`: Yes.	
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * The room subtype. Valid values: `videodoc`: Document + Video; `video`: Video only.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Whether to disable auto recording. Valid values: `0`: No (default); `1`: Yes. If this parameter is `0`, recording will start when the class starts and stops when the class ends.	
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * Assistant ID list	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * Recording URL. This parameter exists only after a room is ended.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * The class status. `0`: The class has not started. `1`: The class has started. `2`: The class ended. `3`: The class expired.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_
