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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetNetMonitor request structure.
                */
                class GetNetMonitorRequest : public AbstractModel
                {
                public:
                    GetNetMonitorRequest();
                    ~GetNetMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return BeginTime Start time.
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time.
                     * @param _beginTime Start time.
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet loss: "Loss": %, Latency: "RTT": ms)
                     * @return Metrics Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet loss: "Loss": %, Latency: "RTT": ms)
                     * 
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet loss: "Loss": %, Latency: "RTT": ms)
                     * @param _metrics Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet loss: "Loss": %, Latency: "RTT": ms)
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
                     * 获取Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * @return GatewayType Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * @param _gatewayType Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                private:

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet loss: "Loss": %, Latency: "RTT": ms)
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_
