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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceFilter.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBInstances request structure.
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Filter parameters</p>
                     * @return Filters <p>Filter parameters</p>
                     * 
                     */
                    std::vector<InstanceFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter parameters</p>
                     * @param _filters <p>Filter parameters</p>
                     * 
                     */
                    void SetFilters(const std::vector<InstanceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Maximum return count, defaults to 20, maximum 100</p>
                     * @return Limit <p>Maximum return count, defaults to 20, maximum 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Maximum return count, defaults to 20, maximum 100</p>
                     * @param _limit <p>Maximum return count, defaults to 20, maximum 100</p>
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
                     * 获取<p>Offset, which is an integer multiple of Limit.</p>
                     * @return Offset <p>Offset, which is an integer multiple of Limit.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset, which is an integer multiple of Limit.</p>
                     * @param _offset <p>Offset, which is an integer multiple of Limit.</p>
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
                     * 获取<p>Specified query engine type</p><p>Enumeration value:</p><ul><li>libra: Column storage engine</li></ul>
                     * @return EngineType <p>Specified query engine type</p><p>Enumeration value:</p><ul><li>libra: Column storage engine</li></ul>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>Specified query engine type</p><p>Enumeration value:</p><ul><li>libra: Column storage engine</li></ul>
                     * @param _engineType <p>Specified query engine type</p><p>Enumeration value:</p><ul><li>libra: Column storage engine</li></ul>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Filter parameters</p>
                     */
                    std::vector<InstanceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Maximum return count, defaults to 20, maximum 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset, which is an integer multiple of Limit.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Specified query engine type</p><p>Enumeration value:</p><ul><li>libra: Column storage engine</li></ul>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
