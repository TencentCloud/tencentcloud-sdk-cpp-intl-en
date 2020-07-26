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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateCluster request structure.
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * @return IdlType Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * @param IdlType Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取Cluster name, which can contain up to 32 letters and digits
                     * @return ClusterName Cluster name, which can contain up to 32 letters and digits
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name, which can contain up to 32 letters and digits
                     * @param ClusterName Cluster name, which can contain up to 32 letters and digits
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取ID of the VPC instance bound to a cluster in the format of `vpc-f49l6u0z`
                     * @return VpcId ID of the VPC instance bound to a cluster in the format of `vpc-f49l6u0z`
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance bound to a cluster in the format of `vpc-f49l6u0z`
                     * @param VpcId ID of the VPC instance bound to a cluster in the format of `vpc-f49l6u0z`
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet instance bound to a cluster in the format of `subnet-pxir56ns`
                     * @return SubnetId ID of the subnet instance bound to a cluster in the format of `subnet-pxir56ns`
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet instance bound to a cluster in the format of `subnet-pxir56ns`
                     * @param SubnetId ID of the subnet instance bound to a cluster in the format of `subnet-pxir56ns`
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Cluster access password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * @return Password Cluster access password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Cluster access password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * @param Password Cluster access password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResourceTags 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置
                     * @param ResourceTags 
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable IPv6 address access for clusters
                     * @return Ipv6Enable Whether to enable IPv6 address access for clusters
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置Whether to enable IPv6 address access for clusters
                     * @param Ipv6Enable Whether to enable IPv6 address access for clusters
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * Cluster name, which can contain up to 32 letters and digits
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * ID of the VPC instance bound to a cluster in the format of `vpc-f49l6u0z`
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet instance bound to a cluster in the format of `subnet-pxir56ns`
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Cluster access password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Whether to enable IPv6 address access for clusters
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
