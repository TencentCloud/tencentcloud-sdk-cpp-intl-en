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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROMETHEUSMANAGEDGRAFANAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROMETHEUSMANAGEDGRAFANAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * BindPrometheusManagedGrafana request structure.
                */
                class BindPrometheusManagedGrafanaRequest : public AbstractModel
                {
                public:
                    BindPrometheusManagedGrafanaRequest();
                    ~BindPrometheusManagedGrafanaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus instance ID
                     * @return InstanceId Prometheus instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus instance ID
                     * @param _instanceId Prometheus instance ID
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
                     * 获取Grafana instance ID
                     * @return GrafanaId Grafana instance ID
                     * 
                     */
                    std::string GetGrafanaId() const;

                    /**
                     * 设置Grafana instance ID
                     * @param _grafanaId Grafana instance ID
                     * 
                     */
                    void SetGrafanaId(const std::string& _grafanaId);

                    /**
                     * 判断参数 GrafanaId 是否已赋值
                     * @return GrafanaId 是否已赋值
                     * 
                     */
                    bool GrafanaIdHasBeenSet() const;

                private:

                    /**
                     * Prometheus instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Grafana instance ID
                     */
                    std::string m_grafanaId;
                    bool m_grafanaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROMETHEUSMANAGEDGRAFANAREQUEST_H_
