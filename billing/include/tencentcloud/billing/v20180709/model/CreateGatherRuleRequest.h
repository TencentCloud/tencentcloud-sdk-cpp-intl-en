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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEGATHERRULEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEGATHERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/GatherRuleSummary.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateGatherRule request structure.
                */
                class CreateGatherRuleRequest : public AbstractModel
                {
                public:
                    CreateGatherRuleRequest();
                    ~CreateGatherRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cost allocation unit ID that the rule belongs to.
                     * @return Id Cost allocation unit ID that the rule belongs to.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Cost allocation unit ID that the rule belongs to.
                     * @param _id Cost allocation unit ID that the rule belongs to.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Collection rule details.
                     * @return RuleList Collection rule details.
                     * 
                     */
                    GatherRuleSummary GetRuleList() const;

                    /**
                     * 设置Collection rule details.
                     * @param _ruleList Collection rule details.
                     * 
                     */
                    void SetRuleList(const GatherRuleSummary& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

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
                     * Cost allocation unit ID that the rule belongs to.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Collection rule details.
                     */
                    GatherRuleSummary m_ruleList;
                    bool m_ruleListHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEGATHERRULEREQUEST_H_
