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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_

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
                * ModifyVipVport request structure.
                */
                class ModifyVipVportRequest : public AbstractModel
                {
                public:
                    ModifyVipVportRequest();
                    ~ModifyVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance Group ID
                     * @return InstanceGrpId Instance Group ID
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置Instance Group ID
                     * @param _instanceGrpId Instance Group ID
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取Instance Group ID
                     * @return InstanceGroupId Instance Group ID
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置Instance Group ID
                     * @param _instanceGroupId Instance Group ID
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Destination ip that needs to be modified
                     * @return Vip Destination ip that needs to be modified
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Destination ip that needs to be modified
                     * @param _vip Destination ip that needs to be modified
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
                     * 获取Destination port that needs to be modified
                     * @return Vport Destination port that needs to be modified
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Destination port that needs to be modified
                     * @param _vport Destination port that needs to be modified
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values: 
<li> MYSQL </li>
                     * @return DbType Database type. Valid values: 
<li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type. Valid values: 
<li> MYSQL </li>
                     * @param _dbType Database type. Valid values: 
<li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Retention time of the old ip before recycling. Unit: hour. 0 means reclaim immediately.
                     * @return OldIpReserveHours Retention time of the old ip before recycling. Unit: hour. 0 means reclaim immediately.
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置Retention time of the old ip before recycling. Unit: hour. 0 means reclaim immediately.
                     * @param _oldIpReserveHours Retention time of the old ip before recycling. Unit: hour. 0 means reclaim immediately.
                     * 
                     */
                    void SetOldIpReserveHours(const int64_t& _oldIpReserveHours);

                    /**
                     * 判断参数 OldIpReserveHours 是否已赋值
                     * @return OldIpReserveHours 是否已赋值
                     * 
                     */
                    bool OldIpReserveHoursHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance Group ID
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * Instance Group ID
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Destination ip that needs to be modified
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Destination port that needs to be modified
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Retention time of the old ip before recycling. Unit: hour. 0 means reclaim immediately.
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_
