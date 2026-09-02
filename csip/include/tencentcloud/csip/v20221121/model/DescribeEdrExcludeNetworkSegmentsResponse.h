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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDREXCLUDENETWORKSEGMENTSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDREXCLUDENETWORKSEGMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NetworkSegment.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrExcludeNetworkSegments response structure.
                */
                class DescribeEdrExcludeNetworkSegmentsResponse : public AbstractModel
                {
                public:
                    DescribeEdrExcludeNetworkSegmentsResponse();
                    ~DescribeEdrExcludeNetworkSegmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of excluded CIDR blocks. IP addresses, IP ranges, and CIDR formats are supported.</p>
                     * @return NetworkSegments <p>List of excluded CIDR blocks. IP addresses, IP ranges, and CIDR formats are supported.</p>
                     * 
                     */
                    std::vector<std::string> GetNetworkSegments() const;

                    /**
                     * 判断参数 NetworkSegments 是否已赋值
                     * @return NetworkSegments 是否已赋值
                     * 
                     */
                    bool NetworkSegmentsHasBeenSet() const;

                    /**
                     * 获取<p>Number of CIDR blocks.</p>
                     * @return TotalCount <p>Number of CIDR blocks.</p>
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
                     * 获取<p>Default CIDR block configuration.</p>
                     * @return DefaultNetworkSegments <p>Default CIDR block configuration.</p>
                     * 
                     */
                    std::vector<NetworkSegment> GetDefaultNetworkSegments() const;

                    /**
                     * 判断参数 DefaultNetworkSegments 是否已赋值
                     * @return DefaultNetworkSegments 是否已赋值
                     * 
                     */
                    bool DefaultNetworkSegmentsHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is modified.</p>
                     * @return IsModified <p>Whether it is modified.</p>
                     * 
                     */
                    bool GetIsModified() const;

                    /**
                     * 判断参数 IsModified 是否已赋值
                     * @return IsModified 是否已赋值
                     * 
                     */
                    bool IsModifiedHasBeenSet() const;

                private:

                    /**
                     * <p>List of excluded CIDR blocks. IP addresses, IP ranges, and CIDR formats are supported.</p>
                     */
                    std::vector<std::string> m_networkSegments;
                    bool m_networkSegmentsHasBeenSet;

                    /**
                     * <p>Number of CIDR blocks.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Default CIDR block configuration.</p>
                     */
                    std::vector<NetworkSegment> m_defaultNetworkSegments;
                    bool m_defaultNetworkSegmentsHasBeenSet;

                    /**
                     * <p>Whether it is modified.</p>
                     */
                    bool m_isModified;
                    bool m_isModifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDREXCLUDENETWORKSEGMENTSRESPONSE_H_
