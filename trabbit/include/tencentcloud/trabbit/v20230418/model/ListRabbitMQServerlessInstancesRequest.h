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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ListRabbitMQServerlessInstances request structure.
                */
                class ListRabbitMQServerlessInstancesRequest : public AbstractModel
                {
                public:
                    ListRabbitMQServerlessInstancesRequest();
                    ~ListRabbitMQServerlessInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria.
                     * @return Filters Filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filters Filter criteria.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return Limit Page size.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size.
                     * @param _limit Page size.
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
                     * 获取Starting index value for pagination.
                     * @return Offset Starting index value for pagination.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting index value for pagination.
                     * @param _offset Starting index value for pagination.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page size.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting index value for pagination.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESREQUEST_H_
