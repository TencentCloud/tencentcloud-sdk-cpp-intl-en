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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMRESULTINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamHealthChecker.h>
#include <tencentcloud/apigateway/v20180808/model/K8sService.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Upstream details
                */
                class ModifyUpstreamResultInfo : public AbstractModel
                {
                public:
                    ModifyUpstreamResultInfo();
                    ~ModifyUpstreamResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique upstream ID
                     * @return UpstreamId Unique upstream ID
                     * 
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置Unique upstream ID
                     * @param _upstreamId Unique upstream ID
                     * 
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     * 
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取Upstream name
                     * @return UpstreamName Upstream name
                     * 
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置Upstream name
                     * @param _upstreamName Upstream name
                     * 
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     * 
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取Upstream description
                     * @return UpstreamDescription Upstream description
                     * 
                     */
                    std::string GetUpstreamDescription() const;

                    /**
                     * 设置Upstream description
                     * @param _upstreamDescription Upstream description
                     * 
                     */
                    void SetUpstreamDescription(const std::string& _upstreamDescription);

                    /**
                     * 判断参数 UpstreamDescription 是否已赋值
                     * @return UpstreamDescription 是否已赋值
                     * 
                     */
                    bool UpstreamDescriptionHasBeenSet() const;

                    /**
                     * 获取Backend protocol. Valid values: `HTTP`, `HTTPS`
                     * @return Scheme Backend protocol. Valid values: `HTTP`, `HTTPS`
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Backend protocol. Valid values: `HTTP`, `HTTPS`
                     * @param _scheme Backend protocol. Valid values: `HTTP`, `HTTPS`
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Load balancing algorithm. Valid value: `ROUND_ROBIN`
                     * @return Algorithm Load balancing algorithm. Valid value: `ROUND_ROBIN`
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Load balancing algorithm. Valid value: `ROUND_ROBIN`
                     * @param _algorithm Load balancing algorithm. Valid value: `ROUND_ROBIN`
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID
                     * @return UniqVpcId Unique VPC ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique VPC ID
                     * @param _uniqVpcId Unique VPC ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Number of retry attempts
                     * @return Retries Number of retry attempts
                     * 
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置Number of retry attempts
                     * @param _retries Number of retry attempts
                     * 
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取Backend nodes
                     * @return Nodes Backend nodes
                     * 
                     */
                    std::vector<UpstreamNode> GetNodes() const;

                    /**
                     * 设置Backend nodes
                     * @param _nodes Backend nodes
                     * 
                     */
                    void SetNodes(const std::vector<UpstreamNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Health check configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthChecker Health check configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UpstreamHealthChecker GetHealthChecker() const;

                    /**
                     * 设置Health check configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthChecker Health check configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthChecker(const UpstreamHealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     * 
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取Upstream type. Valid values: `IP_PORT`, `K8S`
                     * @return UpstreamType Upstream type. Valid values: `IP_PORT`, `K8S`
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Upstream type. Valid values: `IP_PORT`, `K8S`
                     * @param _upstreamType Upstream type. Valid values: `IP_PORT`, `K8S`
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Configuration of TKE service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return K8sServices Configuration of TKE service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<K8sService> GetK8sServices() const;

                    /**
                     * 设置Configuration of TKE service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _k8sServices Configuration of TKE service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetK8sServices(const std::vector<K8sService>& _k8sServices);

                    /**
                     * 判断参数 K8sServices 是否已赋值
                     * @return K8sServices 是否已赋值
                     * 
                     */
                    bool K8sServicesHasBeenSet() const;

                    /**
                     * 获取The Host header that the gateway forwards to the upstream
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamHost The Host header that the gateway forwards to the upstream
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置The Host header that the gateway forwards to the upstream
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamHost The Host header that the gateway forwards to the upstream
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     * 
                     */
                    bool UpstreamHostHasBeenSet() const;

                private:

                    /**
                     * Unique upstream ID
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * Upstream name
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * Upstream description
                     */
                    std::string m_upstreamDescription;
                    bool m_upstreamDescriptionHasBeenSet;

                    /**
                     * Backend protocol. Valid values: `HTTP`, `HTTPS`
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Load balancing algorithm. Valid value: `ROUND_ROBIN`
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Unique VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Number of retry attempts
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * Backend nodes
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Health check configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UpstreamHealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * Upstream type. Valid values: `IP_PORT`, `K8S`
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Configuration of TKE service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<K8sService> m_k8sServices;
                    bool m_k8sServicesHasBeenSet;

                    /**
                     * The Host header that the gateway forwards to the upstream
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMRESULTINFO_H_
