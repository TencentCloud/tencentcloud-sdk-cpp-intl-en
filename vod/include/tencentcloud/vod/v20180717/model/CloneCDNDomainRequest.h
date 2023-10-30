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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONECDNDOMAINREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONECDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CloneCDNDomain request structure.
                */
                class CloneCDNDomainRequest : public AbstractModel
                {
                public:
                    CloneCDNDomainRequest();
                    ~CloneCDNDomainRequest() = default;
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
                     * 获取The cloned domain.
                     * @return ReferenceDomain The cloned domain.
                     * 
                     */
                    std::string GetReferenceDomain() const;

                    /**
                     * 设置The cloned domain.
                     * @param _referenceDomain The cloned domain.
                     * 
                     */
                    void SetReferenceDomain(const std::string& _referenceDomain);

                    /**
                     * 判断参数 ReferenceDomain 是否已赋值
                     * @return ReferenceDomain 是否已赋值
                     * 
                     */
                    bool ReferenceDomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The cloned domain.
                     */
                    std::string m_referenceDomain;
                    bool m_referenceDomainHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONECDNDOMAINREQUEST_H_
