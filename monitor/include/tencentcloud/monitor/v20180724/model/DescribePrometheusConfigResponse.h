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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusConfigItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusConfig response structure.
                */
                class DescribePrometheusConfigResponse : public AbstractModel
                {
                public:
                    DescribePrometheusConfigResponse();
                    ~DescribePrometheusConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Global configuration
                     * @return Config Global configuration
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取ServiceMonitor configuration
                     * @return ServiceMonitors ServiceMonitor configuration
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取PodMonitor configuration
                     * @return PodMonitors PodMonitor configuration
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取Raw jobs
                     * @return RawJobs Raw jobs
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取Probes
                     * @return Probes Probes
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetProbes() const;

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     * 
                     */
                    bool ProbesHasBeenSet() const;

                private:

                    /**
                     * Global configuration
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * ServiceMonitor configuration
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * PodMonitor configuration
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * Raw jobs
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * Probes
                     */
                    std::vector<PrometheusConfigItem> m_probes;
                    bool m_probesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_
