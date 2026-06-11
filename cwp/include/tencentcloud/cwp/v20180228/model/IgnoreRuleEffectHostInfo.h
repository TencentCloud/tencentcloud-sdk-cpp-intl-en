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
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
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
                     * 获取Severity level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * @return Level Severity level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * @param _level Severity level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
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
                     * @return TagList Host tag array
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置Host tag array
                     * @param _tagList Host tag array
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
                     * 获取Status: 0: failed; 1: ignore; 3: approved; 5: detecting
                     * @return Status Status: 0: failed; 1: ignore; 3: approved; 5: detecting
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status: 0: failed; 1: ignore; 3: approved; 5: detecting
                     * @param _status Status: 0: failed; 1: ignore; 3: approved; 5: detecting
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
                     * 获取Last detection time
                     * @return LastScanTime Last detection time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last detection time
                     * @param _lastScanTime Last detection time
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
                     * @return EventId Event ID
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
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
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
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
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Severity level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Host tag array
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Status: 0: failed; 1: ignore; 3: approved; 5: detecting
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_
