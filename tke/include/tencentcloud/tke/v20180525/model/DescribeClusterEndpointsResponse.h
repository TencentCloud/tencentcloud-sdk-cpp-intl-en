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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterEndpoints response structure.
                */
                class DescribeClusterEndpointsResponse : public AbstractModel
                {
                public:
                    DescribeClusterEndpointsResponse();
                    ~DescribeClusterEndpointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CA certificate of cluster APIServer
                     * @return CertificationAuthority CA certificate of cluster APIServer
                     */
                    std::string GetCertificationAuthority() const;

                    /**
                     * 判断参数 CertificationAuthority 是否已赋值
                     * @return CertificationAuthority 是否已赋值
                     */
                    bool CertificationAuthorityHasBeenSet() const;

                    /**
                     * 获取Public network access address of cluster APIServer
                     * @return ClusterExternalEndpoint Public network access address of cluster APIServer
                     */
                    std::string GetClusterExternalEndpoint() const;

                    /**
                     * 判断参数 ClusterExternalEndpoint 是否已赋值
                     * @return ClusterExternalEndpoint 是否已赋值
                     */
                    bool ClusterExternalEndpointHasBeenSet() const;

                    /**
                     * 获取Private network access address of cluster APIServer
                     * @return ClusterIntranetEndpoint Private network access address of cluster APIServer
                     */
                    std::string GetClusterIntranetEndpoint() const;

                    /**
                     * 判断参数 ClusterIntranetEndpoint 是否已赋值
                     * @return ClusterIntranetEndpoint 是否已赋值
                     */
                    bool ClusterIntranetEndpointHasBeenSet() const;

                    /**
                     * 获取Domain name of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterDomain Domain name of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterDomain() const;

                    /**
                     * 判断参数 ClusterDomain 是否已赋值
                     * @return ClusterDomain 是否已赋值
                     */
                    bool ClusterDomainHasBeenSet() const;

                    /**
                     * 获取Public network access ACL of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterExternalACL Public network access ACL of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetClusterExternalACL() const;

                    /**
                     * 判断参数 ClusterExternalACL 是否已赋值
                     * @return ClusterExternalACL 是否已赋值
                     */
                    bool ClusterExternalACLHasBeenSet() const;

                private:

                    /**
                     * CA certificate of cluster APIServer
                     */
                    std::string m_certificationAuthority;
                    bool m_certificationAuthorityHasBeenSet;

                    /**
                     * Public network access address of cluster APIServer
                     */
                    std::string m_clusterExternalEndpoint;
                    bool m_clusterExternalEndpointHasBeenSet;

                    /**
                     * Private network access address of cluster APIServer
                     */
                    std::string m_clusterIntranetEndpoint;
                    bool m_clusterIntranetEndpointHasBeenSet;

                    /**
                     * Domain name of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterDomain;
                    bool m_clusterDomainHasBeenSet;

                    /**
                     * Public network access ACL of cluster APIServer
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_clusterExternalACL;
                    bool m_clusterExternalACLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
