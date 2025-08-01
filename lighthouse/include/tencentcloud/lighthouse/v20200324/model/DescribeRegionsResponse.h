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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEREGIONSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeRegions response structure.
                */
                class DescribeRegionsResponse : public AbstractModel
                {
                public:
                    DescribeRegionsResponse();
                    ~DescribeRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of regions.
                     * @return TotalCount Number of regions.
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
                     * 获取Region information list.
                     * @return RegionSet Region information list.
                     * 
                     */
                    std::vector<RegionInfo> GetRegionSet() const;

                    /**
                     * 判断参数 RegionSet 是否已赋值
                     * @return RegionSet 是否已赋值
                     * 
                     */
                    bool RegionSetHasBeenSet() const;

                private:

                    /**
                     * Number of regions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Region information list.
                     */
                    std::vector<RegionInfo> m_regionSet;
                    bool m_regionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEREGIONSRESPONSE_H_
