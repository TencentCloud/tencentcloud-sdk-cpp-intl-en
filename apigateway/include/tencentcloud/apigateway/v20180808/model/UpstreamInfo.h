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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of an upstream
                */
                class UpstreamInfo : public AbstractModel
                {
                public:
                    UpstreamInfo();
                    ~UpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the upstream
                     * @return UpstreamId Unique ID of the upstream
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置Unique ID of the upstream
                     * @param UpstreamId Unique ID of the upstream
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取Name of the upstream 
                     * @return UpstreamName Name of the upstream 
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置Name of the upstream 
                     * @param UpstreamName Name of the upstream 
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取Description of the upstream
                     * @return UpstreamDescription Description of the upstream
                     */
                    std::string GetUpstreamDescription() const;

                    /**
                     * 设置Description of the upstream
                     * @param UpstreamDescription Description of the upstream
                     */
                    void SetUpstreamDescription(const std::string& _upstreamDescription);

                    /**
                     * 判断参数 UpstreamDescription 是否已赋值
                     * @return UpstreamDescription 是否已赋值
                     */
                    bool UpstreamDescriptionHasBeenSet() const;

                    /**
                     * 获取Protocol
                     * @return Scheme Protocol
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Protocol
                     * @param Scheme Protocol
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Load balancing algorithm
                     * @return Algorithm Load balancing algorithm
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Load balancing algorithm
                     * @param Algorithm Load balancing algorithm
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID.
                     * @return UniqVpcId Unique VPC ID.
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique VPC ID.
                     * @param UniqVpcId Unique VPC ID.
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Number of retried attempts
                     * @return Retries Number of retried attempts
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置Number of retried attempts
                     * @param Retries Number of retried attempts
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取Backend nodes
                     * @return Nodes Backend nodes
                     */
                    std::vector<UpstreamNode> GetNodes() const;

                    /**
                     * 设置Backend nodes
                     * @param Nodes Backend nodes
                     */
                    void SetNodes(const std::vector<UpstreamNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param CreatedTime Creation time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Label
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Label
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Label
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags Label
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Health check configuration
Note: This field may return `null`, indicating that no valid value was found.
                     * @return HealthChecker Health check configuration
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    UpstreamHealthChecker GetHealthChecker() const;

                    /**
                     * 设置Health check configuration
Note: This field may return `null`, indicating that no valid value was found.
                     * @param HealthChecker Health check configuration
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetHealthChecker(const UpstreamHealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取Type of the upstream
                     * @return UpstreamType Type of the upstream
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Type of the upstream
                     * @param UpstreamType Type of the upstream
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Configuration of K8s service
Note: This field may return `null`, indicating that no valid value was found.
                     * @return K8sServices Configuration of K8s service
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<K8sService> GetK8sServices() const;

                    /**
                     * 设置Configuration of K8s service
Note: This field may return `null`, indicating that no valid value was found.
                     * @param K8sServices Configuration of K8s service
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetK8sServices(const std::vector<K8sService>& _k8sServices);

                    /**
                     * 判断参数 K8sServices 是否已赋值
                     * @return K8sServices 是否已赋值
                     */
                    bool K8sServicesHasBeenSet() const;

                    /**
                     * 获取Host of the upstream
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpstreamHost Host of the upstream
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置Host of the upstream
Note: This field may return `null`, indicating that no valid value was found.
                     * @param UpstreamHost Host of the upstream
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     */
                    bool UpstreamHostHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the upstream
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * Name of the upstream 
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * Description of the upstream
                     */
                    std::string m_upstreamDescription;
                    bool m_upstreamDescriptionHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Load balancing algorithm
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Unique VPC ID.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Number of retried attempts
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * Backend nodes
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Label
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Health check configuration
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    UpstreamHealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * Type of the upstream
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Configuration of K8s service
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<K8sService> m_k8sServices;
                    bool m_k8sServicesHasBeenSet;

                    /**
                     * Host of the upstream
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_
