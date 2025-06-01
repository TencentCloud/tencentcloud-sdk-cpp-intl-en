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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationUnit.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Overview of sharing rules.
                */
                class AllocationRuleOverview : public AbstractModel
                {
                public:
                    AllocationRuleOverview();
                    ~AllocationRuleOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sharing rule ID.
                     * @return RuleId Sharing rule ID.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Sharing rule ID.
                     * @param _ruleId Sharing rule ID.
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
                     * 获取Sharing rule name.
                     * @return RuleName Sharing rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Sharing rule name.
                     * @param _ruleName Sharing rule name.
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
                     * 获取Public area policy type.
Enumeration value.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * @return Type Public area policy type.
Enumeration value.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Public area policy type.
Enumeration value.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * @param _type Public area policy type.
Enumeration value.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Last update time of the sharing rules.
                     * @return UpdateTime Last update time of the sharing rules.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time of the sharing rules.
                     * @param _updateTime Last update time of the sharing rules.
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
                     * 获取Overview of cost allocation units.
                     * @return AllocationNode Overview of cost allocation units.
                     * 
                     */
                    std::vector<AllocationUnit> GetAllocationNode() const;

                    /**
                     * 设置Overview of cost allocation units.
                     * @param _allocationNode Overview of cost allocation units.
                     * 
                     */
                    void SetAllocationNode(const std::vector<AllocationUnit>& _allocationNode);

                    /**
                     * 判断参数 AllocationNode 是否已赋值
                     * @return AllocationNode 是否已赋值
                     * 
                     */
                    bool AllocationNodeHasBeenSet() const;

                private:

                    /**
                     * Sharing rule ID.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Sharing rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Public area policy type.
Enumeration value.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Last update time of the sharing rules.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Overview of cost allocation units.
                     */
                    std::vector<AllocationUnit> m_allocationNode;
                    bool m_allocationNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_
