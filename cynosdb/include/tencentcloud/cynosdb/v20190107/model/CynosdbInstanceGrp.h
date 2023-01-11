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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstance.h>
#include <tencentcloud/cynosdb/v20190107/model/OldAddrInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance group information
                */
                class CynosdbInstanceGrp : public AbstractModel
                {
                public:
                    CynosdbInstanceGrp();
                    ~CynosdbInstanceGrp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User `appId`
                     * @return AppId User `appId`
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `appId`
                     * @param AppId User `appId`
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param CreatedTime Creation time
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Deletion time
                     * @return DeletedTime Deletion time
                     */
                    std::string GetDeletedTime() const;

                    /**
                     * 设置Deletion time
                     * @param DeletedTime Deletion time
                     */
                    void SetDeletedTime(const std::string& _deletedTime);

                    /**
                     * 判断参数 DeletedTime 是否已赋值
                     * @return DeletedTime 是否已赋值
                     */
                    bool DeletedTimeHasBeenSet() const;

                    /**
                     * 获取Instance group ID
                     * @return InstanceGrpId Instance group ID
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置Instance group ID
                     * @param InstanceGrpId Instance group ID
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param Status Status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance group type. ha: HA group; ro: RO group
                     * @return Type Instance group type. ha: HA group; ro: RO group
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance group type. ha: HA group; ro: RO group
                     * @param Type Instance group type. ha: HA group; ro: RO group
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdatedTime Update time
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Update time
                     * @param UpdatedTime Update time
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Private IP
                     * @return Vip Private IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP
                     * @param Vip Private IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private port
                     * @return Vport Private port
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private port
                     * @param Vport Private port
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Public domain name
                     * @return WanDomain Public domain name
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public domain name
                     * @param WanDomain Public domain name
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return WanIP Public IP
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP
                     * @param WanIP Public IP
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Public port
                     * @return WanPort Public port
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public port
                     * @param WanPort Public port
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Public network status
                     * @return WanStatus Public network status
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Public network status
                     * @param WanStatus Public network status
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取Information of instances contained in instance group
                     * @return InstanceSet Information of instances contained in instance group
                     */
                    std::vector<CynosdbInstance> GetInstanceSet() const;

                    /**
                     * 设置Information of instances contained in instance group
                     * @param InstanceSet Information of instances contained in instance group
                     */
                    void SetInstanceSet(const std::vector<CynosdbInstance>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UniqVpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqSubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UniqSubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Information of the old IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OldAddrInfo Information of the old IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OldAddrInfo GetOldAddrInfo() const;

                    /**
                     * 设置Information of the old IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OldAddrInfo Information of the old IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOldAddrInfo(const OldAddrInfo& _oldAddrInfo);

                    /**
                     * 判断参数 OldAddrInfo 是否已赋值
                     * @return OldAddrInfo 是否已赋值
                     */
                    bool OldAddrInfoHasBeenSet() const;

                    /**
                     * 获取Task in progress
                     * @return ProcessingTasks Task in progress
                     */
                    std::vector<std::string> GetProcessingTasks() const;

                    /**
                     * 设置Task in progress
                     * @param ProcessingTasks Task in progress
                     */
                    void SetProcessingTasks(const std::vector<std::string>& _processingTasks);

                    /**
                     * 判断参数 ProcessingTasks 是否已赋值
                     * @return ProcessingTasks 是否已赋值
                     */
                    bool ProcessingTasksHasBeenSet() const;

                    /**
                     * 获取Task list
                     * @return Tasks Task list
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task list
                     * @param Tasks Task list
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取biz_net_service table ID
                     * @return NetServiceId biz_net_service table ID
                     */
                    int64_t GetNetServiceId() const;

                    /**
                     * 设置biz_net_service table ID
                     * @param NetServiceId biz_net_service table ID
                     */
                    void SetNetServiceId(const int64_t& _netServiceId);

                    /**
                     * 判断参数 NetServiceId 是否已赋值
                     * @return NetServiceId 是否已赋值
                     */
                    bool NetServiceIdHasBeenSet() const;

                private:

                    /**
                     * User `appId`
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Deletion time
                     */
                    std::string m_deletedTime;
                    bool m_deletedTimeHasBeenSet;

                    /**
                     * Instance group ID
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance group type. ha: HA group; ro: RO group
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Private IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Public domain name
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Public port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Public network status
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * Information of instances contained in instance group
                     */
                    std::vector<CynosdbInstance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Information of the old IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OldAddrInfo m_oldAddrInfo;
                    bool m_oldAddrInfoHasBeenSet;

                    /**
                     * Task in progress
                     */
                    std::vector<std::string> m_processingTasks;
                    bool m_processingTasksHasBeenSet;

                    /**
                     * Task list
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * biz_net_service table ID
                     */
                    int64_t m_netServiceId;
                    bool m_netServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_
