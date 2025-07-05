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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DisassociateSecurityGroups request structure.
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database engine name, which is `redis` for this API.
                     * @return Product Database engine name, which is `redis` for this API.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Database engine name, which is `redis` for this API.
                     * @param _product Database engine name, which is `redis` for this API.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter InstanceSecurityGroupsDetail of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * @return SecurityGroupId Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter InstanceSecurityGroupsDetail of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter InstanceSecurityGroupsDetail of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * @param _securityGroupId Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter InstanceSecurityGroupsDetail of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list, which is an array of one or more instance IDs. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceIds Instance ID list, which is an array of one or more instance IDs. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list, which is an array of one or more instance IDs. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceIds Instance ID list, which is an array of one or more instance IDs. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Database engine name, which is `redis` for this API.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter InstanceSecurityGroupsDetail of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Instance ID list, which is an array of one or more instance IDs. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
