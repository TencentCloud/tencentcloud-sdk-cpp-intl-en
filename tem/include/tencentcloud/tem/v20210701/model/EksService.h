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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_EKSSERVICE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_EKSSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/PortMapping.h>
#include <tencentcloud/tem/v20210701/model/ServicePortMapping.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * EKS service information
                */
                class EksService : public AbstractModel
                {
                public:
                    EksService();
                    ~EksService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service name
                     * @return Name Service name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name
                     * @param Name Service name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Available ports
                     * @return Ports Available ports
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置Available ports
                     * @param Ports Available ports
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Yaml contents
                     * @return Yaml Yaml contents
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Yaml contents
                     * @param Yaml Yaml contents
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取Service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationName Service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationName Service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Version name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VersionName Version name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param VersionName Version name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterIp Private IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetClusterIp() const;

                    /**
                     * 设置Private IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ClusterIp Private IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClusterIp(const std::vector<std::string>& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExternalIp Public IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetExternalIp() const;

                    /**
                     * 设置Public IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ExternalIp Public IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExternalIp(const std::string& _externalIp);

                    /**
                     * 判断参数 ExternalIp 是否已赋值
                     * @return ExternalIp 是否已赋值
                     */
                    bool ExternalIpHasBeenSet() const;

                    /**
                     * 获取The access type. Valid values:
- EXTERNAL (internet access)
- VPC (Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Type The access type. Valid values:
- EXTERNAL (internet access)
- VPC (Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The access type. Valid values:
- EXTERNAL (internet access)
- VPC (Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Type The access type. Valid values:
- EXTERNAL (internet access)
- VPC (Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LoadBalanceId Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLoadBalanceId() const;

                    /**
                     * 设置Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LoadBalanceId Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLoadBalanceId(const std::string& _loadBalanceId);

                    /**
                     * 判断参数 LoadBalanceId 是否已赋值
                     * @return LoadBalanceId 是否已赋值
                     */
                    bool LoadBalanceIdHasBeenSet() const;

                    /**
                     * 获取Port mapping
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PortMappings Port mapping
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<PortMapping> GetPortMappings() const;

                    /**
                     * 设置Port mapping
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PortMappings Port mapping
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPortMappings(const std::vector<PortMapping>& _portMappings);

                    /**
                     * 判断参数 PortMappings 是否已赋值
                     * @return PortMappings 是否已赋值
                     */
                    bool PortMappingsHasBeenSet() const;

                    /**
                     * 获取Details of each type of access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ServicePortMappingList Details of each type of access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServicePortMapping> GetServicePortMappingList() const;

                    /**
                     * 设置Details of each type of access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ServicePortMappingList Details of each type of access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetServicePortMappingList(const std::vector<ServicePortMapping>& _servicePortMappingList);

                    /**
                     * 判断参数 ServicePortMappingList 是否已赋值
                     * @return ServicePortMappingList 是否已赋值
                     */
                    bool ServicePortMappingListHasBeenSet() const;

                    /**
                     * 获取Flush all types
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FlushAll Flush all types
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetFlushAll() const;

                    /**
                     * 设置Flush all types
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param FlushAll Flush all types
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFlushAll(const bool& _flushAll);

                    /**
                     * 判断参数 FlushAll 是否已赋值
                     * @return FlushAll 是否已赋值
                     */
                    bool FlushAllHasBeenSet() const;

                    /**
                     * 获取`0`: Do not inject. `1`: Inject registry information automatically for the next deployment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableRegistryNextDeploy `0`: Do not inject. `1`: Inject registry information automatically for the next deployment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEnableRegistryNextDeploy() const;

                    /**
                     * 设置`0`: Do not inject. `1`: Inject registry information automatically for the next deployment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnableRegistryNextDeploy `0`: Do not inject. `1`: Inject registry information automatically for the next deployment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnableRegistryNextDeploy(const int64_t& _enableRegistryNextDeploy);

                    /**
                     * 判断参数 EnableRegistryNextDeploy 是否已赋值
                     * @return EnableRegistryNextDeploy 是否已赋值
                     */
                    bool EnableRegistryNextDeployHasBeenSet() const;

                    /**
                     * 获取The application ID returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationId The application ID returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置The application ID returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationId The application ID returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Whether all the application IPs are ready
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AllIpDone Whether all the application IPs are ready
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetAllIpDone() const;

                    /**
                     * 设置Whether all the application IPs are ready
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param AllIpDone Whether all the application IPs are ready
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAllIpDone(const bool& _allIpDone);

                    /**
                     * 判断参数 AllIpDone 是否已赋值
                     * @return AllIpDone 是否已赋值
                     */
                    bool AllIpDoneHasBeenSet() const;

                private:

                    /**
                     * Service name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Available ports
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Yaml contents
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * Service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Version name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Private IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * Public IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_externalIp;
                    bool m_externalIpHasBeenSet;

                    /**
                     * The access type. Valid values:
- EXTERNAL (internet access)
- VPC (Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalanceId;
                    bool m_loadBalanceIdHasBeenSet;

                    /**
                     * Port mapping
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<PortMapping> m_portMappings;
                    bool m_portMappingsHasBeenSet;

                    /**
                     * Details of each type of access configuration
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServicePortMapping> m_servicePortMappingList;
                    bool m_servicePortMappingListHasBeenSet;

                    /**
                     * Flush all types
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_flushAll;
                    bool m_flushAllHasBeenSet;

                    /**
                     * `0`: Do not inject. `1`: Inject registry information automatically for the next deployment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableRegistryNextDeploy;
                    bool m_enableRegistryNextDeployHasBeenSet;

                    /**
                     * The application ID returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Whether all the application IPs are ready
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_allIpDone;
                    bool m_allIpDoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_EKSSERVICE_H_
