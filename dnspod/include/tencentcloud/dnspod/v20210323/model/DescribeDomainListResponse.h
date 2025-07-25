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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DomainCountInfo.h>
#include <tencentcloud/dnspod/v20210323/model/DomainListItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainList response structure.
                */
                class DescribeDomainListResponse : public AbstractModel
                {
                public:
                    DescribeDomainListResponse();
                    ~DescribeDomainListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistics on the list page
                     * @return DomainCountInfo Statistics on the list page
                     * 
                     */
                    DomainCountInfo GetDomainCountInfo() const;

                    /**
                     * 判断参数 DomainCountInfo 是否已赋值
                     * @return DomainCountInfo 是否已赋值
                     * 
                     */
                    bool DomainCountInfoHasBeenSet() const;

                    /**
                     * 获取Domain list
                     * @return DomainList Domain list
                     * 
                     */
                    std::vector<DomainListItem> GetDomainList() const;

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * Statistics on the list page
                     */
                    DomainCountInfo m_domainCountInfo;
                    bool m_domainCountInfoHasBeenSet;

                    /**
                     * Domain list
                     */
                    std::vector<DomainListItem> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_
