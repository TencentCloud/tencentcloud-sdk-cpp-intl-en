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
                * Resource pool options based on TKE
                */
                class NamespaceResourceEnvTKE : public AbstractModel
                {
                public:
                    NamespaceResourceEnvTKE();
                    ~NamespaceResourceEnvTKE() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterID Cluster ID
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
                     * 获取Subnet ID.
                     * @return SubnetID Subnet ID.
                     * 
                     */
                    std::string GetSubnetID() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetID Subnet ID.
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
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
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
                     * 获取Data storage address
                     * @return DataPath Data storage address
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置Data storage address
                     * @param _dataPath Data storage address
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
                     * 获取node selector
                     * @return NodeSelector node selector
                     * 
                     */
                    std::vector<K8SLabel> GetNodeSelector() const;

                    /**
                     * 设置node selector
                     * @param _nodeSelector node selector
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
                     * 获取Taint and toleration
                     * @return Tolerations Taint and toleration
                     * 
                     */
                    std::vector<K8SToleration> GetTolerations() const;

                    /**
                     * 设置Taint and toleration
                     * @param _tolerations Taint and toleration
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
                     * 获取Starting node port number occupied by the scf component
                     * @return Port Starting node port number occupied by the scf component
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Starting node port number occupied by the scf component
                     * @param _port Starting node port number occupied by the scf component
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
                     * 获取pod patch content in yaml format, for example
metadata:
  labels:
    key: value
                     * @return PodTemplatePatch pod patch content in yaml format, for example
metadata:
  labels:
    key: value
                     * 
                     */
                    std::string GetPodTemplatePatch() const;

                    /**
                     * 设置pod patch content in yaml format, for example
metadata:
  labels:
    key: value
                     * @param _podTemplatePatch pod patch content in yaml format, for example
metadata:
  labels:
    key: value
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
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_subnetID;
                    bool m_subnetIDHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Data storage address
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * node selector
                     */
                    std::vector<K8SLabel> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * Taint and toleration
                     */
                    std::vector<K8SToleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * Starting node port number occupied by the scf component
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * pod patch content in yaml format, for example
metadata:
  labels:
    key: value
                     */
                    std::string m_podTemplatePatch;
                    bool m_podTemplatePatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_
