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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_

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
                * DescribeClusterSecurity response structure.
                */
                class DescribeClusterSecurityResponse : public AbstractModel
                {
                public:
                    DescribeClusterSecurityResponse();
                    ~DescribeClusterSecurityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster's account name
                     * @return UserName Cluster's account name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Cluster's password
                     * @return Password Cluster's password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Cluster's access CA certificate
                     * @return CertificationAuthority Cluster's access CA certificate
                     * 
                     */
                    std::string GetCertificationAuthority() const;

                    /**
                     * 判断参数 CertificationAuthority 是否已赋值
                     * @return CertificationAuthority 是否已赋值
                     * 
                     */
                    bool CertificationAuthorityHasBeenSet() const;

                    /**
                     * 获取Cluster's access address
                     * @return ClusterExternalEndpoint Cluster's access address
                     * 
                     */
                    std::string GetClusterExternalEndpoint() const;

                    /**
                     * 判断参数 ClusterExternalEndpoint 是否已赋值
                     * @return ClusterExternalEndpoint 是否已赋值
                     * 
                     */
                    bool ClusterExternalEndpointHasBeenSet() const;

                    /**
                     * 获取Domain name accessed by the cluster
                     * @return Domain Domain name accessed by the cluster
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Cluster's endpoint address
                     * @return PgwEndpoint Cluster's endpoint address
                     * 
                     */
                    std::string GetPgwEndpoint() const;

                    /**
                     * 判断参数 PgwEndpoint 是否已赋值
                     * @return PgwEndpoint 是否已赋值
                     * 
                     */
                    bool PgwEndpointHasBeenSet() const;

                    /**
                     * 获取Cluster's access policy group
Note: This field may return null, indicating that no valid value was found.
                     * @return SecurityPolicy Cluster's access policy group
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicy() const;

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                    /**
                     * 获取Cluster Kubeconfig file
Note: This field may return null, indicating that no valid value was found.
                     * @return Kubeconfig Cluster Kubeconfig file
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     * 
                     */
                    bool KubeconfigHasBeenSet() const;

                    /**
                     * 获取Access address of the cluster JnsGw
Note: This field may return null, indicating that no valid value was found.
                     * @return JnsGwEndpoint Access address of the cluster JnsGw
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetJnsGwEndpoint() const;

                    /**
                     * 判断参数 JnsGwEndpoint 是否已赋值
                     * @return JnsGwEndpoint 是否已赋值
                     * 
                     */
                    bool JnsGwEndpointHasBeenSet() const;

                private:

                    /**
                     * Cluster's account name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Cluster's password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Cluster's access CA certificate
                     */
                    std::string m_certificationAuthority;
                    bool m_certificationAuthorityHasBeenSet;

                    /**
                     * Cluster's access address
                     */
                    std::string m_clusterExternalEndpoint;
                    bool m_clusterExternalEndpointHasBeenSet;

                    /**
                     * Domain name accessed by the cluster
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Cluster's endpoint address
                     */
                    std::string m_pgwEndpoint;
                    bool m_pgwEndpointHasBeenSet;

                    /**
                     * Cluster's access policy group
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                    /**
                     * Cluster Kubeconfig file
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                    /**
                     * Access address of the cluster JnsGw
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_jnsGwEndpoint;
                    bool m_jnsGwEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_
