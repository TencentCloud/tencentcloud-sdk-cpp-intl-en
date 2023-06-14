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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_CREATENAMESPACEREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_CREATENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * CreateNamespace request structure.
                */
                class CreateNamespaceRequest : public AbstractModel
                {
                public:
                    CreateNamespaceRequest();
                    ~CreateNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param _namespaceName Namespace name
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return Vpc VPC name
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC name
                     * @param _vpc VPC name
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取Subnet list
                     * @return SubnetIds Subnet list
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Subnet list
                     * @param _subnetIds Subnet list
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Namespace description
                     * @return Description Namespace description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Namespace description
                     * @param _description Namespace description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取K8s version
                     * @return K8sVersion K8s version
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置K8s version
                     * @param _k8sVersion K8s version
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Whether to enable the TSW service.
                     * @return EnableTswTraceService Whether to enable the TSW service.
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置Whether to enable the TSW service.
                     * @param _enableTswTraceService Whether to enable the TSW service.
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                private:

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Subnet list
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Namespace description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * K8s version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Whether to enable the TSW service.
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_CREATENAMESPACEREQUEST_H_
