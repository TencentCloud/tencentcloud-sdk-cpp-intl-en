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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomains response structure.
                */
                class DescribeLiveDomainsResponse : public AbstractModel
                {
                public:
                    DescribeLiveDomainsResponse();
                    ~DescribeLiveDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of results.
                     * @return AllCount Total number of results.
                     */
                    uint64_t GetAllCount() const;

                    /**
                     * 判断参数 AllCount 是否已赋值
                     * @return AllCount 是否已赋值
                     */
                    bool AllCountHasBeenSet() const;

                    /**
                     * 获取List of domain name details.
                     * @return DomainList List of domain name details.
                     */
                    std::vector<DomainInfo> GetDomainList() const;

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取The number of domain names that can be added
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateLimitCount The number of domain names that can be added
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetCreateLimitCount() const;

                    /**
                     * 判断参数 CreateLimitCount 是否已赋值
                     * @return CreateLimitCount 是否已赋值
                     */
                    bool CreateLimitCountHasBeenSet() const;

                private:

                    /**
                     * Total number of results.
                     */
                    uint64_t m_allCount;
                    bool m_allCountHasBeenSet;

                    /**
                     * List of domain name details.
                     */
                    std::vector<DomainInfo> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * The number of domain names that can be added
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_createLimitCount;
                    bool m_createLimitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_
