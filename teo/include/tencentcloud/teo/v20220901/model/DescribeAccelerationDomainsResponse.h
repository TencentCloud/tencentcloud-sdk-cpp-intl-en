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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AccelerationDomain.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAccelerationDomains response structure.
                */
                class DescribeAccelerationDomainsResponse : public AbstractModel
                {
                public:
                    DescribeAccelerationDomainsResponse();
                    ~DescribeAccelerationDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Count of acceleration domain names that meet the search criteria.</p>
                     * @return TotalCount <p>Count of acceleration domain names that meet the search criteria.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Information of all acceleration domain names that meet the search criteria.</p>
                     * @return AccelerationDomains <p>Information of all acceleration domain names that meet the search criteria.</p>
                     * 
                     */
                    std::vector<AccelerationDomain> GetAccelerationDomains() const;

                    /**
                     * 判断参数 AccelerationDomains 是否已赋值
                     * @return AccelerationDomains 是否已赋值
                     * 
                     */
                    bool AccelerationDomainsHasBeenSet() const;

                private:

                    /**
                     * <p>Count of acceleration domain names that meet the search criteria.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Information of all acceleration domain names that meet the search criteria.</p>
                     */
                    std::vector<AccelerationDomain> m_accelerationDomains;
                    bool m_accelerationDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSRESPONSE_H_
