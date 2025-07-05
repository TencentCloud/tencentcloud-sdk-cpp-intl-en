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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEGATHERRULEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEGATHERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DeleteGatherRule request structure.
                */
                class DeleteGatherRuleRequest : public AbstractModel
                {
                public:
                    DeleteGatherRuleRequest();
                    ~DeleteGatherRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The deleted collection rule ID.
                     * @return RuleId The deleted collection rule ID.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置The deleted collection rule ID.
                     * @param _ruleId The deleted collection rule ID.
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
                     * The deleted collection rule ID.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEGATHERRULEREQUEST_H_
