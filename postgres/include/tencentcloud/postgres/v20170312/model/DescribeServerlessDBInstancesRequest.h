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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeServerlessDBInstances request structure.
                */
                class DescribeServerlessDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeServerlessDBInstancesRequest();
                    ~DescribeServerlessDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query conditions
                     * @return Filter Query conditions
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置Query conditions
                     * @param _filter Query conditions
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取The number of queries
                     * @return Limit The number of queries
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of queries
                     * @param _limit The number of queries
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
                     * 获取The offset value
                     * @return Offset The offset value
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset value
                     * @param _offset The offset value
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
                     * 获取Sorting metric. Currently, only "CreateTime" (instance creation time) is supported.
                     * @return OrderBy Sorting metric. Currently, only "CreateTime" (instance creation time) is supported.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting metric. Currently, only "CreateTime" (instance creation time) is supported.
                     * @param _orderBy Sorting metric. Currently, only "CreateTime" (instance creation time) is supported.
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
                     * 获取Sorting order. Ascending and descending are supported.
                     * @return OrderByType Sorting order. Ascending and descending are supported.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Ascending and descending are supported.
                     * @param _orderByType Sorting order. Ascending and descending are supported.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Query conditions
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * The number of queries
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The offset value
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting metric. Currently, only "CreateTime" (instance creation time) is supported.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Ascending and descending are supported.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_
