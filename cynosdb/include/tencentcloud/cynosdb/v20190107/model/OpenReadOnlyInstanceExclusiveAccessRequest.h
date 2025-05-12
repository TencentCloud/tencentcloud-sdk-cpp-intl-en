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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * OpenReadOnlyInstanceExclusiveAccess request structure.
                */
                class OpenReadOnlyInstanceExclusiveAccessRequest : public AbstractModel
                {
                public:
                    OpenReadOnlyInstanceExclusiveAccessRequest();
                    ~OpenReadOnlyInstanceExclusiveAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the clusterId.
                     * @return ClusterId Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the clusterId.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the clusterId.
                     * @param _clusterId Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the clusterId.
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
                     * 获取Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the instanceId.
                     * @return InstanceId Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the instanceId.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the instanceId.
                     * @param _instanceId Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the instanceId.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the designated vpc ID. please use the "query vpc list" to obtain the vpc ID.
                     * @return VpcId Specifies the designated vpc ID. please use the "query vpc list" to obtain the vpc ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the designated vpc ID. please use the "query vpc list" to obtain the vpc ID.
                     * @param _vpcId Specifies the designated vpc ID. please use the "query vpc list" to obtain the vpc ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Specified subnet ID. if vpc ID is set, SubnetId is required. please use query subnet list (https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) to get SubnetId.
                     * @return SubnetId Specified subnet ID. if vpc ID is set, SubnetId is required. please use query subnet list (https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) to get SubnetId.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Specified subnet ID. if vpc ID is set, SubnetId is required. please use query subnet list (https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) to get SubnetId.
                     * @param _subnetId Specified subnet ID. if vpc ID is set, SubnetId is required. please use query subnet list (https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) to get SubnetId.
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
                     * 获取User-Defined port.
                     * @return Port User-Defined port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置User-Defined port.
                     * @param _port User-Defined port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Security group ID. use [view security group](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) to obtain the SecurityGroupId.
                     * @return SecurityGroupIds Security group ID. use [view security group](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) to obtain the SecurityGroupId.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID. use [view security group](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) to obtain the SecurityGroupId.
                     * @param _securityGroupIds Security group ID. use [view security group](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) to obtain the SecurityGroupId.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the clusterId.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Please use the cluster information description (https://intl.cloud.tencent.com/document/api/1003/48086?from_cn_redirect=1) to obtain the instanceId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the designated vpc ID. please use the "query vpc list" to obtain the vpc ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specified subnet ID. if vpc ID is set, SubnetId is required. please use query subnet list (https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) to get SubnetId.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * User-Defined port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Security group ID. use [view security group](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) to obtain the SecurityGroupId.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_
