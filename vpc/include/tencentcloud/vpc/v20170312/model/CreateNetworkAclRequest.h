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
#include <tencentcloud/vpc/v20170312/model/Tag.h>


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
                     * 获取VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     * @return VpcId VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     * @param _vpcId VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
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
                     * 获取Network ACL name, which can contain up to 60 bytes.
                     * @return NetworkAclName Network ACL name, which can contain up to 60 bytes.
                     * 
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置Network ACL name, which can contain up to 60 bytes.
                     * @param _networkAclName Network ACL name, which can contain up to 60 bytes.
                     * 
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     * 
                     */
                    bool NetworkAclNameHasBeenSet() const;

                    /**
                     * 获取Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * @return NetworkAclType Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * 
                     */
                    std::string GetNetworkAclType() const;

                    /**
                     * 设置Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * @param _networkAclType Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * 
                     */
                    void SetNetworkAclType(const std::string& _networkAclType);

                    /**
                     * 判断参数 NetworkAclType 是否已赋值
                     * @return NetworkAclType 是否已赋值
                     * 
                     */
                    bool NetworkAclTypeHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID, which can be obtained from the `VpcId` field in the response of the [`DescribeVpcs`](https://intl.cloud.tencent.com/document/product/215/15778?from_cn_redirect=1) API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Network ACL name, which can contain up to 60 bytes.
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                    /**
                     * Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     */
                    std::string m_networkAclType;
                    bool m_networkAclTypeHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_
