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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLDOMAINBATCHREQUEST_H_

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
                * CreateIntlDomainBatch request structure.
                */
                class CreateIntlDomainBatchRequest : public AbstractModel
                {
                public:
                    CreateIntlDomainBatchRequest();
                    ~CreateIntlDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The profile ID.
                     * @return TemplateId The profile ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The profile ID.
                     * @param _templateId The profile ID.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The purchase period (years) of the domain. Value range: [1-10]
                     * @return Period The purchase period (years) of the domain. Value range: [1-10]
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The purchase period (years) of the domain. Value range: [1-10]
                     * @param _period The purchase period (years) of the domain. Value range: [1-10]
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
                     * 获取The domains (maximum 4,000) to purchase.
                     * @return Domains The domains (maximum 4,000) to purchase.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domains (maximum 4,000) to purchase.
                     * @param _domains The domains (maximum 4,000) to purchase.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取The payment method. Valid values: `0` (online payment), `1` (account balance), `2` (package), `3` (offline settlement).
                     * @return PayMode The payment method. Valid values: `0` (online payment), `1` (account balance), `2` (package), `3` (offline settlement).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置The payment method. Valid values: `0` (online payment), `1` (account balance), `2` (package), `3` (offline settlement).
                     * @param _payMode The payment method. Valid values: `0` (online payment), `1` (account balance), `2` (package), `3` (offline settlement).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal.
                     * @return AutoRenewFlag Whether to enable auto-renewal.
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to enable auto-renewal.
                     * @param _autoRenewFlag Whether to enable auto-renewal.
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Whether to enable the transfer prohibition lock.
                     * @return TransferProhibition Whether to enable the transfer prohibition lock.
                     * 
                     */
                    bool GetTransferProhibition() const;

                    /**
                     * 设置Whether to enable the transfer prohibition lock.
                     * @param _transferProhibition Whether to enable the transfer prohibition lock.
                     * 
                     */
                    void SetTransferProhibition(const bool& _transferProhibition);

                    /**
                     * 判断参数 TransferProhibition 是否已赋值
                     * @return TransferProhibition 是否已赋值
                     * 
                     */
                    bool TransferProhibitionHasBeenSet() const;

                    /**
                     * 获取Whether to enable the update prohibition lock.
                     * @return UpdateProhibition Whether to enable the update prohibition lock.
                     * 
                     */
                    bool GetUpdateProhibition() const;

                    /**
                     * 设置Whether to enable the update prohibition lock.
                     * @param _updateProhibition Whether to enable the update prohibition lock.
                     * 
                     */
                    void SetUpdateProhibition(const bool& _updateProhibition);

                    /**
                     * 判断参数 UpdateProhibition 是否已赋值
                     * @return UpdateProhibition 是否已赋值
                     * 
                     */
                    bool UpdateProhibitionHasBeenSet() const;

                    /**
                     * 获取The custom DNS servers
                     * @return CustomDns The custom DNS servers
                     * 
                     */
                    std::vector<std::string> GetCustomDns() const;

                    /**
                     * 设置The custom DNS servers
                     * @param _customDns The custom DNS servers
                     * 
                     */
                    void SetCustomDns(const std::vector<std::string>& _customDns);

                    /**
                     * 判断参数 CustomDns 是否已赋值
                     * @return CustomDns 是否已赋值
                     * 
                     */
                    bool CustomDnsHasBeenSet() const;

                private:

                    /**
                     * The profile ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The purchase period (years) of the domain. Value range: [1-10]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The domains (maximum 4,000) to purchase.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The payment method. Valid values: `0` (online payment), `1` (account balance), `2` (package), `3` (offline settlement).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to enable auto-renewal.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to enable the transfer prohibition lock.
                     */
                    bool m_transferProhibition;
                    bool m_transferProhibitionHasBeenSet;

                    /**
                     * Whether to enable the update prohibition lock.
                     */
                    bool m_updateProhibition;
                    bool m_updateProhibitionHasBeenSet;

                    /**
                     * The custom DNS servers
                     */
                    std::vector<std::string> m_customDns;
                    bool m_customDnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLDOMAINBATCHREQUEST_H_
