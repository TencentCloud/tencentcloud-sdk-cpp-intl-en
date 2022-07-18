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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusters request structure.
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine type. Currently, `MYSQL` is supported.
                     * @return DbType Engine type. Currently, `MYSQL` is supported.
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Engine type. Currently, `MYSQL` is supported.
                     * @param DbType Engine type. Currently, `MYSQL` is supported.
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Record offset. Default value: 0
                     * @return Offset Record offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: 0
                     * @param Offset Record offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values:
<li> CREATETIME: creation time</li>
<li> PERIODENDTIME: expiration time</li>
                     * @return OrderBy Sort by field. Valid values:
<li> CREATETIME: creation time</li>
<li> PERIODENDTIME: expiration time</li>
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field. Valid values:
<li> CREATETIME: creation time</li>
<li> PERIODENDTIME: expiration time</li>
                     * @param OrderBy Sort by field. Valid values:
<li> CREATETIME: creation time</li>
<li> PERIODENDTIME: expiration time</li>
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values:
<li> ASC: ascending</li>
<li> DESC: descending</li>
                     * @return OrderByType Sorting order. Valid values:
<li> ASC: ascending</li>
<li> DESC: descending</li>
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values:
<li> ASC: ascending</li>
<li> DESC: descending</li>
                     * @param OrderByType Sorting order. Valid values:
<li> ASC: ascending</li>
<li> DESC: descending</li>
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Filter. If more than one filter exists, the logical relationship between these filters is `AND`.
                     * @return Filters Filter. If more than one filter exists, the logical relationship between these filters is `AND`.
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置Filter. If more than one filter exists, the logical relationship between these filters is `AND`.
                     * @param Filters Filter. If more than one filter exists, the logical relationship between these filters is `AND`.
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Engine type. Currently, `MYSQL` is supported.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Record offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort by field. Valid values:
<li> CREATETIME: creation time</li>
<li> PERIODENDTIME: expiration time</li>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values:
<li> ASC: ascending</li>
<li> DESC: descending</li>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Filter. If more than one filter exists, the logical relationship between these filters is `AND`.
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSREQUEST_H_
