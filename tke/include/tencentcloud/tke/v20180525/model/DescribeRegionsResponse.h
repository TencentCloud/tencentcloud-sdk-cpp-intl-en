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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEREGIONSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RegionInstance.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
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
                     * 获取Number of regions
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of regions
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取## Region List
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionInstanceSet ## Region List
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RegionInstance> GetRegionInstanceSet() const;

                    /**
                     * 判断参数 RegionInstanceSet 是否已赋值
                     * @return RegionInstanceSet 是否已赋值
                     * 
                     */
                    bool RegionInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Number of regions
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * ## Region List
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RegionInstance> m_regionInstanceSet;
                    bool m_regionInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEREGIONSRESPONSE_H_
