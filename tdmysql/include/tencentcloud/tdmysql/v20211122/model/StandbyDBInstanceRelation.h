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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Disaster recovery instance relationship
                */
                class StandbyDBInstanceRelation : public AbstractModel
                {
                public:
                    StandbyDBInstanceRelation();
                    ~StandbyDBInstanceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary instance ID
                     * @return PrimaryInstanceId Primary instance ID
                     * 
                     */
                    std::string GetPrimaryInstanceId() const;

                    /**
                     * 设置Primary instance ID
                     * @param _primaryInstanceId Primary instance ID
                     * 
                     */
                    void SetPrimaryInstanceId(const std::string& _primaryInstanceId);

                    /**
                     * 判断参数 PrimaryInstanceId 是否已赋值
                     * @return PrimaryInstanceId 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取Primary instance name
                     * @return PrimaryInstanceName Primary instance name
                     * 
                     */
                    std::string GetPrimaryInstanceName() const;

                    /**
                     * 设置Primary instance name
                     * @param _primaryInstanceName Primary instance name
                     * 
                     */
                    void SetPrimaryInstanceName(const std::string& _primaryInstanceName);

                    /**
                     * 判断参数 PrimaryInstanceName 是否已赋值
                     * @return PrimaryInstanceName 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceNameHasBeenSet() const;

                    /**
                     * 获取Region of the primary instance
                     * @return PrimaryRegion Region of the primary instance
                     * 
                     */
                    std::string GetPrimaryRegion() const;

                    /**
                     * 设置Region of the primary instance
                     * @param _primaryRegion Region of the primary instance
                     * 
                     */
                    void SetPrimaryRegion(const std::string& _primaryRegion);

                    /**
                     * 判断参数 PrimaryRegion 是否已赋值
                     * @return PrimaryRegion 是否已赋值
                     * 
                     */
                    bool PrimaryRegionHasBeenSet() const;

                    /**
                     * 获取Subnet IP of the primary instance
                     * @return PrimaryVip Subnet IP of the primary instance
                     * 
                     */
                    std::string GetPrimaryVip() const;

                    /**
                     * 设置Subnet IP of the primary instance
                     * @param _primaryVip Subnet IP of the primary instance
                     * 
                     */
                    void SetPrimaryVip(const std::string& _primaryVip);

                    /**
                     * 判断参数 PrimaryVip 是否已赋值
                     * @return PrimaryVip 是否已赋值
                     * 
                     */
                    bool PrimaryVipHasBeenSet() const;

                    /**
                     * 获取Port of the primary instance subnet
                     * @return PrimaryVport Port of the primary instance subnet
                     * 
                     */
                    int64_t GetPrimaryVport() const;

                    /**
                     * 设置Port of the primary instance subnet
                     * @param _primaryVport Port of the primary instance subnet
                     * 
                     */
                    void SetPrimaryVport(const int64_t& _primaryVport);

                    /**
                     * 判断参数 PrimaryVport 是否已赋值
                     * @return PrimaryVport 是否已赋值
                     * 
                     */
                    bool PrimaryVportHasBeenSet() const;

                    /**
                     * 获取Primary instance AZ
                     * @return PrimaryZones Primary instance AZ
                     * 
                     */
                    std::vector<std::string> GetPrimaryZones() const;

                    /**
                     * 设置Primary instance AZ
                     * @param _primaryZones Primary instance AZ
                     * 
                     */
                    void SetPrimaryZones(const std::vector<std::string>& _primaryZones);

                    /**
                     * 判断参数 PrimaryZones 是否已赋值
                     * @return PrimaryZones 是否已赋值
                     * 
                     */
                    bool PrimaryZonesHasBeenSet() const;

                    /**
                     * 获取Primary instance running status
                     * @return PrimaryStatus Primary instance running status
                     * 
                     */
                    std::string GetPrimaryStatus() const;

                    /**
                     * 设置Primary instance running status
                     * @param _primaryStatus Primary instance running status
                     * 
                     */
                    void SetPrimaryStatus(const std::string& _primaryStatus);

                    /**
                     * 判断参数 PrimaryStatus 是否已赋值
                     * @return PrimaryStatus 是否已赋值
                     * 
                     */
                    bool PrimaryStatusHasBeenSet() const;

                    /**
                     * 获取Disaster Recovery instance ID
                     * @return SecondaryInstanceId Disaster Recovery instance ID
                     * 
                     */
                    std::string GetSecondaryInstanceId() const;

                    /**
                     * 设置Disaster Recovery instance ID
                     * @param _secondaryInstanceId Disaster Recovery instance ID
                     * 
                     */
                    void SetSecondaryInstanceId(const std::string& _secondaryInstanceId);

                    /**
                     * 判断参数 SecondaryInstanceId 是否已赋值
                     * @return SecondaryInstanceId 是否已赋值
                     * 
                     */
                    bool SecondaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取Disaster Recovery instance name
                     * @return SecondaryInstanceName Disaster Recovery instance name
                     * 
                     */
                    std::string GetSecondaryInstanceName() const;

                    /**
                     * 设置Disaster Recovery instance name
                     * @param _secondaryInstanceName Disaster Recovery instance name
                     * 
                     */
                    void SetSecondaryInstanceName(const std::string& _secondaryInstanceName);

                    /**
                     * 判断参数 SecondaryInstanceName 是否已赋值
                     * @return SecondaryInstanceName 是否已赋值
                     * 
                     */
                    bool SecondaryInstanceNameHasBeenSet() const;

                    /**
                     * 获取Region of the standby instance
                     * @return SecondaryRegion Region of the standby instance
                     * 
                     */
                    std::string GetSecondaryRegion() const;

                    /**
                     * 设置Region of the standby instance
                     * @param _secondaryRegion Region of the standby instance
                     * 
                     */
                    void SetSecondaryRegion(const std::string& _secondaryRegion);

                    /**
                     * 判断参数 SecondaryRegion 是否已赋值
                     * @return SecondaryRegion 是否已赋值
                     * 
                     */
                    bool SecondaryRegionHasBeenSet() const;

                    /**
                     * 获取Subnet IP of the Disaster Recovery instance
                     * @return SecondaryVip Subnet IP of the Disaster Recovery instance
                     * 
                     */
                    std::string GetSecondaryVip() const;

                    /**
                     * 设置Subnet IP of the Disaster Recovery instance
                     * @param _secondaryVip Subnet IP of the Disaster Recovery instance
                     * 
                     */
                    void SetSecondaryVip(const std::string& _secondaryVip);

                    /**
                     * 判断参数 SecondaryVip 是否已赋值
                     * @return SecondaryVip 是否已赋值
                     * 
                     */
                    bool SecondaryVipHasBeenSet() const;

                    /**
                     * 获取Port of the Disaster Recovery instance subnet
                     * @return SecondaryVport Port of the Disaster Recovery instance subnet
                     * 
                     */
                    int64_t GetSecondaryVport() const;

                    /**
                     * 设置Port of the Disaster Recovery instance subnet
                     * @param _secondaryVport Port of the Disaster Recovery instance subnet
                     * 
                     */
                    void SetSecondaryVport(const int64_t& _secondaryVport);

                    /**
                     * 判断参数 SecondaryVport 是否已赋值
                     * @return SecondaryVport 是否已赋值
                     * 
                     */
                    bool SecondaryVportHasBeenSet() const;

                    /**
                     * 获取Disaster Recovery instance availability zone
                     * @return SecondaryZones Disaster Recovery instance availability zone
                     * 
                     */
                    std::vector<std::string> GetSecondaryZones() const;

                    /**
                     * 设置Disaster Recovery instance availability zone
                     * @param _secondaryZones Disaster Recovery instance availability zone
                     * 
                     */
                    void SetSecondaryZones(const std::vector<std::string>& _secondaryZones);

                    /**
                     * 判断参数 SecondaryZones 是否已赋值
                     * @return SecondaryZones 是否已赋值
                     * 
                     */
                    bool SecondaryZonesHasBeenSet() const;

                    /**
                     * 获取Disaster Recovery instance running status
                     * @return SecondaryStatus Disaster Recovery instance running status
                     * 
                     */
                    std::string GetSecondaryStatus() const;

                    /**
                     * 设置Disaster Recovery instance running status
                     * @param _secondaryStatus Disaster Recovery instance running status
                     * 
                     */
                    void SetSecondaryStatus(const std::string& _secondaryStatus);

                    /**
                     * 判断参数 SecondaryStatus 是否已赋值
                     * @return SecondaryStatus 是否已赋值
                     * 
                     */
                    bool SecondaryStatusHasBeenSet() const;

                    /**
                     * 获取Connection type. Valid values: `log_service`, `raft`.
                     * @return ConnType Connection type. Valid values: `log_service`, `raft`.
                     * 
                     */
                    std::string GetConnType() const;

                    /**
                     * 设置Connection type. Valid values: `log_service`, `raft`.
                     * @param _connType Connection type. Valid values: `log_service`, `raft`.
                     * 
                     */
                    void SetConnType(const std::string& _connType);

                    /**
                     * 判断参数 ConnType 是否已赋值
                     * @return ConnType 是否已赋值
                     * 
                     */
                    bool ConnTypeHasBeenSet() const;

                    /**
                     * 获取Synchronization type. Valid values: `sync` and `async`.
                     * @return SyncMode Synchronization type. Valid values: `sync` and `async`.
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置Synchronization type. Valid values: `sync` and `async`.
                     * @param _syncMode Synchronization type. Valid values: `sync` and `async`.
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取Synchronization status. 1: synchronizing; 2: sync exception
                     * @return SyncStatus Synchronization status. 1: synchronizing; 2: sync exception
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置Synchronization status. 1: synchronizing; 2: sync exception
                     * @param _syncStatus Synchronization status. 1: synchronizing; 2: sync exception
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取Synchronization status description. Error information when the synchronization status is abnormal.
                     * @return SyncStatusDesc Synchronization status description. Error information when the synchronization status is abnormal.
                     * 
                     */
                    std::string GetSyncStatusDesc() const;

                    /**
                     * 设置Synchronization status description. Error information when the synchronization status is abnormal.
                     * @param _syncStatusDesc Synchronization status description. Error information when the synchronization status is abnormal.
                     * 
                     */
                    void SetSyncStatusDesc(const std::string& _syncStatusDesc);

                    /**
                     * 判断参数 SyncStatusDesc 是否已赋值
                     * @return SyncStatusDesc 是否已赋值
                     * 
                     */
                    bool SyncStatusDescHasBeenSet() const;

                    /**
                     * 获取Disaster recovery status description. Valid values: "creating", "running", "modifying". Empty if no disaster recovery relationship exists.
                     * @return StandbyStatus Disaster recovery status description. Valid values: "creating", "running", "modifying". Empty if no disaster recovery relationship exists.
                     * 
                     */
                    std::string GetStandbyStatus() const;

                    /**
                     * 设置Disaster recovery status description. Valid values: "creating", "running", "modifying". Empty if no disaster recovery relationship exists.
                     * @param _standbyStatus Disaster recovery status description. Valid values: "creating", "running", "modifying". Empty if no disaster recovery relationship exists.
                     * 
                     */
                    void SetStandbyStatus(const std::string& _standbyStatus);

                    /**
                     * 判断参数 StandbyStatus 是否已赋值
                     * @return StandbyStatus 是否已赋值
                     * 
                     */
                    bool StandbyStatusHasBeenSet() const;

                    /**
                     * 获取Primary instance version
                     * @return PrimaryCreateVersion Primary instance version
                     * 
                     */
                    std::string GetPrimaryCreateVersion() const;

                    /**
                     * 设置Primary instance version
                     * @param _primaryCreateVersion Primary instance version
                     * 
                     */
                    void SetPrimaryCreateVersion(const std::string& _primaryCreateVersion);

                    /**
                     * 判断参数 PrimaryCreateVersion 是否已赋值
                     * @return PrimaryCreateVersion 是否已赋值
                     * 
                     */
                    bool PrimaryCreateVersionHasBeenSet() const;

                    /**
                     * 获取Disaster Recovery instance version
                     * @return SecondaryCreateVersion Disaster Recovery instance version
                     * 
                     */
                    std::string GetSecondaryCreateVersion() const;

                    /**
                     * 设置Disaster Recovery instance version
                     * @param _secondaryCreateVersion Disaster Recovery instance version
                     * 
                     */
                    void SetSecondaryCreateVersion(const std::string& _secondaryCreateVersion);

                    /**
                     * 判断参数 SecondaryCreateVersion 是否已赋值
                     * @return SecondaryCreateVersion 是否已赋值
                     * 
                     */
                    bool SecondaryCreateVersionHasBeenSet() const;

                    /**
                     * 获取Latency in seconds
                     * @return SyncDelay Latency in seconds
                     * 
                     */
                    int64_t GetSyncDelay() const;

                    /**
                     * 设置Latency in seconds
                     * @param _syncDelay Latency in seconds
                     * 
                     */
                    void SetSyncDelay(const int64_t& _syncDelay);

                    /**
                     * 判断参数 SyncDelay 是否已赋值
                     * @return SyncDelay 是否已赋值
                     * 
                     */
                    bool SyncDelayHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID
                     */
                    std::string m_primaryInstanceId;
                    bool m_primaryInstanceIdHasBeenSet;

                    /**
                     * Primary instance name
                     */
                    std::string m_primaryInstanceName;
                    bool m_primaryInstanceNameHasBeenSet;

                    /**
                     * Region of the primary instance
                     */
                    std::string m_primaryRegion;
                    bool m_primaryRegionHasBeenSet;

                    /**
                     * Subnet IP of the primary instance
                     */
                    std::string m_primaryVip;
                    bool m_primaryVipHasBeenSet;

                    /**
                     * Port of the primary instance subnet
                     */
                    int64_t m_primaryVport;
                    bool m_primaryVportHasBeenSet;

                    /**
                     * Primary instance AZ
                     */
                    std::vector<std::string> m_primaryZones;
                    bool m_primaryZonesHasBeenSet;

                    /**
                     * Primary instance running status
                     */
                    std::string m_primaryStatus;
                    bool m_primaryStatusHasBeenSet;

                    /**
                     * Disaster Recovery instance ID
                     */
                    std::string m_secondaryInstanceId;
                    bool m_secondaryInstanceIdHasBeenSet;

                    /**
                     * Disaster Recovery instance name
                     */
                    std::string m_secondaryInstanceName;
                    bool m_secondaryInstanceNameHasBeenSet;

                    /**
                     * Region of the standby instance
                     */
                    std::string m_secondaryRegion;
                    bool m_secondaryRegionHasBeenSet;

                    /**
                     * Subnet IP of the Disaster Recovery instance
                     */
                    std::string m_secondaryVip;
                    bool m_secondaryVipHasBeenSet;

                    /**
                     * Port of the Disaster Recovery instance subnet
                     */
                    int64_t m_secondaryVport;
                    bool m_secondaryVportHasBeenSet;

                    /**
                     * Disaster Recovery instance availability zone
                     */
                    std::vector<std::string> m_secondaryZones;
                    bool m_secondaryZonesHasBeenSet;

                    /**
                     * Disaster Recovery instance running status
                     */
                    std::string m_secondaryStatus;
                    bool m_secondaryStatusHasBeenSet;

                    /**
                     * Connection type. Valid values: `log_service`, `raft`.
                     */
                    std::string m_connType;
                    bool m_connTypeHasBeenSet;

                    /**
                     * Synchronization type. Valid values: `sync` and `async`.
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * Synchronization status. 1: synchronizing; 2: sync exception
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * Synchronization status description. Error information when the synchronization status is abnormal.
                     */
                    std::string m_syncStatusDesc;
                    bool m_syncStatusDescHasBeenSet;

                    /**
                     * Disaster recovery status description. Valid values: "creating", "running", "modifying". Empty if no disaster recovery relationship exists.
                     */
                    std::string m_standbyStatus;
                    bool m_standbyStatusHasBeenSet;

                    /**
                     * Primary instance version
                     */
                    std::string m_primaryCreateVersion;
                    bool m_primaryCreateVersionHasBeenSet;

                    /**
                     * Disaster Recovery instance version
                     */
                    std::string m_secondaryCreateVersion;
                    bool m_secondaryCreateVersionHasBeenSet;

                    /**
                     * Latency in seconds
                     */
                    int64_t m_syncDelay;
                    bool m_syncDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_
