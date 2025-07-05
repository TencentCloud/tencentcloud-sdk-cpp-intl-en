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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdatePlugins request structure.
                */
                class UpdatePluginsRequest : public AbstractModel
                {
                public:
                    UpdatePluginsRequest();
                    ~UpdatePluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取List of names of the plugins to be installed
                     * @return InstallPluginList List of names of the plugins to be installed
                     * 
                     */
                    std::vector<std::string> GetInstallPluginList() const;

                    /**
                     * 设置List of names of the plugins to be installed
                     * @param _installPluginList List of names of the plugins to be installed
                     * 
                     */
                    void SetInstallPluginList(const std::vector<std::string>& _installPluginList);

                    /**
                     * 判断参数 InstallPluginList 是否已赋值
                     * @return InstallPluginList 是否已赋值
                     * 
                     */
                    bool InstallPluginListHasBeenSet() const;

                    /**
                     * 获取List of names of the plugins to be uninstalled
                     * @return RemovePluginList List of names of the plugins to be uninstalled
                     * 
                     */
                    std::vector<std::string> GetRemovePluginList() const;

                    /**
                     * 设置List of names of the plugins to be uninstalled
                     * @param _removePluginList List of names of the plugins to be uninstalled
                     * 
                     */
                    void SetRemovePluginList(const std::vector<std::string>& _removePluginList);

                    /**
                     * 判断参数 RemovePluginList 是否已赋值
                     * @return RemovePluginList 是否已赋值
                     * 
                     */
                    bool RemovePluginListHasBeenSet() const;

                    /**
                     * 获取Whether to force restart the cluster. The default value is `false`.
                     * @return ForceRestart Whether to force restart the cluster. The default value is `false`.
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart the cluster. The default value is `false`.
                     * @param _forceRestart Whether to force restart the cluster. The default value is `false`.
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取Whether to reinstall the cluster. The default value is `false`.
                     * @return ForceUpdate Whether to reinstall the cluster. The default value is `false`.
                     * 
                     */
                    bool GetForceUpdate() const;

                    /**
                     * 设置Whether to reinstall the cluster. The default value is `false`.
                     * @param _forceUpdate Whether to reinstall the cluster. The default value is `false`.
                     * 
                     */
                    void SetForceUpdate(const bool& _forceUpdate);

                    /**
                     * 判断参数 ForceUpdate 是否已赋值
                     * @return ForceUpdate 是否已赋值
                     * 
                     */
                    bool ForceUpdateHasBeenSet() const;

                    /**
                     * 获取0: system plugin
                     * @return PluginType 0: system plugin
                     * 
                     */
                    uint64_t GetPluginType() const;

                    /**
                     * 设置0: system plugin
                     * @param _pluginType 0: system plugin
                     * 
                     */
                    void SetPluginType(const uint64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of names of the plugins to be installed
                     */
                    std::vector<std::string> m_installPluginList;
                    bool m_installPluginListHasBeenSet;

                    /**
                     * List of names of the plugins to be uninstalled
                     */
                    std::vector<std::string> m_removePluginList;
                    bool m_removePluginListHasBeenSet;

                    /**
                     * Whether to force restart the cluster. The default value is `false`.
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * Whether to reinstall the cluster. The default value is `false`.
                     */
                    bool m_forceUpdate;
                    bool m_forceUpdateHasBeenSet;

                    /**
                     * 0: system plugin
                     */
                    uint64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_
