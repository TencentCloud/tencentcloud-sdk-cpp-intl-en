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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QueryParamFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeProxies request structure.
                */
                class DescribeProxiesRequest : public AbstractModel
                {
                public:
                    DescribeProxiesRequest();
                    ~DescribeProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID (this parameter is required, such as cynosdbmysql-2u2mh111).</p>
                     * @return ClusterId <p>Cluster ID (this parameter is required, such as cynosdbmysql-2u2mh111).</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID (this parameter is required, such as cynosdbmysql-2u2mh111).</p>
                     * @param _clusterId <p>Cluster ID (this parameter is required, such as cynosdbmysql-2u2mh111).</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of returned results, defaults to 20 with a maximum value of 100</p>
                     * @return Limit <p>Number of returned results, defaults to 20 with a maximum value of 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results, defaults to 20 with a maximum value of 100</p>
                     * @param _limit <p>Number of returned results, defaults to 20 with a maximum value of 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Record offset. Default value is 0</p>
                     * @return Offset <p>Record offset. Default value is 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Record offset. Default value is 0</p>
                     * @param _offset <p>Record offset. Default value is 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field. Value ranges from...to...:</p><li>CREATETIME: Creation time</li><li>PERIODENDTIME: Expiration time</li>
                     * @return OrderBy <p>Sorting field. Value ranges from...to...:</p><li>CREATETIME: Creation time</li><li>PERIODENDTIME: Expiration time</li>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field. Value ranges from...to...:</p><li>CREATETIME: Creation time</li><li>PERIODENDTIME: Expiration time</li>
                     * @param _orderBy <p>Sorting field. Value ranges from...to...:</p><li>CREATETIME: Creation time</li><li>PERIODENDTIME: Expiration time</li>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting type. Value ranges from:</p><li> ASC: ascending order </li><li> DESC: sort in descending order </li>
                     * @return OrderByType <p>Sorting type. Value ranges from:</p><li> ASC: ascending order </li><li> DESC: sort in descending order </li>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置<p>Sorting type. Value ranges from:</p><li> ASC: ascending order </li><li> DESC: sort in descending order </li>
                     * @param _orderByType <p>Sorting type. Value ranges from:</p><li> ASC: ascending order </li><li> DESC: sort in descending order </li>
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取<p>Search criteria. If there are multiple Filters, the relationship between Filters is logical AND. <br>Description: This parameter currently only supports two filter conditions: Status and ProxyGroupId.</p>
                     * @return Filters <p>Search criteria. If there are multiple Filters, the relationship between Filters is logical AND. <br>Description: This parameter currently only supports two filter conditions: Status and ProxyGroupId.</p>
                     * 
                     */
                    std::vector<QueryParamFilter> GetFilters() const;

                    /**
                     * 设置<p>Search criteria. If there are multiple Filters, the relationship between Filters is logical AND. <br>Description: This parameter currently only supports two filter conditions: Status and ProxyGroupId.</p>
                     * @param _filters <p>Search criteria. If there are multiple Filters, the relationship between Filters is logical AND. <br>Description: This parameter currently only supports two filter conditions: Status and ProxyGroupId.</p>
                     * 
                     */
                    void SetFilters(const std::vector<QueryParamFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID (this parameter is required, such as cynosdbmysql-2u2mh111).</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Number of returned results, defaults to 20 with a maximum value of 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Record offset. Default value is 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting field. Value ranges from...to...:</p><li>CREATETIME: Creation time</li><li>PERIODENDTIME: Expiration time</li>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Sorting type. Value ranges from:</p><li> ASC: ascending order </li><li> DESC: sort in descending order </li>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * <p>Search criteria. If there are multiple Filters, the relationship between Filters is logical AND. <br>Description: This parameter currently only supports two filter conditions: Status and ProxyGroupId.</p>
                     */
                    std::vector<QueryParamFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESREQUEST_H_
