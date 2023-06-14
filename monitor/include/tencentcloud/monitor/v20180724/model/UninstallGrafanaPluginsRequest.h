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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_

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
                * UninstallGrafanaPlugins request structure.
                */
                class UninstallGrafanaPluginsRequest : public AbstractModel
                {
                public:
                    UninstallGrafanaPluginsRequest();
                    ~UninstallGrafanaPluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of plugin IDs, such as "PluginIds": [ "grafana-clock-panel" ]. The plugin ID can be obtained through the `DescribePluginOverviews` API.
                     * @return PluginIds Array of plugin IDs, such as "PluginIds": [ "grafana-clock-panel" ]. The plugin ID can be obtained through the `DescribePluginOverviews` API.
                     * 
                     */
                    std::vector<std::string> GetPluginIds() const;

                    /**
                     * 设置Array of plugin IDs, such as "PluginIds": [ "grafana-clock-panel" ]. The plugin ID can be obtained through the `DescribePluginOverviews` API.
                     * @param _pluginIds Array of plugin IDs, such as "PluginIds": [ "grafana-clock-panel" ]. The plugin ID can be obtained through the `DescribePluginOverviews` API.
                     * 
                     */
                    void SetPluginIds(const std::vector<std::string>& _pluginIds);

                    /**
                     * 判断参数 PluginIds 是否已赋值
                     * @return PluginIds 是否已赋值
                     * 
                     */
                    bool PluginIdsHasBeenSet() const;

                    /**
                     * 获取TCMG instance ID, such as “grafana-abcdefg”.
                     * @return InstanceId TCMG instance ID, such as “grafana-abcdefg”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCMG instance ID, such as “grafana-abcdefg”.
                     * @param _instanceId TCMG instance ID, such as “grafana-abcdefg”.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Array of plugin IDs, such as "PluginIds": [ "grafana-clock-panel" ]. The plugin ID can be obtained through the `DescribePluginOverviews` API.
                     */
                    std::vector<std::string> m_pluginIds;
                    bool m_pluginIdsHasBeenSet;

                    /**
                     * TCMG instance ID, such as “grafana-abcdefg”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_
