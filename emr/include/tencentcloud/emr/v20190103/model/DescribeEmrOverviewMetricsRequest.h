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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEmrOverviewMetrics request structure.
                */
                class DescribeEmrOverviewMetricsRequest : public AbstractModel
                {
                public:
                    DescribeEmrOverviewMetricsRequest();
                    ~DescribeEmrOverviewMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End time
                     * @return End End time
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置End time
                     * @param _end End time
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取Metric name. NODE.CPU: average CPU utilization and core count of the node; NODE.CPU.SLHBASE: average CPU utilization and core count of the Serverless instance; HDFS.NN.CAPACITY: storage utilization and total amount.
                     * @return Metric Metric name. NODE.CPU: average CPU utilization and core count of the node; NODE.CPU.SLHBASE: average CPU utilization and core count of the Serverless instance; HDFS.NN.CAPACITY: storage utilization and total amount.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name. NODE.CPU: average CPU utilization and core count of the node; NODE.CPU.SLHBASE: average CPU utilization and core count of the Serverless instance; HDFS.NN.CAPACITY: storage utilization and total amount.
                     * @param _metric Metric name. NODE.CPU: average CPU utilization and core count of the node; NODE.CPU.SLHBASE: average CPU utilization and core count of the Serverless instance; HDFS.NN.CAPACITY: storage utilization and total amount.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Granularity, for example, 30s-max, 1m-max, and 1h-max.
                     * @return Downsample Granularity, for example, 30s-max, 1m-max, and 1h-max.
                     * 
                     */
                    std::string GetDownsample() const;

                    /**
                     * 设置Granularity, for example, 30s-max, 1m-max, and 1h-max.
                     * @param _downsample Granularity, for example, 30s-max, 1m-max, and 1h-max.
                     * 
                     */
                    void SetDownsample(const std::string& _downsample);

                    /**
                     * 判断参数 Downsample 是否已赋值
                     * @return Downsample 是否已赋值
                     * 
                     */
                    bool DownsampleHasBeenSet() const;

                    /**
                     * 获取Start time, not required for pie charts
                     * @return Start Start time, not required for pie charts
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置Start time, not required for pie charts
                     * @param _start Start time, not required for pie charts
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Aggregation method, for future use
                     * @return Aggregator Aggregation method, for future use
                     * 
                     */
                    std::string GetAggregator() const;

                    /**
                     * 设置Aggregation method, for future use
                     * @param _aggregator Aggregation method, for future use
                     * 
                     */
                    void SetAggregator(const std::string& _aggregator);

                    /**
                     * 判断参数 Aggregator 是否已赋值
                     * @return Aggregator 是否已赋值
                     * 
                     */
                    bool AggregatorHasBeenSet() const;

                    /**
                     * 获取Specific type of metrics to be queried, for example, "{"type":"CapacityTotal|CapacityRemaining"}".
                     * @return Tags Specific type of metrics to be queried, for example, "{"type":"CapacityTotal|CapacityRemaining"}".
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置Specific type of metrics to be queried, for example, "{"type":"CapacityTotal|CapacityRemaining"}".
                     * @param _tags Specific type of metrics to be queried, for example, "{"type":"CapacityTotal|CapacityRemaining"}".
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * End time
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * Metric name. NODE.CPU: average CPU utilization and core count of the node; NODE.CPU.SLHBASE: average CPU utilization and core count of the Serverless instance; HDFS.NN.CAPACITY: storage utilization and total amount.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Granularity, for example, 30s-max, 1m-max, and 1h-max.
                     */
                    std::string m_downsample;
                    bool m_downsampleHasBeenSet;

                    /**
                     * Start time, not required for pie charts
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Aggregation method, for future use
                     */
                    std::string m_aggregator;
                    bool m_aggregatorHasBeenSet;

                    /**
                     * Specific type of metrics to be queried, for example, "{"type":"CapacityTotal|CapacityRemaining"}".
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_
