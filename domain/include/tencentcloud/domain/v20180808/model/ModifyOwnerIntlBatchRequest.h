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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYOWNERINTLBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYOWNERINTLBATCHREQUEST_H_

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
                * ModifyOwnerIntlBatch request structure.
                */
                class ModifyOwnerIntlBatchRequest : public AbstractModel
                {
                public:
                    ModifyOwnerIntlBatchRequest();
                    ~ModifyOwnerIntlBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domains.
                     * @return Domains The domains.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domains.
                     * @param _domains The domains.
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
                     * 获取The user ID.
                     * @return ToUin The user ID.
                     * 
                     */
                    std::string GetToUin() const;

                    /**
                     * 设置The user ID.
                     * @param _toUin The user ID.
                     * 
                     */
                    void SetToUin(const std::string& _toUin);

                    /**
                     * 判断参数 ToUin 是否已赋值
                     * @return ToUin 是否已赋值
                     * 
                     */
                    bool ToUinHasBeenSet() const;

                    /**
                     * 获取Whether to transfer the DNS service.
                     * @return DnsTransfer Whether to transfer the DNS service.
                     * 
                     */
                    bool GetDnsTransfer() const;

                    /**
                     * 设置Whether to transfer the DNS service.
                     * @param _dnsTransfer Whether to transfer the DNS service.
                     * 
                     */
                    void SetDnsTransfer(const bool& _dnsTransfer);

                    /**
                     * 判断参数 DnsTransfer 是否已赋值
                     * @return DnsTransfer 是否已赋值
                     * 
                     */
                    bool DnsTransferHasBeenSet() const;

                private:

                    /**
                     * The domains.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_toUin;
                    bool m_toUinHasBeenSet;

                    /**
                     * Whether to transfer the DNS service.
                     */
                    bool m_dnsTransfer;
                    bool m_dnsTransferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYOWNERINTLBATCHREQUEST_H_
