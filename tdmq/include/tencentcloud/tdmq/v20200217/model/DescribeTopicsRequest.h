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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_

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
                * DescribeTopics request structure.
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param EnvironmentId Environment (namespace) name.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Fuzzy match by topic name.
                     * @return TopicName Fuzzy match by topic name.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Fuzzy match by topic name.
                     * @param TopicName Fuzzy match by topic name.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Offset. If this parameter is left empty, 0 will be used by default.
                     * @return Offset Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. If this parameter is left empty, 0 will be used by default.
                     * @param Offset Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @return Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @param Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
                     * @return TopicType Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
                     * @param TopicType Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID
                     * @return ClusterId Pulsar cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID
                     * @param ClusterId Pulsar cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取* TopicName
Query by topic name for exact search.
Type: String
Required: no
                     * @return Filters * TopicName
Query by topic name for exact search.
Type: String
Required: no
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* TopicName
Query by topic name for exact search.
Type: String
Required: no
                     * @param Filters * TopicName
Query by topic name for exact search.
Type: String
Required: no
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Fuzzy match by topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Topic type description:
0: general message;
1: globally sequential message;
2: partitionally sequential message;
3: retry letter queue;
4: dead letter queue;
5: transaction message.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * * TopicName
Query by topic name for exact search.
Type: String
Required: no
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
