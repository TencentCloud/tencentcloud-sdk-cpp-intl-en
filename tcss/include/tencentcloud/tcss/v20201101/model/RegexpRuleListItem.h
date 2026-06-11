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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULELISTITEM_H_

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
                * Regular Expression Rule List Item
                */
                class RegexpRuleListItem : public AbstractModel
                {
                public:
                    RegexpRuleListItem();
                    ~RegexpRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleID Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleID Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleName Rule name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of Effective Expressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectiveExpression Number of Effective Expressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEffectiveExpression() const;

                    /**
                     * 设置Number of Effective Expressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectiveExpression Number of Effective Expressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectiveExpression(const uint64_t& _effectiveExpression);

                    /**
                     * 判断参数 EffectiveExpression 是否已赋值
                     * @return EffectiveExpression 是否已赋值
                     * 
                     */
                    bool EffectiveExpressionHasBeenSet() const;

                    /**
                     * 获取Latest edit time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Latest edit time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest edit time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Latest edit time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取most recently edited account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperatorUin most recently edited account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置most recently edited account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operatorUin most recently edited account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Number of Effective Expressions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_effectiveExpression;
                    bool m_effectiveExpressionHasBeenSet;

                    /**
                     * Latest edit time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * most recently edited account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULELISTITEM_H_
