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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取ID of the security group to be bound, such as `esg-efil73jd`. You can bind only one security group.
                     * @return SecurityGroupIds ID of the security group to be bound, such as `esg-efil73jd`. You can bind only one security group.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the security group to be bound, such as `esg-efil73jd`. You can bind only one security group.
                     * @param _securityGroupIds ID of the security group to be bound, such as `esg-efil73jd`. You can bind only one security group.
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
                     * 获取ID of the bound instance, such as `ein-lesecurk`. You can specify multiple instances and request up to 100 instances at a time.
                     * @return InstanceIds ID of the bound instance, such as `ein-lesecurk`. You can specify multiple instances and request up to 100 instances at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of the bound instance, such as `ein-lesecurk`. You can specify multiple instances and request up to 100 instances at a time.
                     * @param _instanceIds ID of the bound instance, such as `ein-lesecurk`. You can specify multiple instances and request up to 100 instances at a time.
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
                     * ID of the security group to be bound, such as `esg-efil73jd`. You can bind only one security group.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * ID of the bound instance, such as `ein-lesecurk`. You can specify multiple instances and request up to 100 instances at a time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATESECURITYGROUPSREQUEST_H_
