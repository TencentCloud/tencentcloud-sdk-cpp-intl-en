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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>
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
                * CreateUpstream request structure.
                */
                class CreateUpstreamRequest : public AbstractModel
                {
                public:
                    CreateUpstreamRequest();
                    ~CreateUpstreamRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Load balancing algorithm. Valid value: `ROUND-ROBIN`
                     * @return Algorithm Load balancing algorithm. Valid value: `ROUND-ROBIN`
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Load balancing algorithm. Valid value: `ROUND-ROBIN`
                     * @param _algorithm Load balancing algorithm. Valid value: `ROUND-ROBIN`
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
                     * 获取Upstream access type. Valid values: `IP_PORT`, `K8S`
                     * @return UpstreamType Upstream access type. Valid values: `IP_PORT`, `K8S`
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Upstream access type. Valid values: `IP_PORT`, `K8S`
                     * @param _upstreamType Upstream access type. Valid values: `IP_PORT`, `K8S`
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
                     * 获取Retry attempts. It defaults to `3`.
                     * @return Retries Retry attempts. It defaults to `3`.
                     * 
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置Retry attempts. It defaults to `3`.
                     * @param _retries Retry attempts. It defaults to `3`.
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
                     * 获取The Host request header that forwarded from the gateway to backend
                     * @return UpstreamHost The Host request header that forwarded from the gateway to backend
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置The Host request header that forwarded from the gateway to backend
                     * @param _upstreamHost The Host request header that forwarded from the gateway to backend
                     * 
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     * 
                     */
                    bool UpstreamHostHasBeenSet() const;

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
                     * 获取Label
                     * @return Tags Label
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Label
                     * @param _tags Label
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Health check configuration
                     * @return HealthChecker Health check configuration
                     * 
                     */
                    UpstreamHealthChecker GetHealthChecker() const;

                    /**
                     * 设置Health check configuration
                     * @param _healthChecker Health check configuration
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
                     * 获取Configuration of TKE service
                     * @return K8sService Configuration of TKE service
                     * 
                     */
                    std::vector<K8sService> GetK8sService() const;

                    /**
                     * 设置Configuration of TKE service
                     * @param _k8sService Configuration of TKE service
                     * 
                     */
                    void SetK8sService(const std::vector<K8sService>& _k8sService);

                    /**
                     * 判断参数 K8sService 是否已赋值
                     * @return K8sService 是否已赋值
                     * 
                     */
                    bool K8sServiceHasBeenSet() const;

                private:

                    /**
                     * Backend protocol. Valid values: `HTTP`, `HTTPS`
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Load balancing algorithm. Valid value: `ROUND-ROBIN`
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Unique VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

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
                     * Upstream access type. Valid values: `IP_PORT`, `K8S`
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Retry attempts. It defaults to `3`.
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * The Host request header that forwarded from the gateway to backend
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * Backend nodes
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Label
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Health check configuration
                     */
                    UpstreamHealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * Configuration of TKE service
                     */
                    std::vector<K8sService> m_k8sService;
                    bool m_k8sServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_
