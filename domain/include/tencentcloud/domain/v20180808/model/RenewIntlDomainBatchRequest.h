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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWINTLDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWINTLDOMAINBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * RenewIntlDomainBatch request structure.
                */
                class RenewIntlDomainBatchRequest : public AbstractModel
                {
                public:
                    RenewIntlDomainBatchRequest();
                    ~RenewIntlDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domains to check.
                     * @return Domains The domains to check.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domains to check.
                     * @param Domains The domains to check.
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取The period (1 to 10 years). If this parameter is left empty, premium domains cannot be checked.
                     * @return Period The period (1 to 10 years). If this parameter is left empty, premium domains cannot be checked.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The period (1 to 10 years). If this parameter is left empty, premium domains cannot be checked.
                     * @param Period The period (1 to 10 years). If this parameter is left empty, premium domains cannot be checked.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Payment method. Valid value: `1` (account balance).
                     * @return PayMode Payment method. Valid value: `1` (account balance).
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment method. Valid value: `1` (account balance).
                     * @param PayMode Payment method. Valid value: `1` (account balance).
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal.
                     * @return AutoRenewFlag Whether to enable auto-renewal.
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to enable auto-renewal.
                     * @param AutoRenewFlag Whether to enable auto-renewal.
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * The domains to check.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The period (1 to 10 years). If this parameter is left empty, premium domains cannot be checked.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Payment method. Valid value: `1` (account balance).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to enable auto-renewal.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWINTLDOMAINBATCHREQUEST_H_
