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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCLUSTERLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCLUSTERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetClusterList request structure.
                */
                class DescribeAssetClusterListRequest : public AbstractModel
                {
                public:
                    DescribeAssetClusterListRequest();
                    ~DescribeAssetClusterListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters.
<li>`ClusterID` - String - Optional - Cluster ID</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`Status` - String - Optional - Cluster status</li>
                     * @return Filters Filters.
<li>`ClusterID` - String - Optional - Cluster ID</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`Status` - String - Optional - Cluster status</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filters.
<li>`ClusterID` - String - Optional - Cluster ID</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`Status` - String - Optional - Cluster status</li>
                     * @param _filters Filters.
<li>`ClusterID` - String - Optional - Cluster ID</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`Status` - String - Optional - Cluster status</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The number of results returned. Default value: 10. Maximum value: 100.
                     * @return Limit The number of results returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results returned. Default value: 10. Maximum value: 100.
                     * @param _limit The number of results returned. Default value: 10. Maximum value: 100.
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
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
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
                     * 获取Sort order
                     * @return Order Sort order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order
                     * @param _order Sort order
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field.
                     * @return By Sorting field.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field.
                     * @param _by Sorting field.
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filters.
<li>`ClusterID` - String - Optional - Cluster ID</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`Status` - String - Optional - Cluster status</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The number of results returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCLUSTERLISTREQUEST_H_
