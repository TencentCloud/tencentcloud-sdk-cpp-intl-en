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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAINDNSREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAINDNSREQUEST_H_

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
                * BatchModifyIntlDomainDNS request structure.
                */
                class BatchModifyIntlDomainDNSRequest : public AbstractModel
                {
                public:
                    BatchModifyIntlDomainDNSRequest();
                    ~BatchModifyIntlDomainDNSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The target domains.
                     * @return Domains The target domains.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The target domains.
                     * @param _domains The target domains.
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
                     * 获取The domain DNS array.
                     * @return Dns The domain DNS array.
                     * 
                     */
                    std::vector<std::string> GetDns() const;

                    /**
                     * 设置The domain DNS array.
                     * @param _dns The domain DNS array.
                     * 
                     */
                    void SetDns(const std::vector<std::string>& _dns);

                    /**
                     * 判断参数 Dns 是否已赋值
                     * @return Dns 是否已赋值
                     * 
                     */
                    bool DnsHasBeenSet() const;

                    /**
                     * 获取Valid values: `batch_modify_domain_dns1`, `batch_modify_domain_dns2`, `batch_modify_domain_dns3`
                     * @return BatchAction Valid values: `batch_modify_domain_dns1`, `batch_modify_domain_dns2`, `batch_modify_domain_dns3`
                     * 
                     */
                    std::string GetBatchAction() const;

                    /**
                     * 设置Valid values: `batch_modify_domain_dns1`, `batch_modify_domain_dns2`, `batch_modify_domain_dns3`
                     * @param _batchAction Valid values: `batch_modify_domain_dns1`, `batch_modify_domain_dns2`, `batch_modify_domain_dns3`
                     * 
                     */
                    void SetBatchAction(const std::string& _batchAction);

                    /**
                     * 判断参数 BatchAction 是否已赋值
                     * @return BatchAction 是否已赋值
                     * 
                     */
                    bool BatchActionHasBeenSet() const;

                private:

                    /**
                     * The target domains.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The domain DNS array.
                     */
                    std::vector<std::string> m_dns;
                    bool m_dnsHasBeenSet;

                    /**
                     * Valid values: `batch_modify_domain_dns1`, `batch_modify_domain_dns2`, `batch_modify_domain_dns3`
                     */
                    std::string m_batchAction;
                    bool m_batchActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAINDNSREQUEST_H_
