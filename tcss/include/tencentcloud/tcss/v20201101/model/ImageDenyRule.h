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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image blocking rule
                */
                class ImageDenyRule : public AbstractModel
                {
                public:
                    ImageDenyRule();
                    ~ImageDenyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleID Rule ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * @return RuleType Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * @param _ruleType Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Number of Effective Images
                     * @return EffectImageCount Number of Effective Images
                     * 
                     */
                    int64_t GetEffectImageCount() const;

                    /**
                     * 设置Number of Effective Images
                     * @param _effectImageCount Number of Effective Images
                     * 
                     */
                    void SetEffectImageCount(const int64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * @return IsEffectAllImage Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * 
                     */
                    int64_t GetIsEffectAllImage() const;

                    /**
                     * 设置Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * @param _isEffectAllImage Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * 
                     */
                    void SetIsEffectAllImage(const int64_t& _isEffectAllImage);

                    /**
                     * 判断参数 IsEffectAllImage 是否已赋值
                     * @return IsEffectAllImage 是否已赋值
                     * 
                     */
                    bool IsEffectAllImageHasBeenSet() const;

                    /**
                     * 获取Rule Effective Start Time
                     * @return EffectTime Rule Effective Start Time
                     * 
                     */
                    std::string GetEffectTime() const;

                    /**
                     * 设置Rule Effective Start Time
                     * @param _effectTime Rule Effective Start Time
                     * 
                     */
                    void SetEffectTime(const std::string& _effectTime);

                    /**
                     * 判断参数 EffectTime 是否已赋值
                     * @return EffectTime 是否已赋值
                     * 
                     */
                    bool EffectTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return OperationUin Operator
                     * 
                     */
                    std::string GetOperationUin() const;

                    /**
                     * 设置Operator
                     * @param _operationUin Operator
                     * 
                     */
                    void SetOperationUin(const std::string& _operationUin);

                    /**
                     * 判断参数 OperationUin 是否已赋值
                     * @return OperationUin 是否已赋值
                     * 
                     */
                    bool OperationUinHasBeenSet() const;

                    /**
                     * 获取Enabled status
                     * @return Status Enabled status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Enabled status
                     * @param _status Enabled status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * @return EffectStatus Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * 
                     */
                    std::string GetEffectStatus() const;

                    /**
                     * 设置Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * @param _effectStatus Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * 
                     */
                    void SetEffectStatus(const std::string& _effectStatus);

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return ID Rule ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Rule ID
                     * @param _iD Rule ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Number of Effective Images
                     */
                    int64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     */
                    int64_t m_isEffectAllImage;
                    bool m_isEffectAllImageHasBeenSet;

                    /**
                     * Rule Effective Start Time
                     */
                    std::string m_effectTime;
                    bool m_effectTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operationUin;
                    bool m_operationUinHasBeenSet;

                    /**
                     * Enabled status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     */
                    std::string m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * Rule ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_
