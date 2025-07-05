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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Auto scaling policy
                */
                class HorizontalAutoscaler : public AbstractModel
                {
                public:
                    HorizontalAutoscaler();
                    ~HorizontalAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取(Optional) Minimum number of instances
                     * @return MinReplicas (Optional) Minimum number of instances
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置(Optional) Minimum number of instances
                     * @param _minReplicas (Optional) Minimum number of instances
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取(Optional) Maximum number of instances
                     * @return MaxReplicas (Optional) Maximum number of instances
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置(Optional) Maximum number of instances
                     * @param _maxReplicas (Optional) Maximum number of instances
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Metric measurement
`CPU`: CPU utilization (%)
`MEMORY`: Memory utilization (%)
`CPU_CORE_USED`: CPU usage (core)
`MEMORY_SIZE_USED`: Memory usage (MiB)
`NETWORK_BANDWIDTH_RECEIVE`: Network bandwidth in (Mbps)
`NETWORK_BANDWIDTH_TRANSMIT`: Network bandwidth out (Mbps)
`NETWORK_TRAFFIC_RECEIVE`: Network traffic in (MiB/s)
`NETWORK_TRAFFIC_TRANSMIT`: Network traffic  out (MiB/s)
`NETWORK_PACKETS_RECEIVE`: Network packets in (packets/sec)
`NETWORK_PACKETS_TRANSMIT`: Network packets out (packets/sec)
`FS_IOPS_WRITE`: Disk writes (count/sec)
`FS_IOPS_READ`: Disk reads (count/sec)
`FS_SIZE_WRITE`: Disk write size (MiB/s)
`FS_SIZE_READ`: Disk read size (MiB/s)
                     * @return Metrics Metric measurement
`CPU`: CPU utilization (%)
`MEMORY`: Memory utilization (%)
`CPU_CORE_USED`: CPU usage (core)
`MEMORY_SIZE_USED`: Memory usage (MiB)
`NETWORK_BANDWIDTH_RECEIVE`: Network bandwidth in (Mbps)
`NETWORK_BANDWIDTH_TRANSMIT`: Network bandwidth out (Mbps)
`NETWORK_TRAFFIC_RECEIVE`: Network traffic in (MiB/s)
`NETWORK_TRAFFIC_TRANSMIT`: Network traffic  out (MiB/s)
`NETWORK_PACKETS_RECEIVE`: Network packets in (packets/sec)
`NETWORK_PACKETS_TRANSMIT`: Network packets out (packets/sec)
`FS_IOPS_WRITE`: Disk writes (count/sec)
`FS_IOPS_READ`: Disk reads (count/sec)
`FS_SIZE_WRITE`: Disk write size (MiB/s)
`FS_SIZE_READ`: Disk read size (MiB/s)
                     * 
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置Metric measurement
`CPU`: CPU utilization (%)
`MEMORY`: Memory utilization (%)
`CPU_CORE_USED`: CPU usage (core)
`MEMORY_SIZE_USED`: Memory usage (MiB)
`NETWORK_BANDWIDTH_RECEIVE`: Network bandwidth in (Mbps)
`NETWORK_BANDWIDTH_TRANSMIT`: Network bandwidth out (Mbps)
`NETWORK_TRAFFIC_RECEIVE`: Network traffic in (MiB/s)
`NETWORK_TRAFFIC_TRANSMIT`: Network traffic  out (MiB/s)
`NETWORK_PACKETS_RECEIVE`: Network packets in (packets/sec)
`NETWORK_PACKETS_TRANSMIT`: Network packets out (packets/sec)
`FS_IOPS_WRITE`: Disk writes (count/sec)
`FS_IOPS_READ`: Disk reads (count/sec)
`FS_SIZE_WRITE`: Disk write size (MiB/s)
`FS_SIZE_READ`: Disk read size (MiB/s)
                     * @param _metrics Metric measurement
`CPU`: CPU utilization (%)
`MEMORY`: Memory utilization (%)
`CPU_CORE_USED`: CPU usage (core)
`MEMORY_SIZE_USED`: Memory usage (MiB)
`NETWORK_BANDWIDTH_RECEIVE`: Network bandwidth in (Mbps)
`NETWORK_BANDWIDTH_TRANSMIT`: Network bandwidth out (Mbps)
`NETWORK_TRAFFIC_RECEIVE`: Network traffic in (MiB/s)
`NETWORK_TRAFFIC_TRANSMIT`: Network traffic  out (MiB/s)
`NETWORK_PACKETS_RECEIVE`: Network packets in (packets/sec)
`NETWORK_PACKETS_TRANSMIT`: Network packets out (packets/sec)
`FS_IOPS_WRITE`: Disk writes (count/sec)
`FS_IOPS_READ`: Disk reads (count/sec)
`FS_SIZE_WRITE`: Disk write size (MiB/s)
`FS_SIZE_READ`: Disk read size (MiB/s)
                     * 
                     */
                    void SetMetrics(const std::string& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取The value of threshold (integer)
                     * @return Threshold The value of threshold (integer)
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置The value of threshold (integer)
                     * @param _threshold The value of threshold (integer)
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _enabled Whether it is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取The value of threshold (demical)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DoubleThreshold The value of threshold (demical)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDoubleThreshold() const;

                    /**
                     * 设置The value of threshold (demical)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _doubleThreshold The value of threshold (demical)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDoubleThreshold(const double& _doubleThreshold);

                    /**
                     * 判断参数 DoubleThreshold 是否已赋值
                     * @return DoubleThreshold 是否已赋值
                     * 
                     */
                    bool DoubleThresholdHasBeenSet() const;

                private:

                    /**
                     * (Optional) Minimum number of instances
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * (Optional) Maximum number of instances
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Metric measurement
`CPU`: CPU utilization (%)
`MEMORY`: Memory utilization (%)
`CPU_CORE_USED`: CPU usage (core)
`MEMORY_SIZE_USED`: Memory usage (MiB)
`NETWORK_BANDWIDTH_RECEIVE`: Network bandwidth in (Mbps)
`NETWORK_BANDWIDTH_TRANSMIT`: Network bandwidth out (Mbps)
`NETWORK_TRAFFIC_RECEIVE`: Network traffic in (MiB/s)
`NETWORK_TRAFFIC_TRANSMIT`: Network traffic  out (MiB/s)
`NETWORK_PACKETS_RECEIVE`: Network packets in (packets/sec)
`NETWORK_PACKETS_TRANSMIT`: Network packets out (packets/sec)
`FS_IOPS_WRITE`: Disk writes (count/sec)
`FS_IOPS_READ`: Disk reads (count/sec)
`FS_SIZE_WRITE`: Disk write size (MiB/s)
`FS_SIZE_READ`: Disk read size (MiB/s)
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * The value of threshold (integer)
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * The value of threshold (demical)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_doubleThreshold;
                    bool m_doubleThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
