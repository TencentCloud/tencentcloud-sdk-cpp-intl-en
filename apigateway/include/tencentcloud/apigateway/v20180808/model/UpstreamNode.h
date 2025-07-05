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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Upstream node metadata
                */
                class UpstreamNode : public AbstractModel
                {
                public:
                    UpstreamNode();
                    ~UpstreamNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP or domain name
                     * @return Host IP or domain name
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP or domain name
                     * @param _host IP or domain name
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取The port number. Range: [0, 65535]
                     * @return Port The port number. Range: [0, 65535]
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置The port number. Range: [0, 65535]
                     * @param _port The port number. Range: [0, 65535]
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
                     * 获取Value range: [0, 100]. `0` refers to disable it.
                     * @return Weight Value range: [0, 100]. `0` refers to disable it.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Value range: [0, 100]. `0` refers to disable it.
                     * @param _weight Value range: [0, 100]. `0` refers to disable it.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取CVM Instance ID
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return VmInstanceId CVM Instance ID
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVmInstanceId() const;

                    /**
                     * 设置CVM Instance ID
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _vmInstanceId CVM Instance ID
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    void SetVmInstanceId(const std::string& _vmInstanceId);

                    /**
                     * 判断参数 VmInstanceId 是否已赋值
                     * @return VmInstanceId 是否已赋值
                     * 
                     */
                    bool VmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Health status of the node. Values: `OFF`, `HEALTHY`, `UNHEALTHY` and `NO_DATA`. It’s not required for creating and editing actions. It only supports VPC upstreams.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return Healthy Health status of the node. Values: `OFF`, `HEALTHY`, `UNHEALTHY` and `NO_DATA`. It’s not required for creating and editing actions. It only supports VPC upstreams.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置Health status of the node. Values: `OFF`, `HEALTHY`, `UNHEALTHY` and `NO_DATA`. It’s not required for creating and editing actions. It only supports VPC upstreams.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _healthy Health status of the node. Values: `OFF`, `HEALTHY`, `UNHEALTHY` and `NO_DATA`. It’s not required for creating and editing actions. It only supports VPC upstreams.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取TKE container name
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return ServiceName TKE container name
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置TKE container name
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _serviceName TKE container name
Note: This field may return `NULL`, indicating that no valid value was found.
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
                     * 获取TKE namespace
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return NameSpace TKE namespace
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置TKE namespace
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _nameSpace TKE namespace
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取ID of the TKE cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ClusterId ID of the TKE cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the TKE cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _clusterId ID of the TKE cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Node source. Valid value: `K8S`
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return Source Node source. Valid value: `K8S`
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Node source. Valid value: `K8S`
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _source Node source. Valid value: `K8S`
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取The unique service name in API Gateway
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UniqueServiceName The unique service name in API Gateway
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUniqueServiceName() const;

                    /**
                     * 设置The unique service name in API Gateway
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _uniqueServiceName The unique service name in API Gateway
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUniqueServiceName(const std::string& _uniqueServiceName);

                    /**
                     * 判断参数 UniqueServiceName 是否已赋值
                     * @return UniqueServiceName 是否已赋值
                     * 
                     */
                    bool UniqueServiceNameHasBeenSet() const;

                private:

                    /**
                     * IP or domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The port number. Range: [0, 65535]
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Value range: [0, 100]. `0` refers to disable it.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * CVM Instance ID
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_vmInstanceId;
                    bool m_vmInstanceIdHasBeenSet;

                    /**
                     * Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Health status of the node. Values: `OFF`, `HEALTHY`, `UNHEALTHY` and `NO_DATA`. It’s not required for creating and editing actions. It only supports VPC upstreams.
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * TKE container name
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * TKE namespace
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * ID of the TKE cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node source. Valid value: `K8S`
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * The unique service name in API Gateway
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_uniqueServiceName;
                    bool m_uniqueServiceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_
