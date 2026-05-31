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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * ModifyDBInstanceSecurityGroups request structure.
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Network Group id (cynosdbmysql-grp- prefix at the beginning) or Cluster id (such as cynosdbmysql-xxxxxxxx prefix). When configuring security group with instance IP address triplet (UniqVpcId, Vip, Vport), this field must be set to Cluster id (such as cynosdbmysql-xxxxxxxx prefix).</p>
                     * @return InstanceId <p>Network Group id (cynosdbmysql-grp- prefix at the beginning) or Cluster id (such as cynosdbmysql-xxxxxxxx prefix). When configuring security group with instance IP address triplet (UniqVpcId, Vip, Vport), this field must be set to Cluster id (such as cynosdbmysql-xxxxxxxx prefix).</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Network Group id (cynosdbmysql-grp- prefix at the beginning) or Cluster id (such as cynosdbmysql-xxxxxxxx prefix). When configuring security group with instance IP address triplet (UniqVpcId, Vip, Vport), this field must be set to Cluster id (such as cynosdbmysql-xxxxxxxx prefix).</p>
                     * @param _instanceId <p>Network Group id (cynosdbmysql-grp- prefix at the beginning) or Cluster id (such as cynosdbmysql-xxxxxxxx prefix). When configuring security group with instance IP address triplet (UniqVpcId, Vip, Vport), this field must be set to Cluster id (such as cynosdbmysql-xxxxxxxx prefix).</p>
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
                     * 获取<p>List of security group IDs to modify, an array of one or more security group IDs.<br>Note: This input will perform a full replacement of the existing collection, not an incremental update. The modification requires the expected full collection.</p>
                     * @return SecurityGroupIds <p>List of security group IDs to modify, an array of one or more security group IDs.<br>Note: This input will perform a full replacement of the existing collection, not an incremental update. The modification requires the expected full collection.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>List of security group IDs to modify, an array of one or more security group IDs.<br>Note: This input will perform a full replacement of the existing collection, not an incremental update. The modification requires the expected full collection.</p>
                     * @param _securityGroupIds <p>List of security group IDs to modify, an array of one or more security group IDs.<br>Note: This input will perform a full replacement of the existing collection, not an incremental update. The modification requires the expected full collection.</p>
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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>ID of the VPC network for instance ownership. (UniqVpcId, Vip, and Vport must be specified simultaneously to uniquely identify the network instance)</p>
                     * @return UniqVpcId <p>ID of the VPC network for instance ownership. (UniqVpcId, Vip, and Vport must be specified simultaneously to uniquely identify the network instance)</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>ID of the VPC network for instance ownership. (UniqVpcId, Vip, and Vport must be specified simultaneously to uniquely identify the network instance)</p>
                     * @param _uniqVpcId <p>ID of the VPC network for instance ownership. (UniqVpcId, Vip, and Vport must be specified simultaneously to uniquely identify the network instance)</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance IP address, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * @return Vip <p>Instance IP address, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Instance IP address, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * @param _vip <p>Instance IP address, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Instance port, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * @return Vport <p>Instance port, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Instance port, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * @param _vport <p>Instance port, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * <p>Network Group id (cynosdbmysql-grp- prefix at the beginning) or Cluster id (such as cynosdbmysql-xxxxxxxx prefix). When configuring security group with instance IP address triplet (UniqVpcId, Vip, Vport), this field must be set to Cluster id (such as cynosdbmysql-xxxxxxxx prefix).</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>List of security group IDs to modify, an array of one or more security group IDs.<br>Note: This input will perform a full replacement of the existing collection, not an incremental update. The modification requires the expected full collection.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>ID of the VPC network for instance ownership. (UniqVpcId, Vip, and Vport must be specified simultaneously to uniquely identify the network instance)</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Instance IP address, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Instance port, instance IP address triplet (UniqVpcId, Vip, and Vport). These three parameters must be specified simultaneously for unique identification of network instances.</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
