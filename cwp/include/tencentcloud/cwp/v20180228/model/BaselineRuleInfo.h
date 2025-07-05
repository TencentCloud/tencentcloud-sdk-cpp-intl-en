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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_

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
                * Baseline detection information
                */
                class BaselineRuleInfo : public AbstractModel
                {
                public:
                    BaselineRuleInfo();
                    ~BaselineRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detection item name
                     * @return RuleName Detection item name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Detection item name
                     * @param _ruleName Detection item name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Detection item description
                     * @return Description Detection item description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Detection item description
                     * @param _description Detection item description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return FixMessage Fixing suggestion
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fixMessage Fixing suggestion
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                    /**
                     * 获取Severity level
                     * @return Level Severity level
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level
                     * @param _level Severity level
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Detection Item ID
                     * @return RuleId Detection Item ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Detection Item ID
                     * @param _ruleId Detection Item ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Last detection Time
                     * @return LastScanAt Last detection Time
                     * 
                     */
                    std::string GetLastScanAt() const;

                    /**
                     * 设置Last detection Time
                     * @param _lastScanAt Last detection Time
                     * 
                     */
                    void SetLastScanAt(const std::string& _lastScanAt);

                    /**
                     * 判断参数 LastScanAt 是否已赋值
                     * @return LastScanAt 是否已赋值
                     * 
                     */
                    bool LastScanAtHasBeenSet() const;

                    /**
                     * 获取Specific reason explanation
                     * @return RuleRemark Specific reason explanation
                     * 
                     */
                    std::string GetRuleRemark() const;

                    /**
                     * 设置Specific reason explanation
                     * @param _ruleRemark Specific reason explanation
                     * 
                     */
                    void SetRuleRemark(const std::string& _ruleRemark);

                    /**
                     * 判断参数 RuleRemark 是否已赋值
                     * @return RuleRemark 是否已赋值
                     * 
                     */
                    bool RuleRemarkHasBeenSet() const;

                    /**
                     * 获取Unique UUID
                     * @return Uuid Unique UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Unique UUID
                     * @param _uuid Unique UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Unique event ID
                     * @return EventId Unique event ID
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Unique event ID
                     * @param _eventId Unique event ID
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Detection item name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Detection item description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * Severity level
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Detection Item ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Last detection Time
                     */
                    std::string m_lastScanAt;
                    bool m_lastScanAtHasBeenSet;

                    /**
                     * Specific reason explanation
                     */
                    std::string m_ruleRemark;
                    bool m_ruleRemarkHasBeenSet;

                    /**
                     * Unique UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Unique event ID
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_
