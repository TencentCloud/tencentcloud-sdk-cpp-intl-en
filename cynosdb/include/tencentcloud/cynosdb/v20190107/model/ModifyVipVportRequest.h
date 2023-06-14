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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Instance group ID
                     * @return InstanceGrpId Instance group ID
                     * 
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置Instance group ID
                     * @param _instanceGrpId Instance group ID
                     * 
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * 
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取Target IP to be modified
                     * @return Vip Target IP to be modified
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Target IP to be modified
                     * @param _vip Target IP to be modified
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
                     * 获取Target port to be modified
                     * @return Vport Target port to be modified
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Target port to be modified
                     * @param _vport Target port to be modified
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
                     * 获取Valid hours of old IPs. If it is set to `0` hours, the IPs will be released immediately.
                     * @return OldIpReserveHours Valid hours of old IPs. If it is set to `0` hours, the IPs will be released immediately.
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置Valid hours of old IPs. If it is set to `0` hours, the IPs will be released immediately.
                     * @param _oldIpReserveHours Valid hours of old IPs. If it is set to `0` hours, the IPs will be released immediately.
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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance group ID
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * Target IP to be modified
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Target port to be modified
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
                     * Valid hours of old IPs. If it is set to `0` hours, the IPs will be released immediately.
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_
