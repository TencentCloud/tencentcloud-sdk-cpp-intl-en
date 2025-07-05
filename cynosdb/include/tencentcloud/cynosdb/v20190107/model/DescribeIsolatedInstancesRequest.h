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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEISOLATEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEISOLATEDINSTANCESREQUEST_H_

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
                * DescribeIsolatedInstances request structure.
                */
                class DescribeIsolatedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeIsolatedInstancesRequest();
                    ~DescribeIsolatedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned results. the default value is 20. the maximum value is 100.
                     * @return Limit Number of returned results. the default value is 20. the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. the default value is 20. the maximum value is 100.
                     * @param _limit Number of returned results. the default value is 20. the maximum value is 100.
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
                     * 获取Record offset. default value: 0.
                     * @return Offset Record offset. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. default value: 0.
                     * @param _offset Record offset. default value: 0.
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
                     * 获取Sorting field. valid values:.
<Li>CREATETIME: creation time</li>.
<li> PERIODENDTIME: expiration time</li>.
                     * @return OrderBy Sorting field. valid values:.
<Li>CREATETIME: creation time</li>.
<li> PERIODENDTIME: expiration time</li>.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. valid values:.
<Li>CREATETIME: creation time</li>.
<li> PERIODENDTIME: expiration time</li>.
                     * @param _orderBy Sorting field. valid values:.
<Li>CREATETIME: creation time</li>.
<li> PERIODENDTIME: expiration time</li>.
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
                     * 获取Sorting type. value range:.
<Li>ASC: specifies ascending sort.</li>.
<li> DESC: sorts in descending order. </li>.
                     * @return OrderByType Sorting type. value range:.
<Li>ASC: specifies ascending sort.</li>.
<li> DESC: sorts in descending order. </li>.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting type. value range:.
<Li>ASC: specifies ascending sort.</li>.
<li> DESC: sorts in descending order. </li>.
                     * @param _orderByType Sorting type. value range:.
<Li>ASC: specifies ascending sort.</li>.
<li> DESC: sorts in descending order. </li>.
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
                     * 获取Search criteria. when multiple filters exist, the relationship between filters is logical AND.
                     * @return Filters Search criteria. when multiple filters exist, the relationship between filters is logical AND.
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置Search criteria. when multiple filters exist, the relationship between filters is logical AND.
                     * @param _filters Search criteria. when multiple filters exist, the relationship between filters is logical AND.
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Engine type: currently supports "MYSQL", "POSTGRESQL".
                     * @return DbType Engine type: currently supports "MYSQL", "POSTGRESQL".
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Engine type: currently supports "MYSQL", "POSTGRESQL".
                     * @param _dbType Engine type: currently supports "MYSQL", "POSTGRESQL".
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                private:

                    /**
                     * Number of returned results. the default value is 20. the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Record offset. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. valid values:.
<Li>CREATETIME: creation time</li>.
<li> PERIODENDTIME: expiration time</li>.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting type. value range:.
<Li>ASC: specifies ascending sort.</li>.
<li> DESC: sorts in descending order. </li>.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Search criteria. when multiple filters exist, the relationship between filters is logical AND.
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Engine type: currently supports "MYSQL", "POSTGRESQL".
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEISOLATEDINSTANCESREQUEST_H_
