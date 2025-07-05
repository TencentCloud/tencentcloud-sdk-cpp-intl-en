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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/DomainLogs.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnDomainLogs response structure.
                */
                class DescribeEcdnDomainLogsResponse : public AbstractModel
                {
                public:
                    DescribeEcdnDomainLogsResponse();
                    ~DescribeEcdnDomainLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log link list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DomainLogs Log link list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DomainLogs> GetDomainLogs() const;

                    /**
                     * 判断参数 DomainLogs 是否已赋值
                     * @return DomainLogs 是否已赋值
                     * 
                     */
                    bool DomainLogsHasBeenSet() const;

                    /**
                     * 获取Total number of log links.
                     * @return TotalCount Total number of log links.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Log link list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DomainLogs> m_domainLogs;
                    bool m_domainLogsHasBeenSet;

                    /**
                     * Total number of log links.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_
