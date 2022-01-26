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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DomainDetailInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeVodDomains response structure.
                */
                class DescribeVodDomainsResponse : public AbstractModel
                {
                public:
                    DescribeVodDomainsResponse();
                    ~DescribeVodDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of domain names
                     * @return TotalCount Total number of domain names
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Domain name information list
                     * @return DomainSet Domain name information list
                     */
                    std::vector<DomainDetailInfo> GetDomainSet() const;

                    /**
                     * 判断参数 DomainSet 是否已赋值
                     * @return DomainSet 是否已赋值
                     */
                    bool DomainSetHasBeenSet() const;

                private:

                    /**
                     * Total number of domain names
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Domain name information list
                     */
                    std::vector<DomainDetailInfo> m_domainSet;
                    bool m_domainSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSRESPONSE_H_
