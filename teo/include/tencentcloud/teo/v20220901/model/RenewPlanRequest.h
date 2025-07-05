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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_

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
                * RenewPlan request structure.
                */
                class RenewPlanRequest : public AbstractModel
                {
                public:
                    RenewPlanRequest();
                    ~RenewPlanRequest() = default;
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
                     * 获取Renewal plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Renewal plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Renewal plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param _period Renewal plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> If this field is not specified, the default value 'false' will be used.
                     * @return AutoUseVoucher Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> If this field is not specified, the default value 'false' will be used.
                     * 
                     */
                    std::string GetAutoUseVoucher() const;

                    /**
                     * 设置Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> If this field is not specified, the default value 'false' will be used.
                     * @param _autoUseVoucher Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> If this field is not specified, the default value 'false' will be used.
                     * 
                     */
                    void SetAutoUseVoucher(const std::string& _autoUseVoucher);

                    /**
                     * 判断参数 AutoUseVoucher 是否已赋值
                     * @return AutoUseVoucher 是否已赋值
                     * 
                     */
                    bool AutoUseVoucherHasBeenSet() const;

                private:

                    /**
                     * Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Renewal plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> If this field is not specified, the default value 'false' will be used.
                     */
                    std::string m_autoUseVoucher;
                    bool m_autoUseVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_
