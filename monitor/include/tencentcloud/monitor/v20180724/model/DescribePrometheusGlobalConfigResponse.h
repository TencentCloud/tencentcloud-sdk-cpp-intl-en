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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_

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
                * DescribePrometheusGlobalConfig response structure.
                */
                class DescribePrometheusGlobalConfigResponse : public AbstractModel
                {
                public:
                    DescribePrometheusGlobalConfigResponse();
                    ~DescribePrometheusGlobalConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration content
                     * @return Config Configuration content
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取List of service monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceMonitors List of service monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取List of pod monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodMonitors List of pod monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取List of raw jobs and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RawJobs List of raw jobs and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取List of probes and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Probes List of probes and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> GetProbes() const;

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     */
                    bool ProbesHasBeenSet() const;

                private:

                    /**
                     * Configuration content
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * List of service monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * List of pod monitors and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * List of raw jobs and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * List of probes and the corresponding targets information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_probes;
                    bool m_probesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_
