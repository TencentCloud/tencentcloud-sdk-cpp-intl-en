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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeClusters request structure.
                */
                class DescribeTKEEdgeClustersRequest : public AbstractModel
                {
                public:
                    DescribeTKEEdgeClustersRequest();
                    ~DescribeTKEEdgeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID list (when it is empty,
all clusters under the account are obtained)
                     * @return ClusterIds Cluster ID list (when it is empty,
all clusters under the account are obtained)
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID list (when it is empty,
all clusters under the account are obtained)
                     * @param _clusterIds Cluster ID list (when it is empty,
all clusters under the account are obtained)
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`
                     * @return Offset Offset. Default value: `0`
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`
                     * @param _offset Offset. Default value: `0`
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of output entries. Default value: `20`
                     * @return Limit Maximum number of output entries. Default value: `20`
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: `20`
                     * @param _limit Maximum number of output entries. Default value: `20`
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter conditions. Values: `ClusterName` and tags in the format of ["key1:value1","key2:value2"].
                     * @return Filters Filter conditions. Values: `ClusterName` and tags in the format of ["key1:value1","key2:value2"].
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. Values: `ClusterName` and tags in the format of ["key1:value1","key2:value2"].
                     * @param _filters Filter conditions. Values: `ClusterName` and tags in the format of ["key1:value1","key2:value2"].
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Cluster ID list (when it is empty,
all clusters under the account are obtained)
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Offset. Default value: `0`
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: `20`
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. Values: `ClusterName` and tags in the format of ["key1:value1","key2:value2"].
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_
