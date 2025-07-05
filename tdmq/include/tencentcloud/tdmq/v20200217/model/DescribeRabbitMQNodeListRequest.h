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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQNodeList request structure.
                */
                class DescribeRabbitMQNodeListRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQNodeListRequest();
                    ~DescribeRabbitMQNodeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ for RabbitMQ cluster ID
                     * @return InstanceId TDMQ for RabbitMQ cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ for RabbitMQ cluster ID
                     * @param _instanceId TDMQ for RabbitMQ cluster ID
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取The maximum entries per page
                     * @return Limit The maximum entries per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum entries per page
                     * @param _limit The maximum entries per page
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
                     * 获取Node name for fuzzy search
                     * @return NodeName Node name for fuzzy search
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name for fuzzy search
                     * @param _nodeName Node name for fuzzy search
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Name and value of a filter.
Currently, only the `nodeStatus` filter is supported.
Valid values: `running`, `down`.
It is an array type and can contain multiple filters.

                     * @return Filters Name and value of a filter.
Currently, only the `nodeStatus` filter is supported.
Valid values: `running`, `down`.
It is an array type and can contain multiple filters.

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Name and value of a filter.
Currently, only the `nodeStatus` filter is supported.
Valid values: `running`, `down`.
It is an array type and can contain multiple filters.

                     * @param _filters Name and value of a filter.
Currently, only the `nodeStatus` filter is supported.
Valid values: `running`, `down`.
It is an array type and can contain multiple filters.

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
                     * 获取Sorting by a specified element.
Valid values: `cpuUsage`, `diskUsage`.
                     * @return SortElement Sorting by a specified element.
Valid values: `cpuUsage`, `diskUsage`.
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sorting by a specified element.
Valid values: `cpuUsage`, `diskUsage`.
                     * @param _sortElement Sorting by a specified element.
Valid values: `cpuUsage`, `diskUsage`.
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取Sorting order.
Valid values: `ascend`, `descend`.
                     * @return SortOrder Sorting order.
Valid values: `ascend`, `descend`.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order.
Valid values: `ascend`, `descend`.
                     * @param _sortOrder Sorting order.
Valid values: `ascend`, `descend`.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * TDMQ for RabbitMQ cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum entries per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Node name for fuzzy search
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Name and value of a filter.
Currently, only the `nodeStatus` filter is supported.
Valid values: `running`, `down`.
It is an array type and can contain multiple filters.

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting by a specified element.
Valid values: `cpuUsage`, `diskUsage`.
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sorting order.
Valid values: `ascend`, `descend`.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_
