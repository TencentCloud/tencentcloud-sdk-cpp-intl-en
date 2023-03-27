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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ServicePortMappingItem.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Port mapping details
                */
                class ServicePortMapping : public AbstractModel
                {
                public:
                    ServicePortMapping();
                    ~ServicePortMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies how a layer-4 proxy is created.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Type Specifies how a layer-4 proxy is created.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies how a layer-4 proxy is created.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Type Specifies how a layer-4 proxy is created.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ServiceName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ServiceName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取VIP for access within the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterIp VIP for access within the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置VIP for access within the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ClusterIp VIP for access within the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClusterIp(const std::string& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取Cluster external IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExternalIp Cluster external IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetExternalIp() const;

                    /**
                     * 设置Cluster external IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ExternalIp Cluster external IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExternalIp(const std::string& _externalIp);

                    /**
                     * 判断参数 ExternalIp 是否已赋值
                     * @return ExternalIp 是否已赋值
                     */
                    bool ExternalIpHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Load balancer ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LoadBalanceId Load balancer ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLoadBalanceId() const;

                    /**
                     * 设置Load balancer ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LoadBalanceId Load balancer ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLoadBalanceId(const std::string& _loadBalanceId);

                    /**
                     * 判断参数 LoadBalanceId 是否已赋值
                     * @return LoadBalanceId 是否已赋值
                     */
                    bool LoadBalanceIdHasBeenSet() const;

                    /**
                     * 获取YAML contents
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Yaml YAML contents
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置YAML contents
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Yaml YAML contents
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取List of exposed ports
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Ports List of exposed ports
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置List of exposed ports
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Ports List of exposed ports
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Port mapping array 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PortMappingItemList Port mapping array 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServicePortMappingItem> GetPortMappingItemList() const;

                    /**
                     * 设置Port mapping array 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PortMappingItemList Port mapping array 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPortMappingItemList(const std::vector<ServicePortMappingItem>& _portMappingItemList);

                    /**
                     * 判断参数 PortMappingItemList 是否已赋值
                     * @return PortMappingItemList 是否已赋值
                     */
                    bool PortMappingItemListHasBeenSet() const;

                    /**
                     * 获取CLB domain name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExternalDomain CLB domain name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetExternalDomain() const;

                    /**
                     * 设置CLB domain name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ExternalDomain CLB domain name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExternalDomain(const std::string& _externalDomain);

                    /**
                     * 判断参数 ExternalDomain 是否已赋值
                     * @return ExternalDomain 是否已赋值
                     */
                    bool ExternalDomainHasBeenSet() const;

                private:

                    /**
                     * Specifies how a layer-4 proxy is created.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * VIP for access within the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * Cluster external IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_externalIp;
                    bool m_externalIpHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Load balancer ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalanceId;
                    bool m_loadBalanceIdHasBeenSet;

                    /**
                     * YAML contents
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * List of exposed ports
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Port mapping array 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServicePortMappingItem> m_portMappingItemList;
                    bool m_portMappingItemListHasBeenSet;

                    /**
                     * CLB domain name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_externalDomain;
                    bool m_externalDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_
