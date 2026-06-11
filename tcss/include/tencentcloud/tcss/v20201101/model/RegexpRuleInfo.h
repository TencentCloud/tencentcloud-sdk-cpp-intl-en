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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/WhiteListRegexpExpressionInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Regular Expression Rule Details
                */
                class RegexpRuleInfo : public AbstractModel
                {
                public:
                    RegexpRuleInfo();
                    ~RegexpRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Regular Expression List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpressionList Regular Expression List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WhiteListRegexpExpressionInfo> GetExpressionList() const;

                    /**
                     * 设置Regular Expression List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expressionList Regular Expression List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpressionList(const std::vector<WhiteListRegexpExpressionInfo>& _expressionList);

                    /**
                     * 判断参数 ExpressionList 是否已赋值
                     * @return ExpressionList 是否已赋值
                     * 
                     */
                    bool ExpressionListHasBeenSet() const;

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
                     * 获取Latest update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Latest update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Latest update time
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
                     * 获取Latest Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperatorUIN Latest Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperatorUIN() const;

                    /**
                     * 设置Latest Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operatorUIN Latest Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperatorUIN(const std::string& _operatorUIN);

                    /**
                     * 判断参数 OperatorUIN 是否已赋值
                     * @return OperatorUIN 是否已赋值
                     * 
                     */
                    bool OperatorUINHasBeenSet() const;

                private:

                    /**
                     * Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Enabled status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Regular Expression List
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WhiteListRegexpExpressionInfo> m_expressionList;
                    bool m_expressionListHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Latest update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Latest Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operatorUIN;
                    bool m_operatorUINHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_
