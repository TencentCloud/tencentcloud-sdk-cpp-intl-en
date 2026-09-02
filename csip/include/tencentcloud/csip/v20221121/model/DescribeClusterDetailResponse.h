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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterListItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterDetail response structure.
                */
                class DescribeClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailResponse();
                    ~DescribeClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster basic information</p>
                     * @return ClusterBaseInfo <p>Cluster basic information</p>
                     * 
                     */
                    ClusterListItem GetClusterBaseInfo() const;

                    /**
                     * 判断参数 ClusterBaseInfo 是否已赋值
                     * @return ClusterBaseInfo 是否已赋值
                     * 
                     */
                    bool ClusterBaseInfoHasBeenSet() const;

                    /**
                     * 获取<p>Runtime component.</p>
                     * @return RuntimeComponent <p>Runtime component.</p>
                     * 
                     */
                    std::string GetRuntimeComponent() const;

                    /**
                     * 判断参数 RuntimeComponent 是否已赋值
                     * @return RuntimeComponent 是否已赋值
                     * 
                     */
                    bool RuntimeComponentHasBeenSet() const;

                    /**
                     * 获取<p>master ip</p>
                     * @return MasterIP <p>master ip</p>
                     * 
                     */
                    std::string GetMasterIP() const;

                    /**
                     * 判断参数 MasterIP 是否已赋值
                     * @return MasterIP 是否已赋值
                     * 
                     */
                    bool MasterIPHasBeenSet() const;

                    /**
                     * 获取<p>Number of nodes</p>
                     * @return NodeCount <p>Number of nodes</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of namespaces</p>
                     * @return NamespaceCount <p>Number of namespaces</p>
                     * 
                     */
                    uint64_t GetNamespaceCount() const;

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     * 
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of pods</p>
                     * @return PodCount <p>Number of pods</p>
                     * 
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of containers</p>
                     * @return ContainerCount <p>Number of containers</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of services</p>
                     * @return ServiceCount <p>Number of services</p>
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of ingresses</p>
                     * @return IngressCount <p>Number of ingresses</p>
                     * 
                     */
                    uint64_t GetIngressCount() const;

                    /**
                     * 判断参数 IngressCount 是否已赋值
                     * @return IngressCount 是否已赋值
                     * 
                     */
                    bool IngressCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of images.</p>
                     * @return ImageCount <p>Number of images.</p>
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of system components</p>
                     * @return SystemComponentCount <p>Number of system components</p>
                     * 
                     */
                    uint64_t GetSystemComponentCount() const;

                    /**
                     * 判断参数 SystemComponentCount 是否已赋值
                     * @return SystemComponentCount 是否已赋值
                     * 
                     */
                    bool SystemComponentCountHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster basic information</p>
                     */
                    ClusterListItem m_clusterBaseInfo;
                    bool m_clusterBaseInfoHasBeenSet;

                    /**
                     * <p>Runtime component.</p>
                     */
                    std::string m_runtimeComponent;
                    bool m_runtimeComponentHasBeenSet;

                    /**
                     * <p>master ip</p>
                     */
                    std::string m_masterIP;
                    bool m_masterIPHasBeenSet;

                    /**
                     * <p>Number of nodes</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Number of namespaces</p>
                     */
                    uint64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * <p>Number of pods</p>
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>Number of containers</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>Number of services</p>
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>Number of ingresses</p>
                     */
                    uint64_t m_ingressCount;
                    bool m_ingressCountHasBeenSet;

                    /**
                     * <p>Number of images.</p>
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * <p>Number of system components</p>
                     */
                    uint64_t m_systemComponentCount;
                    bool m_systemComponentCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
