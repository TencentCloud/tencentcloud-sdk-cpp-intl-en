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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINOWNERREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINOWNERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyDomainOwner request structure.
                */
                class ModifyDomainOwnerRequest : public AbstractModel
                {
                public:
                    ModifyDomainOwnerRequest();
                    ~ModifyDomainOwnerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The account to which to transfer the domain, which can be an UIN or email address
                     * @return Account The account to which to transfer the domain, which can be an UIN or email address
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置The account to which to transfer the domain, which can be an UIN or email address
                     * @param _account The account to which to transfer the domain, which can be an UIN or email address
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @return DomainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @param _domainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The account to which to transfer the domain, which can be an UIN or email address
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINOWNERREQUEST_H_
