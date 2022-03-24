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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>
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
                     * 获取Backend protocol. Values: `HTTP`, `HTTPS`
                     * @return Scheme Backend protocol. Values: `HTTP`, `HTTPS`
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Backend protocol. Values: `HTTP`, `HTTPS`
                     * @param Scheme Backend protocol. Values: `HTTP`, `HTTPS`
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取The balancing method can only be `ROUND_ROBIN`.
                     * @return Algorithm The balancing method can only be `ROUND_ROBIN`.
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置The balancing method can only be `ROUND_ROBIN`.
                     * @param Algorithm The balancing method can only be `ROUND_ROBIN`.
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID
                     * @return UniqVpcId Unique VPC ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique VPC ID
                     * @param UniqVpcId Unique VPC ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

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
                     * 获取Retry attempts. It defaults to `3`.
                     * @return Retries Retry attempts. It defaults to `3`.
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置Retry attempts. It defaults to `3`.
                     * @param Retries Retry attempts. It defaults to `3`.
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取The host header in the request sending to the backend
                     * @return UpstreamHost The host header in the request sending to the backend
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置The host header in the request sending to the backend
                     * @param UpstreamHost The host header in the request sending to the backend
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     */
                    bool UpstreamHostHasBeenSet() const;

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
                     * 获取The location of K8s service
                     * @return K8sService The location of K8s service
                     */
                    std::vector<K8sService> GetK8sService() const;

                    /**
                     * 设置The location of K8s service
                     * @param K8sService The location of K8s service
                     */
                    void SetK8sService(const std::vector<K8sService>& _k8sService);

                    /**
                     * 判断参数 K8sService 是否已赋值
                     * @return K8sService 是否已赋值
                     */
                    bool K8sServiceHasBeenSet() const;

                private:

                    /**
                     * Backend protocol. Values: `HTTP`, `HTTPS`
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * The balancing method can only be `ROUND_ROBIN`.
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Unique VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

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
                     * Retry attempts. It defaults to `3`.
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * The host header in the request sending to the backend
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * Backend nodes
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * The location of K8s service
                     */
                    std::vector<K8sService> m_k8sService;
                    bool m_k8sServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMREQUEST_H_
