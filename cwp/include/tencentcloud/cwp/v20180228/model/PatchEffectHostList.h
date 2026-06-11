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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Affected host list by patch
                */
                class PatchEffectHostList : public AbstractModel
                {
                public:
                    PatchEffectHostList();
                    ~PatchEffectHostList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version information: 0-Basic Version 1-Pro Edition 2-Flagship Edition 3-Lite Edition
                     * @return HostVersion Version information: 0-Basic Version 1-Pro Edition 2-Flagship Edition 3-Lite Edition
                     * 
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置Version information: 0-Basic Version 1-Pro Edition 2-Flagship Edition 3-Lite Edition
                     * @param _hostVersion Version information: 0-Basic Version 1-Pro Edition 2-Flagship Edition 3-Lite Edition
                     * 
                     */
                    void SetHostVersion(const uint64_t& _hostVersion);

                    /**
                     * 判断参数 HostVersion 是否已赋值
                     * @return HostVersion 是否已赋值
                     * 
                     */
                    bool HostVersionHasBeenSet() const;

                    /**
                     * 获取Instance status: "PENDING"-creating "LAUNCH_FAILED"-creation failed "RUNNING"-running "STOPPED"-shutdown "STARTING"-starting "STOPPING"-indicates shutdown in progress "REBOOTING"-restarting "SHUTDOWN"-indicate shutdown and pending termination "TERMINATING"-indicates terminating in progress
                     * @return InstanceState Instance status: "PENDING"-creating "LAUNCH_FAILED"-creation failed "RUNNING"-running "STOPPED"-shutdown "STARTING"-starting "STOPPING"-indicates shutdown in progress "REBOOTING"-restarting "SHUTDOWN"-indicate shutdown and pending termination "TERMINATING"-indicates terminating in progress
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status: "PENDING"-creating "LAUNCH_FAILED"-creation failed "RUNNING"-running "STOPPED"-shutdown "STARTING"-starting "STOPPING"-indicates shutdown in progress "REBOOTING"-restarting "SHUTDOWN"-indicate shutdown and pending termination "TERMINATING"-indicates terminating in progress
                     * @param _instanceState Instance status: "PENDING"-creating "LAUNCH_FAILED"-creation failed "RUNNING"-running "STOPPED"-shutdown "STARTING"-starting "STOPPING"-indicates shutdown in progress "REBOOTING"-restarting "SHUTDOWN"-indicate shutdown and pending termination "TERMINATING"-indicates terminating in progress
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取First scan time
                     * @return FirstScanTime First scan time
                     * 
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置First scan time
                     * @param _firstScanTime First scan time
                     * 
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     * 
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return LatestScanTime Last scan time
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _latestScanTime Last scan time
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取Remediation status: 0-not remediated; 1-in remediation; 2-FIX_FAILURE; 3-repair successful; 4-timeout
                     * @return FixStatus Remediation status: 0-not remediated; 1-in remediation; 2-FIX_FAILURE; 3-repair successful; 4-timeout
                     * 
                     */
                    uint64_t GetFixStatus() const;

                    /**
                     * 设置Remediation status: 0-not remediated; 1-in remediation; 2-FIX_FAILURE; 3-repair successful; 4-timeout
                     * @param _fixStatus Remediation status: 0-not remediated; 1-in remediation; 2-FIX_FAILURE; 3-repair successful; 4-timeout
                     * 
                     */
                    void SetFixStatus(const uint64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取Host basic information
                     * @return MachineExtraInfo Host basic information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host basic information
                     * @param _machineExtraInfo Host basic information
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Host Security Uuid
                     * @return Uuid Host Security Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host Security Uuid
                     * @param _uuid Host Security Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Unique Uuid of a CVM or BM machine
                     * @return Quuid Unique Uuid of a CVM or BM machine
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Unique Uuid of a CVM or BM machine
                     * @param _quuid Unique Uuid of a CVM or BM machine
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Status: 0: pending 1: ignored 3: fixed 5: detecting 6: in remediation 7: rolling back 8: FIX_FAILURE
                     * @return Status Status: 0: pending 1: ignored 3: fixed 5: detecting 6: in remediation 7: rolling back 8: FIX_FAILURE
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status: 0: pending 1: ignored 3: fixed 5: detecting 6: in remediation 7: rolling back 8: FIX_FAILURE
                     * @param _status Status: 0: pending 1: ignored 3: fixed 5: detecting 6: in remediation 7: rolling back 8: FIX_FAILURE
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Fixing time
                     * @return LatestFixTime Fixing time
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置Fixing time
                     * @param _latestFixTime Fixing time
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取KB id
                     * @return KbId KB id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置KB id
                     * @param _kbId KB id
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取Whether restart is required 0: not required 1: required
                     * @return RestartRequired Whether restart is required 0: not required 1: required
                     * 
                     */
                    uint64_t GetRestartRequired() const;

                    /**
                     * 设置Whether restart is required 0: not required 1: required
                     * @param _restartRequired Whether restart is required 0: not required 1: required
                     * 
                     */
                    void SetRestartRequired(const uint64_t& _restartRequired);

                    /**
                     * 判断参数 RestartRequired 是否已赋值
                     * @return RestartRequired 是否已赋值
                     * 
                     */
                    bool RestartRequiredHasBeenSet() const;

                    /**
                     * 获取Availability zone ID.	
                     * @return RegionId Availability zone ID.	
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Availability zone ID.	
                     * @param _regionId Availability zone ID.	
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Machine type info
                     * @return MachineType Machine type info
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type info
                     * @param _machineType Machine type info
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Whether to create a snapshot for the fix task: 0: not created; other: created.
                     * @return HasSnapshot Whether to create a snapshot for the fix task: 0: not created; other: created.
                     * 
                     */
                    uint64_t GetHasSnapshot() const;

                    /**
                     * 设置Whether to create a snapshot for the fix task: 0: not created; other: created.
                     * @param _hasSnapshot Whether to create a snapshot for the fix task: 0: not created; other: created.
                     * 
                     */
                    void SetHasSnapshot(const uint64_t& _hasSnapshot);

                    /**
                     * 判断参数 HasSnapshot 是否已赋值
                     * @return HasSnapshot 是否已赋值
                     * 
                     */
                    bool HasSnapshotHasBeenSet() const;

                private:

                    /**
                     * Version information: 0-Basic Version 1-Pro Edition 2-Flagship Edition 3-Lite Edition
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * Instance status: "PENDING"-creating "LAUNCH_FAILED"-creation failed "RUNNING"-running "STOPPED"-shutdown "STARTING"-starting "STOPPING"-indicates shutdown in progress "REBOOTING"-restarting "SHUTDOWN"-indicate shutdown and pending termination "TERMINATING"-indicates terminating in progress
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * First scan time
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * Remediation status: 0-not remediated; 1-in remediation; 2-FIX_FAILURE; 3-repair successful; 4-timeout
                     */
                    uint64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * Host basic information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Host Security Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Unique Uuid of a CVM or BM machine
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Status: 0: pending 1: ignored 3: fixed 5: detecting 6: in remediation 7: rolling back 8: FIX_FAILURE
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Fixing time
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * KB id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * Whether restart is required 0: not required 1: required
                     */
                    uint64_t m_restartRequired;
                    bool m_restartRequiredHasBeenSet;

                    /**
                     * Availability zone ID.	
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Machine type info
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Whether to create a snapshot for the fix task: 0: not created; other: created.
                     */
                    uint64_t m_hasSnapshot;
                    bool m_hasSnapshotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_
