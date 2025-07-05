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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IncreasePlanQuota request structure.
                */
                class IncreasePlanQuotaRequest : public AbstractModel
                {
                public:
                    IncreasePlanQuotaRequest();
                    ~IncreasePlanQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * @return PlanId Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * @param _planId Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取The types of new plan quotas available include:<li> site: Number of sites;</li><li> precise_access_control_rule: the number of rules under "Web Protection - Custom Rules - Precision Matching Policy";</li><li> rate_limiting_rule: the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module". </li>
                     * @return QuotaType The types of new plan quotas available include:<li> site: Number of sites;</li><li> precise_access_control_rule: the number of rules under "Web Protection - Custom Rules - Precision Matching Policy";</li><li> rate_limiting_rule: the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module". </li>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置The types of new plan quotas available include:<li> site: Number of sites;</li><li> precise_access_control_rule: the number of rules under "Web Protection - Custom Rules - Precision Matching Policy";</li><li> rate_limiting_rule: the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module". </li>
                     * @param _quotaType The types of new plan quotas available include:<li> site: Number of sites;</li><li> precise_access_control_rule: the number of rules under "Web Protection - Custom Rules - Precision Matching Policy";</li><li> rate_limiting_rule: the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module". </li>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取Number of new quotas. The maximum number of quotas that can be added at one time is 100.
                     * @return QuotaNumber Number of new quotas. The maximum number of quotas that can be added at one time is 100.
                     * 
                     */
                    int64_t GetQuotaNumber() const;

                    /**
                     * 设置Number of new quotas. The maximum number of quotas that can be added at one time is 100.
                     * @param _quotaNumber Number of new quotas. The maximum number of quotas that can be added at one time is 100.
                     * 
                     */
                    void SetQuotaNumber(const int64_t& _quotaNumber);

                    /**
                     * 判断参数 QuotaNumber 是否已赋值
                     * @return QuotaNumber 是否已赋值
                     * 
                     */
                    bool QuotaNumberHasBeenSet() const;

                private:

                    /**
                     * Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * The types of new plan quotas available include:<li> site: Number of sites;</li><li> precise_access_control_rule: the number of rules under "Web Protection - Custom Rules - Precision Matching Policy";</li><li> rate_limiting_rule: the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module". </li>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * Number of new quotas. The maximum number of quotas that can be added at one time is 100.
                     */
                    int64_t m_quotaNumber;
                    bool m_quotaNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_
