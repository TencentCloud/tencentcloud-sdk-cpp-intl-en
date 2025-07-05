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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * ModifyDBInstanceSecurityGroups request structure.
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
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
                     * 获取Security group ID list. Replace it with a new one, which is an array of one or more security group IDs.
- To configure a security group for an instance for the first time, bind the security group through the API [AssociateSecurityGroups](https://intl.cloud.tencent.com/document/product/239/41260?from_cn_redirect=1) first.
- To replace the security group, obtain the security group ID on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * @return SecurityGroupIds Security group ID list. Replace it with a new one, which is an array of one or more security group IDs.
- To configure a security group for an instance for the first time, bind the security group through the API [AssociateSecurityGroups](https://intl.cloud.tencent.com/document/product/239/41260?from_cn_redirect=1) first.
- To replace the security group, obtain the security group ID on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID list. Replace it with a new one, which is an array of one or more security group IDs.
- To configure a security group for an instance for the first time, bind the security group through the API [AssociateSecurityGroups](https://intl.cloud.tencent.com/document/product/239/41260?from_cn_redirect=1) first.
- To replace the security group, obtain the security group ID on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * @param _securityGroupIds Security group ID list. Replace it with a new one, which is an array of one or more security group IDs.
- To configure a security group for an instance for the first time, bind the security group through the API [AssociateSecurityGroups](https://intl.cloud.tencent.com/document/product/239/41260?from_cn_redirect=1) first.
- To replace the security group, obtain the security group ID on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Database engine name, which is `redis` for this API.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Security group ID list. Replace it with a new one, which is an array of one or more security group IDs.
- To configure a security group for an instance for the first time, bind the security group through the API [AssociateSecurityGroups](https://intl.cloud.tencent.com/document/product/239/41260?from_cn_redirect=1) first.
- To replace the security group, obtain the security group ID on the [security group](https://console.tencentcloud.com/vpc/security-group) page of the console.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
