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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filter.h>
#include <tencentcloud/emr/v20190103/model/Order.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeGroupsSTD request structure.
                */
                class DescribeGroupsSTDRequest : public AbstractModel
                {
                public:
                    DescribeGroupsSTDRequest();
                    ~DescribeGroupsSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster name.
                     * @return InstanceId Cluster name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster name.
                     * @param _instanceId Cluster name.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Description key-value pair filter, which is used for conditional filtering queries.
                     * @return Filters Description key-value pair filter, which is used for conditional filtering queries.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Description key-value pair filter, which is used for conditional filtering queries.
                     * @param _filters Description key-value pair filter, which is used for conditional filtering queries.
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
                     * 获取Description order, which is used for sorting.
                     * @return OrderFields Description order, which is used for sorting.
                     * 
                     */
                    Order GetOrderFields() const;

                    /**
                     * 设置Description order, which is used for sorting.
                     * @param _orderFields Description order, which is used for sorting.
                     * 
                     */
                    void SetOrderFields(const Order& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Number of returns.
                     * @return Limit Number of returns.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns.
                     * @param _limit Number of returns.
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
                     * 获取Pagination parameter.
                     * @return Offset Pagination parameter.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter.
                     * @param _offset Pagination parameter.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Cluster name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Description key-value pair filter, which is used for conditional filtering queries.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Description order, which is used for sorting.
                     */
                    Order m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Number of returns.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_
