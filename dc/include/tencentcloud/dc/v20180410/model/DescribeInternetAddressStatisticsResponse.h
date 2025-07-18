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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/InternetAddressStatistics.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddressStatistics response structure.
                */
                class DescribeInternetAddressStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeInternetAddressStatisticsResponse();
                    ~DescribeInternetAddressStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of public IP address statistics for internet tunnels
                     * @return TotalCount Number of public IP address statistics for internet tunnels
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
                     * 获取List of the public IP address statistics for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InternetAddressStatistics List of the public IP address statistics for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InternetAddressStatistics> GetInternetAddressStatistics() const;

                    /**
                     * 判断参数 InternetAddressStatistics 是否已赋值
                     * @return InternetAddressStatistics 是否已赋值
                     * 
                     */
                    bool InternetAddressStatisticsHasBeenSet() const;

                private:

                    /**
                     * Number of public IP address statistics for internet tunnels
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of the public IP address statistics for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<InternetAddressStatistics> m_internetAddressStatistics;
                    bool m_internetAddressStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSSTATISTICSRESPONSE_H_
