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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQTopUsages request structure.
                */
                class DescribeRocketMQTopUsagesRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopUsagesRequest();
                    ~DescribeRocketMQTopUsagesRequest() = default;
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
                     * 获取Metric name. support the following:.
consumeLag. specifies the consumer group backlog count.
deadLetterCount. specifies the dead letter count.
Topic production rate.
Topic consumption rate. specifies the Topic consumption rate.
topicStorageSize. specifies the Topic storage space.
Topic API call count.
                     * @return MetricName Metric name. support the following:.
consumeLag. specifies the consumer group backlog count.
deadLetterCount. specifies the dead letter count.
Topic production rate.
Topic consumption rate. specifies the Topic consumption rate.
topicStorageSize. specifies the Topic storage space.
Topic API call count.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. support the following:.
consumeLag. specifies the consumer group backlog count.
deadLetterCount. specifies the dead letter count.
Topic production rate.
Topic consumption rate. specifies the Topic consumption rate.
topicStorageSize. specifies the Topic storage space.
Topic API call count.
                     * @param _metricName Metric name. support the following:.
consumeLag. specifies the consumer group backlog count.
deadLetterCount. specifies the dead letter count.
Topic production rate.
Topic consumption rate. specifies the Topic consumption rate.
topicStorageSize. specifies the Topic storage space.
Topic API call count.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Sort quantity. The maximum value is 20.
                     * @return Limit Sort quantity. The maximum value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Sort quantity. The maximum value is 20.
                     * @param _limit Sort quantity. The maximum value is 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Metric name. support the following:.
consumeLag. specifies the consumer group backlog count.
deadLetterCount. specifies the dead letter count.
Topic production rate.
Topic consumption rate. specifies the Topic consumption rate.
topicStorageSize. specifies the Topic storage space.
Topic API call count.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Sort quantity. The maximum value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_
