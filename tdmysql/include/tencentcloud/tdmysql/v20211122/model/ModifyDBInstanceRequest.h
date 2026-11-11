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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDBInstance request structure.
                */
                class ModifyDBInstanceRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceRequest();
                    ~ModifyDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Whether to only perform pre-check without actually executing the configuration change. true: only return the configuration change plan and pre-check result; false: actually execute the configuration change (default)</p>
                     * @return DryRun <p>Whether to only perform pre-check without actually executing the configuration change. true: only return the configuration change plan and pre-check result; false: actually execute the configuration change (default)</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to only perform pre-check without actually executing the configuration change. true: only return the configuration change plan and pre-check result; false: actually execute the configuration change (default)</p>
                     * @param _dryRun <p>Whether to only perform pre-check without actually executing the configuration change. true: only return the configuration change plan and pre-check result; false: actually execute the configuration change (default)</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPU cores of peer nodes. If not passed, maintain current value unchanged</p>
                     * @return HybridNodeCpu <p>Number of CPU cores of peer nodes. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    int64_t GetHybridNodeCpu() const;

                    /**
                     * 设置<p>Number of CPU cores of peer nodes. If not passed, maintain current value unchanged</p>
                     * @param _hybridNodeCpu <p>Number of CPU cores of peer nodes. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    void SetHybridNodeCpu(const int64_t& _hybridNodeCpu);

                    /**
                     * 判断参数 HybridNodeCpu 是否已赋值
                     * @return HybridNodeCpu 是否已赋值
                     * 
                     */
                    bool HybridNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Peer-to-peer node memory size in GB. If not passed, maintain current value unchanged</p>
                     * @return HybridNodeMem <p>Peer-to-peer node memory size in GB. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    int64_t GetHybridNodeMem() const;

                    /**
                     * 设置<p>Peer-to-peer node memory size in GB. If not passed, maintain current value unchanged</p>
                     * @param _hybridNodeMem <p>Peer-to-peer node memory size in GB. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    void SetHybridNodeMem(const int64_t& _hybridNodeMem);

                    /**
                     * 判断参数 HybridNodeMem 是否已赋值
                     * @return HybridNodeMem 是否已赋值
                     * 
                     */
                    bool HybridNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Number of peer nodes. If not passed, maintain current value unchanged</p>
                     * @return HybridNodeNum <p>Number of peer nodes. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    int64_t GetHybridNodeNum() const;

                    /**
                     * 设置<p>Number of peer nodes. If not passed, maintain current value unchanged</p>
                     * @param _hybridNodeNum <p>Number of peer nodes. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    void SetHybridNodeNum(const int64_t& _hybridNodeNum);

                    /**
                     * 判断参数 HybridNodeNum 是否已赋值
                     * @return HybridNodeNum 是否已赋值
                     * 
                     */
                    bool HybridNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Peer-to-peer node disk capacity in GB. If not passed, maintain current value unchanged</p>
                     * @return Disk <p>Peer-to-peer node disk capacity in GB. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>Peer-to-peer node disk capacity in GB. If not passed, maintain current value unchanged</p>
                     * @param _disk <p>Peer-to-peer node disk capacity in GB. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>Storage type. Available values: CLOUD_HSSD (enhanced SSD cloud disk), CLOUD_TCS (local disk), CLOUD_BSSD (universal SSD cloud disk). If not specified, the current value remains unchanged.</p>
                     * @return StorageType <p>Storage type. Available values: CLOUD_HSSD (enhanced SSD cloud disk), CLOUD_TCS (local disk), CLOUD_BSSD (universal SSD cloud disk). If not specified, the current value remains unchanged.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type. Available values: CLOUD_HSSD (enhanced SSD cloud disk), CLOUD_TCS (local disk), CLOUD_BSSD (universal SSD cloud disk). If not specified, the current value remains unchanged.</p>
                     * @param _storageType <p>Storage type. Available values: CLOUD_HSSD (enhanced SSD cloud disk), CLOUD_TCS (local disk), CLOUD_BSSD (universal SSD cloud disk). If not specified, the current value remains unchanged.</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Specification code, for example, 4c8g, 16c32g</p>
                     * @return SpecCode <p>Specification code, for example, 4c8g, 16c32g</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Specification code, for example, 4c8g, 16c32g</p>
                     * @param _specCode <p>Specification code, for example, 4c8g, 16c32g</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Target AZ list. If not passed, maintain current value unchanged</p>
                     * @return Zones <p>Target AZ list. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Target AZ list. If not passed, maintain current value unchanged</p>
                     * @param _zones <p>Target AZ list. If not passed, maintain current value unchanged</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone mode. 1: single availability zone. 3: multi-availability zone primary AZ mode</p>
                     * @return AZMode <p>Availability zone mode. 1: single availability zone. 3: multi-availability zone primary AZ mode</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>Availability zone mode. 1: single availability zone. 3: multi-availability zone primary AZ mode</p>
                     * @param _aZMode <p>Availability zone mode. 1: single availability zone. 3: multi-availability zone primary AZ mode</p>
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>Primary AZ. This parameter is valid only when AZMode is 3</p>
                     * @return PrimaryAZ <p>Primary AZ. This parameter is valid only when AZMode is 3</p>
                     * 
                     */
                    std::string GetPrimaryAZ() const;

                    /**
                     * 设置<p>Primary AZ. This parameter is valid only when AZMode is 3</p>
                     * @param _primaryAZ <p>Primary AZ. This parameter is valid only when AZMode is 3</p>
                     * 
                     */
                    void SetPrimaryAZ(const std::string& _primaryAZ);

                    /**
                     * 判断参数 PrimaryAZ 是否已赋值
                     * @return PrimaryAZ 是否已赋值
                     * 
                     */
                    bool PrimaryAZHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas, value ranges from 1 to 3</p>
                     * @return FullReplications <p>Number of replicas, value ranges from 1 to 3</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>Number of replicas, value ranges from 1 to 3</p>
                     * @param _fullReplications <p>Number of replicas, value ranges from 1 to 3</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Whether to only perform pre-check without actually executing the configuration change. true: only return the configuration change plan and pre-check result; false: actually execute the configuration change (default)</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Number of CPU cores of peer nodes. If not passed, maintain current value unchanged</p>
                     */
                    int64_t m_hybridNodeCpu;
                    bool m_hybridNodeCpuHasBeenSet;

                    /**
                     * <p>Peer-to-peer node memory size in GB. If not passed, maintain current value unchanged</p>
                     */
                    int64_t m_hybridNodeMem;
                    bool m_hybridNodeMemHasBeenSet;

                    /**
                     * <p>Number of peer nodes. If not passed, maintain current value unchanged</p>
                     */
                    int64_t m_hybridNodeNum;
                    bool m_hybridNodeNumHasBeenSet;

                    /**
                     * <p>Peer-to-peer node disk capacity in GB. If not passed, maintain current value unchanged</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>Storage type. Available values: CLOUD_HSSD (enhanced SSD cloud disk), CLOUD_TCS (local disk), CLOUD_BSSD (universal SSD cloud disk). If not specified, the current value remains unchanged.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Specification code, for example, 4c8g, 16c32g</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Target AZ list. If not passed, maintain current value unchanged</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Availability zone mode. 1: single availability zone. 3: multi-availability zone primary AZ mode</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>Primary AZ. This parameter is valid only when AZMode is 3</p>
                     */
                    std::string m_primaryAZ;
                    bool m_primaryAZHasBeenSet;

                    /**
                     * <p>Number of replicas, value ranges from 1 to 3</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_
