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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Edge cluster advanced settings
                */
                class EdgeClusterAdvancedSettings : public AbstractModel
                {
                public:
                    EdgeClusterAdvancedSettings();
                    ~EdgeClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExtraArgs Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    EdgeClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _extraArgs Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraArgs(const EdgeClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取Runtime type. Valid values: "docker" (default), "containerd".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Runtime Runtime type. Valid values: "docker" (default), "containerd".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Runtime type. Valid values: "docker" (default), "containerd".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _runtime Runtime type. Valid values: "docker" (default), "containerd".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Forwarding mode of kube-proxy. Valid values: "iptables" (default), "ipvs".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ProxyMode Forwarding mode of kube-proxy. Valid values: "iptables" (default), "ipvs".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyMode() const;

                    /**
                     * 设置Forwarding mode of kube-proxy. Valid values: "iptables" (default), "ipvs".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _proxyMode Forwarding mode of kube-proxy. Valid values: "iptables" (default), "ipvs".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxyMode(const std::string& _proxyMode);

                    /**
                     * 判断参数 ProxyMode 是否已赋值
                     * @return ProxyMode 是否已赋值
                     * 
                     */
                    bool ProxyModeHasBeenSet() const;

                private:

                    /**
                     * Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EdgeClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * Runtime type. Valid values: "docker" (default), "containerd".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Forwarding mode of kube-proxy. Valid values: "iptables" (default), "ipvs".
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyMode;
                    bool m_proxyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
