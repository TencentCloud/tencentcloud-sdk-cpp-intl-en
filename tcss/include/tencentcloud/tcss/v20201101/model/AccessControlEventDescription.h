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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Description of the container access control event at runtime
                */
                class AccessControlEventDescription : public AbstractModel
                {
                public:
                    AccessControlEventDescription();
                    ~AccessControlEventDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event rule
                     * @return Description Event rule
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event rule
                     * @param _description Event rule
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
                     * 获取Solution
                     * @return Solution Solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param _solution Solution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Details of the hit rule
                     * @return MatchRule Details of the hit rule
                     * 
                     */
                    AccessControlChildRuleInfo GetMatchRule() const;

                    /**
                     * 设置Details of the hit rule
                     * @param _matchRule Details of the hit rule
                     * 
                     */
                    void SetMatchRule(const AccessControlChildRuleInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取Name of the hit rule
                     * @return RuleName Name of the hit rule
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the hit rule
                     * @param _ruleName Name of the hit rule
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
                     * 获取ID of the hit rule
                     * @return RuleId ID of the hit rule
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置ID of the hit rule
                     * @param _ruleId ID of the hit rule
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * Event rule
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Event remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Details of the hit rule
                     */
                    AccessControlChildRuleInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * Name of the hit rule
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ID of the hit rule
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_
