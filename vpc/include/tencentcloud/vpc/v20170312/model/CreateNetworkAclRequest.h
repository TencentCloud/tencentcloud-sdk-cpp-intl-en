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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateNetworkAcl request structure.
                */
                class CreateNetworkAclRequest : public AbstractModel
                {
                public:
                    CreateNetworkAclRequest();
                    ~CreateNetworkAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of the DescribeVpcs API.
                     * @return VpcId ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of the DescribeVpcs API.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of the DescribeVpcs API.
                     * @param VpcId ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of the DescribeVpcs API.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Name of the network ACL. The maximum length is 60 bytes.
                     * @return NetworkAclName Name of the network ACL. The maximum length is 60 bytes.
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置Name of the network ACL. The maximum length is 60 bytes.
                     * @param NetworkAclName Name of the network ACL. The maximum length is 60 bytes.
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     */
                    bool NetworkAclNameHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of the DescribeVpcs API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Name of the network ACL. The maximum length is 60 bytes.
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_
