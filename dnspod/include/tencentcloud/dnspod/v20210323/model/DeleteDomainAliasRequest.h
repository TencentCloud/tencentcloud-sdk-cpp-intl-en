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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINALIASREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINALIASREQUEST_H_

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
                * DeleteDomainAlias request structure.
                */
                class DeleteDomainAliasRequest : public AbstractModel
                {
                public:
                    DeleteDomainAliasRequest();
                    ~DeleteDomainAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain alias ID. You can view all domain aliases and their IDs via the `DescribeDomainAliasList` API.
                     * @return DomainAliasId Domain alias ID. You can view all domain aliases and their IDs via the `DescribeDomainAliasList` API.
                     */
                    int64_t GetDomainAliasId() const;

                    /**
                     * 设置Domain alias ID. You can view all domain aliases and their IDs via the `DescribeDomainAliasList` API.
                     * @param DomainAliasId Domain alias ID. You can view all domain aliases and their IDs via the `DescribeDomainAliasList` API.
                     */
                    void SetDomainAliasId(const int64_t& _domainAliasId);

                    /**
                     * 判断参数 DomainAliasId 是否已赋值
                     * @return DomainAliasId 是否已赋值
                     */
                    bool DomainAliasIdHasBeenSet() const;

                    /**
                     * 获取Domain
                     * @return Domain Domain
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param Domain Domain
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @return DomainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    int64_t GetDomainId() const;

                    /**
                     * 设置The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @param DomainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    void SetDomainId(const int64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * Domain alias ID. You can view all domain aliases and their IDs via the `DescribeDomainAliasList` API.
                     */
                    int64_t m_domainAliasId;
                    bool m_domainAliasIdHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    int64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINALIASREQUEST_H_
