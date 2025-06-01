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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_

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
                * ModifyAllocationRule request structure.
                */
                class ModifyAllocationRuleRequest : public AbstractModel
                {
                public:
                    ModifyAllocationRuleRequest();
                    ~ModifyAllocationRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The edited sharing rule ID.
                     * @return RuleId The edited sharing rule ID.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置The edited sharing rule ID.
                     * @param _ruleId The edited sharing rule ID.
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
                     * 获取Edited sharing rule name.
                     * @return Name Edited sharing rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Edited sharing rule name.
                     * @param _name Edited sharing rule name.
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
                     * 获取Public sharing policy types, enumeration values are as follows: 1 - custom sharing proportion 2 - proportional allocation 3 - allocation by proportion.
                     * @return Type Public sharing policy types, enumeration values are as follows: 1 - custom sharing proportion 2 - proportional allocation 3 - allocation by proportion.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Public sharing policy types, enumeration values are as follows: 1 - custom sharing proportion 2 - proportional allocation 3 - allocation by proportion.
                     * @param _type Public sharing policy types, enumeration values are as follows: 1 - custom sharing proportion 2 - proportional allocation 3 - allocation by proportion.
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
                     * 获取Edited share rules expression.
                     * @return RuleDetail Edited share rules expression.
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置Edited share rules expression.
                     * @param _ruleDetail Edited share rules expression.
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
                     * 获取Edited sharing proportion expression.
                     * @return RatioDetail Edited sharing proportion expression.
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 设置Edited sharing proportion expression.
                     * @param _ratioDetail Edited sharing proportion expression.
                     * 
                     */
                    void SetRatioDetail(const std::vector<AllocationRationExpression>& _ratioDetail);

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

                    /**
                     * 获取Month, which is the current month by default if not provided.
                     * @return Month Month, which is the current month by default if not provided.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month, which is the current month by default if not provided.
                     * @param _month Month, which is the current month by default if not provided.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * The edited sharing rule ID.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Edited sharing rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Public sharing policy types, enumeration values are as follows: 1 - custom sharing proportion 2 - proportional allocation 3 - allocation by proportion.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Edited share rules expression.
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * Edited sharing proportion expression.
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

                    /**
                     * Month, which is the current month by default if not provided.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_
