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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeIngress request structure.
                */
                class DescribeIngressRequest : public AbstractModel
                {
                public:
                    DescribeIngressRequest();
                    ~DescribeIngressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Environment namespace
                     * @return ClusterNamespace Environment namespace
                     */
                    std::string GetClusterNamespace() const;

                    /**
                     * 设置Environment namespace
                     * @param ClusterNamespace Environment namespace
                     */
                    void SetClusterNamespace(const std::string& _clusterNamespace);

                    /**
                     * 判断参数 ClusterNamespace 是否已赋值
                     * @return ClusterNamespace 是否已赋值
                     */
                    bool ClusterNamespaceHasBeenSet() const;

                    /**
                     * 获取Ingress rule name
                     * @return IngressName Ingress rule name
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置Ingress rule name
                     * @param IngressName Ingress rule name
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param SourceChannel Source channel
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment namespace
                     */
                    std::string m_clusterNamespace;
                    bool m_clusterNamespaceHasBeenSet;

                    /**
                     * Ingress rule name
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_
