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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroup request structure.
                */
                class ModifyDBInstanceSecurityGroupRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupRequest();
                    ~ModifyDBInstanceSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-7pje****.
                     * @return InstanceId Instance ID. For example, cmgo-7pje****.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-7pje****.
                     * @param _instanceId Instance ID. For example, cmgo-7pje****.
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
                     * 获取IDs of target security groups. Call the [DescribeSecurityGroup](https://intl.cloud.tencent.com/document/product/240/55675?from_cn_redirect=1) API to view IDs of specific security groups.
                     * @return SecurityGroupIds IDs of target security groups. Call the [DescribeSecurityGroup](https://intl.cloud.tencent.com/document/product/240/55675?from_cn_redirect=1) API to view IDs of specific security groups.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置IDs of target security groups. Call the [DescribeSecurityGroup](https://intl.cloud.tencent.com/document/product/240/55675?from_cn_redirect=1) API to view IDs of specific security groups.
                     * @param _securityGroupIds IDs of target security groups. Call the [DescribeSecurityGroup](https://intl.cloud.tencent.com/document/product/240/55675?from_cn_redirect=1) API to view IDs of specific security groups.
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
                     * Instance ID. For example, cmgo-7pje****.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IDs of target security groups. Call the [DescribeSecurityGroup](https://intl.cloud.tencent.com/document/product/240/55675?from_cn_redirect=1) API to view IDs of specific security groups.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_
