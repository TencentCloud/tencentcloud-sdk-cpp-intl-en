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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

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
                * DisassociateSecurityGroups request structure.
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of instance group IDs, starting with the prefix cynosdbmysql-grp- or cluster ID.
Description: To get the instance group ID of a cluster, perform [query cluster instance group](https://www.tencentcloud.com/document/product/1003/103934?from_cn_redirect=1).
                     * @return InstanceIds Array of instance group IDs, starting with the prefix cynosdbmysql-grp- or cluster ID.
Description: To get the instance group ID of a cluster, perform [query cluster instance group](https://www.tencentcloud.com/document/product/1003/103934?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Array of instance group IDs, starting with the prefix cynosdbmysql-grp- or cluster ID.
Description: To get the instance group ID of a cluster, perform [query cluster instance group](https://www.tencentcloud.com/document/product/1003/103934?from_cn_redirect=1).
                     * @param _instanceIds Array of instance group IDs, starting with the prefix cynosdbmysql-grp- or cluster ID.
Description: To get the instance group ID of a cluster, perform [query cluster instance group](https://www.tencentcloud.com/document/product/1003/103934?from_cn_redirect=1).
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Security group ID list to modify. An array of one or more security group IDs.
                     * @return SecurityGroupIds Security group ID list to modify. An array of one or more security group IDs.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID list to modify. An array of one or more security group IDs.
                     * @param _securityGroupIds Security group ID list to modify. An array of one or more security group IDs.
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
                     * 获取Availability zone.
Description: Please enter the primary AZ of the cluster location correctly. If you enter a non-primary AZ of the cluster location, the call may display success but the actual execution will fail.
                     * @return Zone Availability zone.
Description: Please enter the primary AZ of the cluster location correctly. If you enter a non-primary AZ of the cluster location, the call may display success but the actual execution will fail.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone.
Description: Please enter the primary AZ of the cluster location correctly. If you enter a non-primary AZ of the cluster location, the call may display success but the actual execution will fail.
                     * @param _zone Availability zone.
Description: Please enter the primary AZ of the cluster location correctly. If you enter a non-primary AZ of the cluster location, the call may display success but the actual execution will fail.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Array of instance group IDs, starting with the prefix cynosdbmysql-grp- or cluster ID.
Description: To get the instance group ID of a cluster, perform [query cluster instance group](https://www.tencentcloud.com/document/product/1003/103934?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Security group ID list to modify. An array of one or more security group IDs.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Availability zone.
Description: Please enter the primary AZ of the cluster location correctly. If you enter a non-primary AZ of the cluster location, the call may display success but the actual execution will fail.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
