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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/K8SLabel.h>
#include <tencentcloud/scf/v20180416/model/K8SToleration.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 
                */
                class NamespaceResourceEnvTKE : public AbstractModel
                {
                public:
                    NamespaceResourceEnvTKE();
                    ~NamespaceResourceEnvTKE() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ClusterID 
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置
                     * @param _clusterID 
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubnetID 
                     * 
                     */
                    std::string GetSubnetID() const;

                    /**
                     * 设置
                     * @param _subnetID 
                     * 
                     */
                    void SetSubnetID(const std::string& _subnetID);

                    /**
                     * 判断参数 SubnetID 是否已赋值
                     * @return SubnetID 是否已赋值
                     * 
                     */
                    bool SubnetIDHasBeenSet() const;

                    /**
                     * 获取
                     * @return Namespace 
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置
                     * @param _namespace 
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取
                     * @return DataPath 
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置
                     * @param _dataPath 
                     * 
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     * 
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取
                     * @return NodeSelector 
                     * 
                     */
                    std::vector<K8SLabel> GetNodeSelector() const;

                    /**
                     * 设置
                     * @param _nodeSelector 
                     * 
                     */
                    void SetNodeSelector(const std::vector<K8SLabel>& _nodeSelector);

                    /**
                     * 判断参数 NodeSelector 是否已赋值
                     * @return NodeSelector 是否已赋值
                     * 
                     */
                    bool NodeSelectorHasBeenSet() const;

                    /**
                     * 获取
                     * @return Tolerations 
                     * 
                     */
                    std::vector<K8SToleration> GetTolerations() const;

                    /**
                     * 设置
                     * @param _tolerations 
                     * 
                     */
                    void SetTolerations(const std::vector<K8SToleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Port 
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置
                     * @param _port 
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取
                     * @return PodTemplatePatch 
                     * 
                     */
                    std::string GetPodTemplatePatch() const;

                    /**
                     * 设置
                     * @param _podTemplatePatch 
                     * 
                     */
                    void SetPodTemplatePatch(const std::string& _podTemplatePatch);

                    /**
                     * 判断参数 PodTemplatePatch 是否已赋值
                     * @return PodTemplatePatch 是否已赋值
                     * 
                     */
                    bool PodTemplatePatchHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subnetID;
                    bool m_subnetIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<K8SLabel> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<K8SToleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_podTemplatePatch;
                    bool m_podTemplatePatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_
