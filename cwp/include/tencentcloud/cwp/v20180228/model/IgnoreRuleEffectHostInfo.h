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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information of hosts affected by ignoring detection items
                */
                class IgnoreRuleEffectHostInfo : public AbstractModel
                {
                public:
                    IgnoreRuleEffectHostInfo();
                    ~IgnoreRuleEffectHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Severity level: 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Severity level: 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level: 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Severity level: 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Host tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagList Host tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置Host tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagList Host tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Status: 0: failed; 1: ignore; 3: passed; 5: detecting
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status: 0: failed; 1: ignore; 3: passed; 5: detecting
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status: 0: failed; 1: ignore; 3: passed; 5: detecting
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status: 0: failed; 1: ignore; 3: passed; 5: detecting
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Severity level: 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Host tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Status: 0: failed; 1: ignore; 3: passed; 5: detecting
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_
