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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/PortMapping.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
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
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name
                     * @param _name Service name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Available ports
                     * @return Ports Available ports
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置Available ports
                     * @param _ports Available ports
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Yaml contents
                     * @return Yaml Yaml contents
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Yaml contents
                     * @param _yaml Yaml contents
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取Service name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return ServiceName Service name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _serviceName Service name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Version name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return VersionName Version name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _versionName Version name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterIp Private IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetClusterIp() const;

                    /**
                     * 设置Private IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _clusterIp Private IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterIp(const std::vector<std::string>& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     * 
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return ExternalIp Public IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExternalIp() const;

                    /**
                     * 设置Public IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _externalIp Public IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExternalIp(const std::string& _externalIp);

                    /**
                     * 判断参数 ExternalIp 是否已赋值
                     * @return ExternalIp 是否已赋值
                     * 
                     */
                    bool ExternalIpHasBeenSet() const;

                    /**
                     * 获取The access type. Valid values:
- EXTERNAL (internet access)
- VPC（Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Type The access type. Valid values:
- EXTERNAL (internet access)
- VPC（Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The access type. Valid values:
- EXTERNAL (internet access)
- VPC（Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _type The access type. Valid values:
- EXTERNAL (internet access)
- VPC（Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return SubnetId Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _subnetId Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LoadBalanceId Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLoadBalanceId() const;

                    /**
                     * 设置Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _loadBalanceId Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLoadBalanceId(const std::string& _loadBalanceId);

                    /**
                     * 判断参数 LoadBalanceId 是否已赋值
                     * @return LoadBalanceId 是否已赋值
                     * 
                     */
                    bool LoadBalanceIdHasBeenSet() const;

                    /**
                     * 获取Port Mapping
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PortMappings Port Mapping
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<PortMapping> GetPortMappings() const;

                    /**
                     * 设置Port Mapping
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _portMappings Port Mapping
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPortMappings(const std::vector<PortMapping>& _portMappings);

                    /**
                     * 判断参数 PortMappings 是否已赋值
                     * @return PortMappings 是否已赋值
                     * 
                     */
                    bool PortMappingsHasBeenSet() const;

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
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Version name
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Private IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * Public IP
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_externalIp;
                    bool m_externalIpHasBeenSet;

                    /**
                     * The access type. Valid values:
- EXTERNAL (internet access)
- VPC（Intra-VPC access)
- CLUSTER (Intra-cluster access)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Subnet ID. It is filled when the access type is `VPC`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Load balancer ID. It is filled when the access type is `EXTERNAL` or `CLUSTER`. It’s created automatically by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_loadBalanceId;
                    bool m_loadBalanceIdHasBeenSet;

                    /**
                     * Port Mapping
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PortMapping> m_portMappings;
                    bool m_portMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_EKSSERVICE_H_
