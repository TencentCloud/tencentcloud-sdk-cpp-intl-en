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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGROUP_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGROUP_H_

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
                * 
                */
                class CynosdbInstanceGroup : public AbstractModel
                {
                public:
                    CynosdbInstanceGroup();
                    ~CynosdbInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AppId 
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClusterId 
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置
                     * @param _clusterId 
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
                     * 获取
                     * @return CreatedTime 
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置
                     * @param _createdTime 
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeletedTime 
                     * 
                     */
                    std::string GetDeletedTime() const;

                    /**
                     * 设置
                     * @param _deletedTime 
                     * 
                     */
                    void SetDeletedTime(const std::string& _deletedTime);

                    /**
                     * 判断参数 DeletedTime 是否已赋值
                     * @return DeletedTime 是否已赋值
                     * 
                     */
                    bool DeletedTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceGroupId 
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置
                     * @param _instanceGroupId 
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
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Type of the instance group (network). ha-ha group; ro - read-only group; proxy - proxy; singleRo - read-only instance exclusive.
                     * @return Type Type of the instance group (network). ha-ha group; ro - read-only group; proxy - proxy; singleRo - read-only instance exclusive.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the instance group (network). ha-ha group; ro - read-only group; proxy - proxy; singleRo - read-only instance exclusive.
                     * @param _type Type of the instance group (network). ha-ha group; ro - read-only group; proxy - proxy; singleRo - read-only instance exclusive.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return UpdatedTime 
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置
                     * @param _updatedTime 
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vip 
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置
                     * @param _vip 
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
                     * 获取
                     * @return Vport 
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置
                     * @param _vport 
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
                     * 获取
                     * @return WanDomain 
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置
                     * @param _wanDomain 
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanIP 
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置
                     * @param _wanIP 
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanPort 
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置
                     * @param _wanPort 
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanStatus 
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置
                     * @param _wanStatus 
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceSet 
                     * 
                     */
                    std::vector<CynosdbInstance> GetInstanceSet() const;

                    /**
                     * 设置
                     * @param _instanceSet 
                     * 
                     */
                    void SetInstanceSet(const std::vector<CynosdbInstance>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return UniqVpcId VPC ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _uniqVpcId VPC ID
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
                     * 获取Specifies the subnet ID.
                     * @return UniqSubnetId Specifies the subnet ID.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Specifies the subnet ID.
                     * @param _uniqSubnetId Specifies the subnet ID.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Recycling IP information.
                     * @return OldAddrInfo Recycling IP information.
                     * 
                     */
                    OldAddrInfo GetOldAddrInfo() const;

                    /**
                     * 设置Recycling IP information.
                     * @param _oldAddrInfo Recycling IP information.
                     * 
                     */
                    void SetOldAddrInfo(const OldAddrInfo& _oldAddrInfo);

                    /**
                     * 判断参数 OldAddrInfo 是否已赋值
                     * @return OldAddrInfo 是否已赋值
                     * 
                     */
                    bool OldAddrInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcessingTasks 
                     * 
                     */
                    std::vector<std::string> GetProcessingTasks() const;

                    /**
                     * 设置
                     * @param _processingTasks 
                     * 
                     */
                    void SetProcessingTasks(const std::vector<std::string>& _processingTasks);

                    /**
                     * 判断参数 ProcessingTasks 是否已赋值
                     * @return ProcessingTasks 是否已赋值
                     * 
                     */
                    bool ProcessingTasksHasBeenSet() const;

                    /**
                     * 获取
                     * @return Tasks 
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置
                     * @param _tasks 
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取
                     * @return NetServiceId 
                     * 
                     */
                    int64_t GetNetServiceId() const;

                    /**
                     * 设置
                     * @param _netServiceId 
                     * 
                     */
                    void SetNetServiceId(const int64_t& _netServiceId);

                    /**
                     * 判断参数 NetServiceId 是否已赋值
                     * @return NetServiceId 是否已赋值
                     * 
                     */
                    bool NetServiceIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deletedTime;
                    bool m_deletedTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Type of the instance group (network). ha-ha group; ro - read-only group; proxy - proxy; singleRo - read-only instance exclusive.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<CynosdbInstance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Specifies the subnet ID.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Recycling IP information.
                     */
                    OldAddrInfo m_oldAddrInfo;
                    bool m_oldAddrInfoHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_processingTasks;
                    bool m_processingTasksHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_netServiceId;
                    bool m_netServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGROUP_H_
