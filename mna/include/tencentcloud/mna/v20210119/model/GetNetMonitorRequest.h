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
                     * 获取<p>device id</p>
                     * @return DeviceId <p>device id</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>device id</p>
                     * @param _deviceId <p>device id</p>
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
                     * 获取<p>Start time.</p>
                     * @return BeginTime <p>Start time.</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _beginTime <p>Start time.</p>
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
                     * 获取<p>End time.</p>
                     * @return EndTime <p>End time.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _endTime <p>End time.</p>
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
                     * 获取<p>Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet Loss: "Loss": %, Latency: "RTT": ms)</p>
                     * @return Metrics <p>Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet Loss: "Loss": %, Latency: "RTT": ms)</p>
                     * 
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置<p>Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet Loss: "Loss": %, Latency: "RTT": ms)</p>
                     * @param _metrics <p>Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet Loss: "Loss": %, Latency: "RTT": ms)</p>
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
                     * 获取<p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not specified.</p>
                     * @return GatewayType <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not specified.</p>
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置<p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not specified.</p>
                     * @param _gatewayType <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not specified.</p>
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
                     * <p>device id</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Statistical metric (Uplink rate: "TxRate": bit/s, Downstream rate: "RxRate": bit/s, Packet Loss: "Loss": %, Latency: "RTT": ms)</p>
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not specified.</p>
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_
