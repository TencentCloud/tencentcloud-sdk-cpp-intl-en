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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAllocationRuleDetail response structure.
                */
                class DescribeAllocationRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeAllocationRuleDetailResponse();
                    ~DescribeAllocationRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Sharing rule ID.
                     * @return Id Sharing rule ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Sharing rule ownership UIN.
                     * @return Uin Sharing rule ownership UIN.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sharing rule name.
                     * @return Name Sharing rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specifies the public area policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * @return Type Specifies the public area policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Public sharing rule expression.
                     * @return RuleDetail Public sharing rule expression.
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                    /**
                     * 获取Sharing proportion expression. returns when Type is 1 or 2.
                     * @return RatioDetail Sharing proportion expression. returns when Type is 1 or 2.
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

                private:

                    /**
                     * Sharing rule ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Sharing rule ownership UIN.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sharing rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the public area policy type. the enumeration values are as follows:.
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Public sharing rule expression.
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * Sharing proportion expression. returns when Type is 1 or 2.
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_
