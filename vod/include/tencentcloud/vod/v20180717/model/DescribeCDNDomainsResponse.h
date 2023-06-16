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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CDNDomainInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNDomains response structure.
                */
                class DescribeCDNDomainsResponse : public AbstractModel
                {
                public:
                    DescribeCDNDomainsResponse();
                    ~DescribeCDNDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of domain name information.
                     * @return DomainSet List of domain name information.
                     * 
                     */
                    std::vector<CDNDomainInfo> GetDomainSet() const;

                    /**
                     * 判断参数 DomainSet 是否已赋值
                     * @return DomainSet 是否已赋值
                     * 
                     */
                    bool DomainSetHasBeenSet() const;

                    /**
                     * 获取The total number of CDN domain names under the current application.
                     * @return TotalCount The total number of CDN domain names under the current application.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of domain name information.
                     */
                    std::vector<CDNDomainInfo> m_domainSet;
                    bool m_domainSetHasBeenSet;

                    /**
                     * The total number of CDN domain names under the current application.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSRESPONSE_H_
