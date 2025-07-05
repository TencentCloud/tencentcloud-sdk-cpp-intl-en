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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRULEDETAILREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRULEDETAILREQUEST_H_

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
                * DescribeGatherRuleDetail request structure.
                */
                class DescribeGatherRuleDetailRequest : public AbstractModel
                {
                public:
                    DescribeGatherRuleDetailRequest();
                    ~DescribeGatherRuleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ID of the queried collection rule.
                     * @return Id Specifies the ID of the queried collection rule.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Specifies the ID of the queried collection rule.
                     * @param _id Specifies the ID of the queried collection rule.
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
                     * 获取Month, the current month by default if not provided.
                     * @return Month Month, the current month by default if not provided.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month, the current month by default if not provided.
                     * @param _month Month, the current month by default if not provided.
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
                     * Specifies the ID of the queried collection rule.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Month, the current month by default if not provided.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRULEDETAILREQUEST_H_
