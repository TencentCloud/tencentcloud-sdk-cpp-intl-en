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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETPLAN_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Budget computation for complex data type
                */
                class BudgetPlan : public AbstractModel
                {
                public:
                    BudgetPlan();
                    ~BudgetPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Frontend page date display
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateDesc Frontend page date display
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateDesc() const;

                    /**
                     * 设置Frontend page date display
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateDesc Frontend page date display
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDateDesc(const std::string& _dateDesc);

                    /**
                     * 判断参数 DateDesc 是否已赋值
                     * @return DateDesc 是否已赋值
                     * 
                     */
                    bool DateDescHasBeenSet() const;

                    /**
                     * 获取Budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quota Budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuota() const;

                    /**
                     * 设置Budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quota Budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuota(const std::string& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * Frontend page date display
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateDesc;
                    bool m_dateDescHasBeenSet;

                    /**
                     * Budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETPLAN_H_
