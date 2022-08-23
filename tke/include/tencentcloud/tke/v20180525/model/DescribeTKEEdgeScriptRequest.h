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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeScript request structure.
                */
                class DescribeTKEEdgeScriptRequest : public AbstractModel
                {
                public:
                    DescribeTKEEdgeScriptRequest();
                    ~DescribeTKEEdgeScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ENI
                     * @return Interface ENI
                     */
                    std::string GetInterface() const;

                    /**
                     * 设置ENI
                     * @param Interface ENI
                     */
                    void SetInterface(const std::string& _interface);

                    /**
                     * 判断参数 Interface 是否已赋值
                     * @return Interface 是否已赋值
                     */
                    bool InterfaceHasBeenSet() const;

                    /**
                     * 获取Name of the name
                     * @return NodeName Name of the name
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Name of the name
                     * @param NodeName Name of the name
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Node configuration in JSON format 
                     * @return Config Node configuration in JSON format 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Node configuration in JSON format 
                     * @param Config Node configuration in JSON format 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取A legacy version of edgectl script can be downloaded. The latest version is downloaded by default. The version information can be checked in the script.
                     * @return ScriptVersion A legacy version of edgectl script can be downloaded. The latest version is downloaded by default. The version information can be checked in the script.
                     */
                    std::string GetScriptVersion() const;

                    /**
                     * 设置A legacy version of edgectl script can be downloaded. The latest version is downloaded by default. The version information can be checked in the script.
                     * @param ScriptVersion A legacy version of edgectl script can be downloaded. The latest version is downloaded by default. The version information can be checked in the script.
                     */
                    void SetScriptVersion(const std::string& _scriptVersion);

                    /**
                     * 判断参数 ScriptVersion 是否已赋值
                     * @return ScriptVersion 是否已赋值
                     */
                    bool ScriptVersionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ENI
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * Name of the name
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node configuration in JSON format 
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * A legacy version of edgectl script can be downloaded. The latest version is downloaded by default. The version information can be checked in the script.
                     */
                    std::string m_scriptVersion;
                    bool m_scriptVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_
