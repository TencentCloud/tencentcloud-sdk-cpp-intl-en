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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UninstallClusterAgent request structure.
                */
                class UninstallClusterAgentRequest : public AbstractModel
                {
                public:
                    UninstallClusterAgentRequest();
                    ~UninstallClusterAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>cluster CA certificate MD5 list (single/batch unified)<br>Purpose: specify the cluster where the container security Agent needs to be uninstalled<br>Parameter value reference: obtained from the ClusterCaMD5 field in the API response of DescribeClusterListV2<br>Description: the capi layer does not verify the existence or type of this field. It is passed through to the access side ClusterUninstall RPC as cluster_CA_MD5</p>
                     * @return ClusterCaMD5List <p>cluster CA certificate MD5 list (single/batch unified)<br>Purpose: specify the cluster where the container security Agent needs to be uninstalled<br>Parameter value reference: obtained from the ClusterCaMD5 field in the API response of DescribeClusterListV2<br>Description: the capi layer does not verify the existence or type of this field. It is passed through to the access side ClusterUninstall RPC as cluster_CA_MD5</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>cluster CA certificate MD5 list (single/batch unified)<br>Purpose: specify the cluster where the container security Agent needs to be uninstalled<br>Parameter value reference: obtained from the ClusterCaMD5 field in the API response of DescribeClusterListV2<br>Description: the capi layer does not verify the existence or type of this field. It is passed through to the access side ClusterUninstall RPC as cluster_CA_MD5</p>
                     * @param _clusterCaMD5List <p>cluster CA certificate MD5 list (single/batch unified)<br>Purpose: specify the cluster where the container security Agent needs to be uninstalled<br>Parameter value reference: obtained from the ClusterCaMD5 field in the API response of DescribeClusterListV2<br>Description: the capi layer does not verify the existence or type of this field. It is passed through to the access side ClusterUninstall RPC as cluster_CA_MD5</p>
                     * 
                     */
                    void SetClusterCaMD5List(const std::vector<std::string>& _clusterCaMD5List);

                    /**
                     * 判断参数 ClusterCaMD5List 是否已赋值
                     * @return ClusterCaMD5List 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5ListHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>cluster CA certificate MD5 list (single/batch unified)<br>Purpose: specify the cluster where the container security Agent needs to be uninstalled<br>Parameter value reference: obtained from the ClusterCaMD5 field in the API response of DescribeClusterListV2<br>Description: the capi layer does not verify the existence or type of this field. It is passed through to the access side ClusterUninstall RPC as cluster_CA_MD5</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_
