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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/RuntimeConfig.h>
#include <tencentcloud/tke/v20220501/model/InstanceExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Describes the configuration and related information of K8s cluster.
                */
                class InstanceAdvancedSettings : public AbstractModel
                {
                public:
                    InstanceAdvancedSettings();
                    ~InstanceAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取When the node is in the podCIDR size customization mode, you can specify the upper limit of the number of pods running on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DesiredPodNumber When the node is in the podCIDR size customization mode, you can specify the upper limit of the number of pods running on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDesiredPodNumber() const;

                    /**
                     * 设置When the node is in the podCIDR size customization mode, you can specify the upper limit of the number of pods running on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _desiredPodNumber When the node is in the podCIDR size customization mode, you can specify the upper limit of the number of pods running on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDesiredPodNumber(const int64_t& _desiredPodNumber);

                    /**
                     * 判断参数 DesiredPodNumber 是否已赋值
                     * @return DesiredPodNumber 是否已赋值
                     * 
                     */
                    bool DesiredPodNumberHasBeenSet() const;

                    /**
                     * 获取base64 encoded user script, executed before initializing the node and currently effective only for adding existing nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PreStartUserScript base64 encoded user script, executed before initializing the node and currently effective only for adding existing nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置base64 encoded user script, executed before initializing the node and currently effective only for adding existing nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _preStartUserScript base64 encoded user script, executed before initializing the node and currently effective only for adding existing nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                    /**
                     * 获取Runtime description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return RuntimeConfig Runtime description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    RuntimeConfig GetRuntimeConfig() const;

                    /**
                     * 设置Runtime description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _runtimeConfig Runtime description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuntimeConfig(const RuntimeConfig& _runtimeConfig);

                    /**
                     * 判断参数 RuntimeConfig 是否已赋值
                     * @return RuntimeConfig 是否已赋值
                     * 
                     */
                    bool RuntimeConfigHasBeenSet() const;

                    /**
                     * 获取Base64-encoded user script. This script is executed after the k8s components start running. Users must ensure the reenterable and retry logic of the script. The script and the log files generated by it can be viewed at the /data/ccs_userscript/ path of the node. If a node must be initialized before joining the scheduling, it can be used in conjunction with the unschedulable parameter. After initializing with userScript, add the command `kubectl uncordon nodename --kubeconfig=/root/.kube/config` to add the node to scheduling.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UserScript Base64-encoded user script. This script is executed after the k8s components start running. Users must ensure the reenterable and retry logic of the script. The script and the log files generated by it can be viewed at the /data/ccs_userscript/ path of the node. If a node must be initialized before joining the scheduling, it can be used in conjunction with the unschedulable parameter. After initializing with userScript, add the command `kubectl uncordon nodename --kubeconfig=/root/.kube/config` to add the node to scheduling.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Base64-encoded user script. This script is executed after the k8s components start running. Users must ensure the reenterable and retry logic of the script. The script and the log files generated by it can be viewed at the /data/ccs_userscript/ path of the node. If a node must be initialized before joining the scheduling, it can be used in conjunction with the unschedulable parameter. After initializing with userScript, add the command `kubectl uncordon nodename --kubeconfig=/root/.kube/config` to add the node to scheduling.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _userScript Base64-encoded user script. This script is executed after the k8s components start running. Users must ensure the reenterable and retry logic of the script. The script and the log files generated by it can be viewed at the /data/ccs_userscript/ path of the node. If a node must be initialized before joining the scheduling, it can be used in conjunction with the unschedulable parameter. After initializing with userScript, add the command `kubectl uncordon nodename --kubeconfig=/root/.kube/config` to add the node to scheduling.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取Node-related custom parameter information.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ExtraArgs Node-related custom parameter information.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Node-related custom parameter information.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _extraArgs Node-related custom parameter information.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                private:

                    /**
                     * When the node is in the podCIDR size customization mode, you can specify the upper limit of the number of pods running on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_desiredPodNumber;
                    bool m_desiredPodNumberHasBeenSet;

                    /**
                     * base64 encoded user script, executed before initializing the node and currently effective only for adding existing nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * Runtime description
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    RuntimeConfig m_runtimeConfig;
                    bool m_runtimeConfigHasBeenSet;

                    /**
                     * Base64-encoded user script. This script is executed after the k8s components start running. Users must ensure the reenterable and retry logic of the script. The script and the log files generated by it can be viewed at the /data/ccs_userscript/ path of the node. If a node must be initialized before joining the scheduling, it can be used in conjunction with the unschedulable parameter. After initializing with userScript, add the command `kubectl uncordon nodename --kubeconfig=/root/.kube/config` to add the node to scheduling.

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * Node-related custom parameter information.

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCEADVANCEDSETTINGS_H_
