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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>
#include <tencentcloud/billing/v20180709/model/AllocationRationExpression.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * List of sharing rules.
                */
                class AllocationRulesSummary : public AbstractModel
                {
                public:
                    AllocationRulesSummary();
                    ~AllocationRulesSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Add new sharing rule name.
                     * @return Name Add new sharing rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Add new sharing rule name.
                     * @param _name Add new sharing rule name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specifies the sharing rule policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation.
3 - allocation by proportion.
                     * @return Type Specifies the sharing rule policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation.
3 - allocation by proportion.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Specifies the sharing rule policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation.
3 - allocation by proportion.
                     * @param _type Specifies the sharing rule policy type. the enumeration values are as follows:.
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
                     * 获取Sharing rule expression.
                     * @return RuleDetail Sharing rule expression.
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置Sharing rule expression.
                     * @param _ruleDetail Sharing rule expression.
                     * 
                     */
                    void SetRuleDetail(const AllocationRuleExpression& _ruleDetail);

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                    /**
                     * 获取Sharing proportion expression, allocation by proportion not passed.
                     * @return RatioDetail Sharing proportion expression, allocation by proportion not passed.
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 设置Sharing proportion expression, allocation by proportion not passed.
                     * @param _ratioDetail Sharing proportion expression, allocation by proportion not passed.
                     * 
                     */
                    void SetRatioDetail(const std::vector<AllocationRationExpression>& _ratioDetail);

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

                private:

                    /**
                     * Add new sharing rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the sharing rule policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation.
3 - allocation by proportion.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sharing rule expression.
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * Sharing proportion expression, allocation by proportion not passed.
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_
