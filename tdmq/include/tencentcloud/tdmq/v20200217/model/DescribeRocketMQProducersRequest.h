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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_

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
                * DescribeRocketMQProducers request structure.
                */
                class DescribeRocketMQProducersRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQProducersRequest();
                    ~DescribeRocketMQProducersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Namespace
                     * @return NamespaceId Namespace
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace
                     * @param _namespaceId Namespace
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name
                     * @param _topic Topic name
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Pagination Offset
                     * @return Offset Pagination Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination Offset
                     * @param _offset Pagination Offset
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
                     * 获取Pagination Limit
                     * @return Limit Pagination Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination Limit
                     * @param _limit Pagination Limit
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
                     * 获取Query filter criteria list. supports the following filter parameters:.

-ClientId: specifies the producer client ID.
-ClientIp: specifies the producer client IP.
                     * @return Filters Query filter criteria list. supports the following filter parameters:.

-ClientId: specifies the producer client ID.
-ClientIp: specifies the producer client IP.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query filter criteria list. supports the following filter parameters:.

-ClientId: specifies the producer client ID.
-ClientIp: specifies the producer client IP.
                     * @param _filters Query filter criteria list. supports the following filter parameters:.

-ClientId: specifies the producer client ID.
-ClientIp: specifies the producer client IP.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Pagination Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query filter criteria list. supports the following filter parameters:.

-ClientId: specifies the producer client ID.
-ClientIp: specifies the producer client IP.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_
