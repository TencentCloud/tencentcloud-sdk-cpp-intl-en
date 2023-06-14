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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEINSTALLEDPLUGINSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEINSTALLEDPLUGINSREQUEST_H_

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
                * DescribeInstalledPlugins request structure.
                */
                class DescribeInstalledPluginsRequest : public AbstractModel
                {
                public:
                    DescribeInstalledPluginsRequest();
                    ~DescribeInstalledPluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TCMG instance ID, such as “grafana-kleu3gt0”.
                     * @return InstanceId TCMG instance ID, such as “grafana-kleu3gt0”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCMG instance ID, such as “grafana-kleu3gt0”.
                     * @param _instanceId TCMG instance ID, such as “grafana-kleu3gt0”.
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
                     * 获取Filter by plugin ID such as “grafana-piechart-panel”. You can view the IDs of installed plugins through the `DescribeInstalledPlugins` API.
                     * @return PluginId Filter by plugin ID such as “grafana-piechart-panel”. You can view the IDs of installed plugins through the `DescribeInstalledPlugins` API.
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Filter by plugin ID such as “grafana-piechart-panel”. You can view the IDs of installed plugins through the `DescribeInstalledPlugins` API.
                     * @param _pluginId Filter by plugin ID such as “grafana-piechart-panel”. You can view the IDs of installed plugins through the `DescribeInstalledPlugins` API.
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                private:

                    /**
                     * TCMG instance ID, such as “grafana-kleu3gt0”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter by plugin ID such as “grafana-piechart-panel”. You can view the IDs of installed plugins through the `DescribeInstalledPlugins` API.
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEINSTALLEDPLUGINSREQUEST_H_
