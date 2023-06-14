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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
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
                     * 获取ID of the security group to be disassociated, such as `sg-efil73jd`. Only one security group can be disassociated.
                     * @return SecurityGroupIds ID of the security group to be disassociated, such as `sg-efil73jd`. Only one security group can be disassociated.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the security group to be disassociated, such as `sg-efil73jd`. Only one security group can be disassociated.
                     * @param _securityGroupIds ID of the security group to be disassociated, such as `sg-efil73jd`. Only one security group can be disassociated.
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
                     * 获取ID(s) of the instance(s) to be disassociated,such as `ins-lesecurk`. You can specify multiple instances.
                     * @return InstanceIds ID(s) of the instance(s) to be disassociated,such as `ins-lesecurk`. You can specify multiple instances.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID(s) of the instance(s) to be disassociated,such as `ins-lesecurk`. You can specify multiple instances.
                     * @param _instanceIds ID(s) of the instance(s) to be disassociated,such as `ins-lesecurk`. You can specify multiple instances.
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
                     * ID of the security group to be disassociated, such as `sg-efil73jd`. Only one security group can be disassociated.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * ID(s) of the instance(s) to be disassociated,such as `ins-lesecurk`. You can specify multiple instances.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
