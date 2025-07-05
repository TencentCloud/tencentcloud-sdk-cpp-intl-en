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
                     * 获取Cluster ID (this parameter is required. for example, cynosdbmysql-2u2mh111).
                     * @return ClusterId Cluster ID (this parameter is required. for example, cynosdbmysql-2u2mh111).
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID (this parameter is required. for example, cynosdbmysql-2u2mh111).
                     * @param _clusterId Cluster ID (this parameter is required. for example, cynosdbmysql-2u2mh111).
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
                     * 获取Number of returned results. Default value: `20`. Maximum value: `100`,
                     * @return Limit Number of returned results. Default value: `20`. Maximum value: `100`,
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: `20`. Maximum value: `100`,
                     * @param _limit Number of returned results. Default value: `20`. Maximum value: `100`,
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
                     * 获取Record offset. Default value: `0`.
                     * @return Offset Record offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: `0`.
                     * @param _offset Record offset. Default value: `0`.
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
                     * 获取Sorting field. Valid values:
<li> CREATETIME: Creation time</li>
<li> PERIODENDTIME: Expiration time</li>
                     * @return OrderBy Sorting field. Valid values:
<li> CREATETIME: Creation time</li>
<li> PERIODENDTIME: Expiration time</li>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values:
<li> CREATETIME: Creation time</li>
<li> PERIODENDTIME: Expiration time</li>
                     * @param _orderBy Sorting field. Valid values:
<li> CREATETIME: Creation time</li>
<li> PERIODENDTIME: Expiration time</li>
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
                     * 获取Sorting order. Valid values:
<li> `ASC`: Ascending.</li>
<li> `DESC`: Descending</li>
                     * @return OrderByType Sorting order. Valid values:
<li> `ASC`: Ascending.</li>
<li> `DESC`: Descending</li>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values:
<li> `ASC`: Ascending.</li>
<li> `DESC`: Descending</li>
                     * @param _orderByType Sorting order. Valid values:
<li> `ASC`: Ascending.</li>
<li> `DESC`: Descending</li>
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
                     * 获取Filter. If there are more than one filter, the logical relationship between these filters is `AND`.
                     * @return Filters Filter. If there are more than one filter, the logical relationship between these filters is `AND`.
                     * 
                     */
                    std::vector<QueryParamFilter> GetFilters() const;

                    /**
                     * 设置Filter. If there are more than one filter, the logical relationship between these filters is `AND`.
                     * @param _filters Filter. If there are more than one filter, the logical relationship between these filters is `AND`.
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
                     * Cluster ID (this parameter is required. for example, cynosdbmysql-2u2mh111).
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Number of returned results. Default value: `20`. Maximum value: `100`,
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Record offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Valid values:
<li> CREATETIME: Creation time</li>
<li> PERIODENDTIME: Expiration time</li>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values:
<li> `ASC`: Ascending.</li>
<li> `DESC`: Descending</li>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Filter. If there are more than one filter, the logical relationship between these filters is `AND`.
                     */
                    std::vector<QueryParamFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESREQUEST_H_
