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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricDatum.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * PutMonitorData request structure.
                */
                class PutMonitorDataRequest : public AbstractModel
                {
                public:
                    PutMonitorDataRequest();
                    ~PutMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取A group of metrics and data.
                     * @return Metrics A group of metrics and data.
                     * 
                     */
                    std::vector<MetricDatum> GetMetrics() const;

                    /**
                     * 设置A group of metrics and data.
                     * @param _metrics A group of metrics and data.
                     * 
                     */
                    void SetMetrics(const std::vector<MetricDatum>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取IP address that is automatically specified when monitoring data is reported.
                     * @return AnnounceIp IP address that is automatically specified when monitoring data is reported.
                     * 
                     */
                    std::string GetAnnounceIp() const;

                    /**
                     * 设置IP address that is automatically specified when monitoring data is reported.
                     * @param _announceIp IP address that is automatically specified when monitoring data is reported.
                     * 
                     */
                    void SetAnnounceIp(const std::string& _announceIp);

                    /**
                     * 判断参数 AnnounceIp 是否已赋值
                     * @return AnnounceIp 是否已赋值
                     * 
                     */
                    bool AnnounceIpHasBeenSet() const;

                    /**
                     * 获取Timestamp that is automatically specified when monitoring data is reported.
                     * @return AnnounceTimestamp Timestamp that is automatically specified when monitoring data is reported.
                     * 
                     */
                    uint64_t GetAnnounceTimestamp() const;

                    /**
                     * 设置Timestamp that is automatically specified when monitoring data is reported.
                     * @param _announceTimestamp Timestamp that is automatically specified when monitoring data is reported.
                     * 
                     */
                    void SetAnnounceTimestamp(const uint64_t& _announceTimestamp);

                    /**
                     * 判断参数 AnnounceTimestamp 是否已赋值
                     * @return AnnounceTimestamp 是否已赋值
                     * 
                     */
                    bool AnnounceTimestampHasBeenSet() const;

                    /**
                     * 获取IP address or product instance ID that is automatically specified when monitoring data is reported.
                     * @return AnnounceInstance IP address or product instance ID that is automatically specified when monitoring data is reported.
                     * 
                     */
                    std::string GetAnnounceInstance() const;

                    /**
                     * 设置IP address or product instance ID that is automatically specified when monitoring data is reported.
                     * @param _announceInstance IP address or product instance ID that is automatically specified when monitoring data is reported.
                     * 
                     */
                    void SetAnnounceInstance(const std::string& _announceInstance);

                    /**
                     * 判断参数 AnnounceInstance 是否已赋值
                     * @return AnnounceInstance 是否已赋值
                     * 
                     */
                    bool AnnounceInstanceHasBeenSet() const;

                private:

                    /**
                     * A group of metrics and data.
                     */
                    std::vector<MetricDatum> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * IP address that is automatically specified when monitoring data is reported.
                     */
                    std::string m_announceIp;
                    bool m_announceIpHasBeenSet;

                    /**
                     * Timestamp that is automatically specified when monitoring data is reported.
                     */
                    uint64_t m_announceTimestamp;
                    bool m_announceTimestampHasBeenSet;

                    /**
                     * IP address or product instance ID that is automatically specified when monitoring data is reported.
                     */
                    std::string m_announceInstance;
                    bool m_announceInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_
