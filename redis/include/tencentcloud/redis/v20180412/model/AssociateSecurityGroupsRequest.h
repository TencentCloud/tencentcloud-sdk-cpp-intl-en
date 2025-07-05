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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_

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
                * AssociateSecurityGroups request structure.
                */
                class AssociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    AssociateSecurityGroupsRequest();
                    ~AssociateSecurityGroupsRequest() = default;
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
                     * 获取ID of the security group to be bound. Obtain it on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * @return SecurityGroupId ID of the security group to be bound. Obtain it on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置ID of the security group to be bound. Obtain it on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * @param _securityGroupId ID of the security group to be bound. Obtain it on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
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
                     * 获取ID of the bound instance. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. You can specify multiple instance IDs.
                     * @return InstanceIds ID of the bound instance. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. You can specify multiple instance IDs.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of the bound instance. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. You can specify multiple instance IDs.
                     * @param _instanceIds ID of the bound instance. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. You can specify multiple instance IDs.
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
                     * ID of the security group to be bound. Obtain it on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * ID of the bound instance. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. You can specify multiple instance IDs.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
