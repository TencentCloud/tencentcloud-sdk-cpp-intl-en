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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
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
                * List of hosts affected by vulnerabilities
                */
                class VulEffectHostList : public AbstractModel
                {
                public:
                    VulEffectHostList();
                    ~VulEffectHostList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Status: 0 - pending processing; 1 - ignored; 3 - fixed; 5 - detecting; 6 - in remediation; 7 - rolling back; 8 - fix failed.
                     * @return Status Status: 0 - pending processing; 1 - ignored; 3 - fixed; 5 - detecting; 6 - in remediation; 7 - rolling back; 8 - fix failed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status: 0 - pending processing; 1 - ignored; 3 - fixed; 5 - detecting; 6 - in remediation; 7 - rolling back; 8 - fix failed.
                     * @param _status Status: 0 - pending processing; 1 - ignored; 3 - fixed; 5 - detecting; 6 - in remediation; 7 - rolling back; 8 - fix failed.
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
                     * 获取Last detection time
                     * @return LastTime Last detection time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection time
                     * @param _lastTime Last detection time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * @return Level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * @param _level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
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
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
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
                     * 获取Host IP address
                     * @return HostIp Host IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIp Host IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host alias
                     * @return AliasName Host alias
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Host alias
                     * @param _aliasName Host alias
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Host tag
                     * @return Tags Host tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Host tag
                     * @param _tags Host tag
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Version information: 0-Basic version, 1-Pro edition, 2-Flagship edition, 3-Lightweight edition
                     * @return HostVersion Version information: 0-Basic version, 1-Pro edition, 2-Flagship edition, 3-Lightweight edition
                     * 
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置Version information: 0-Basic version, 1-Pro edition, 2-Flagship edition, 3-Lightweight edition
                     * @param _hostVersion Version information: 0-Basic version, 1-Pro edition, 2-Flagship edition, 3-Lightweight edition
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
                     * 获取Whether automatic fixing is supported 0: Cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Host can only be manually repaired if not flagship, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: In-progress detection, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not on linux, 13: Fixing failed but host is offline, 14: Fixing failed but host is not flagship, 15: Manually fixed
                     * @return IsSupportAutoFix Whether automatic fixing is supported 0: Cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Host can only be manually repaired if not flagship, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: In-progress detection, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not on linux, 13: Fixing failed but host is offline, 14: Fixing failed but host is not flagship, 15: Manually fixed
                     * 
                     */
                    uint64_t GetIsSupportAutoFix() const;

                    /**
                     * 设置Whether automatic fixing is supported 0: Cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Host can only be manually repaired if not flagship, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: In-progress detection, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not on linux, 13: Fixing failed but host is offline, 14: Fixing failed but host is not flagship, 15: Manually fixed
                     * @param _isSupportAutoFix Whether automatic fixing is supported 0: Cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Host can only be manually repaired if not flagship, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: In-progress detection, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not on linux, 13: Fixing failed but host is offline, 14: Fixing failed but host is not flagship, 15: Manually fixed
                     * 
                     */
                    void SetIsSupportAutoFix(const uint64_t& _isSupportAutoFix);

                    /**
                     * 判断参数 IsSupportAutoFix 是否已赋值
                     * @return IsSupportAutoFix 是否已赋值
                     * 
                     */
                    bool IsSupportAutoFixHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return FixStatusMsg Reason for failure
                     * 
                     */
                    std::string GetFixStatusMsg() const;

                    /**
                     * 设置Reason for failure
                     * @param _fixStatusMsg Reason for failure
                     * 
                     */
                    void SetFixStatusMsg(const std::string& _fixStatusMsg);

                    /**
                     * 判断参数 FixStatusMsg 是否已赋值
                     * @return FixStatusMsg 是否已赋值
                     * 
                     */
                    bool FixStatusMsgHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return FirstDiscoveryTime First detection time
                     * 
                     */
                    std::string GetFirstDiscoveryTime() const;

                    /**
                     * 设置First detection time
                     * @param _firstDiscoveryTime First detection time
                     * 
                     */
                    void SetFirstDiscoveryTime(const std::string& _firstDiscoveryTime);

                    /**
                     * 判断参数 FirstDiscoveryTime 是否已赋值
                     * @return FirstDiscoveryTime 是否已赋值
                     * 
                     */
                    bool FirstDiscoveryTimeHasBeenSet() const;

                    /**
                     * 获取Instance status: "PENDING" - creating, "LAUNCH_FAILED" - creation failed, "RUNNING" - running, "STOPPED" - shutdown, "STARTING" - starting, "STOPPING" - indicates shutdown in progress, "REBOOTING" - restarting, "SHUTDOWN" - indicate shutdown and pending termination, "TERMINATING" - indicates terminating in progress.
                     * @return InstanceState Instance status: "PENDING" - creating, "LAUNCH_FAILED" - creation failed, "RUNNING" - running, "STOPPED" - shutdown, "STARTING" - starting, "STOPPING" - indicates shutdown in progress, "REBOOTING" - restarting, "SHUTDOWN" - indicate shutdown and pending termination, "TERMINATING" - indicates terminating in progress.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status: "PENDING" - creating, "LAUNCH_FAILED" - creation failed, "RUNNING" - running, "STOPPED" - shutdown, "STARTING" - starting, "STOPPING" - indicates shutdown in progress, "REBOOTING" - restarting, "SHUTDOWN" - indicate shutdown and pending termination, "TERMINATING" - indicates terminating in progress.
                     * @param _instanceState Instance status: "PENDING" - creating, "LAUNCH_FAILED" - creation failed, "RUNNING" - running, "STOPPED" - shutdown, "STARTING" - starting, "STOPPING" - indicates shutdown in progress, "REBOOTING" - restarting, "SHUTDOWN" - indicate shutdown and pending termination, "TERMINATING" - indicates terminating in progress.
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
                     * 获取Public IP address
                     * @return PublicIpAddresses Public IP address
                     * 
                     */
                    std::string GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIpAddresses Public IP address
                     * 
                     */
                    void SetPublicIpAddresses(const std::string& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Cloud Tag Information
                     * @return CloudTags Cloud Tag Information
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置Cloud Tag Information
                     * @param _cloudTags Cloud Tag Information
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
                     * @return MachineExtraInfo Host Additional Information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
                     * @param _machineExtraInfo Host Additional Information
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
                     * 获取Host type
                     * @return MachineType Host type
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Host type
                     * @param _machineType Host type
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

                    /**
                     * 获取Last repair time
                     * @return LatestFixTime Last repair time
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置Last repair time
                     * @param _latestFixTime Last repair time
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
                     * 获取Description
                     * @return DescriptionEn Description
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置Description
                     * @param _descriptionEn Description
                     * 
                     */
                    void SetDescriptionEn(const std::string& _descriptionEn);

                    /**
                     * 判断参数 DescriptionEn 是否已赋值
                     * @return DescriptionEn 是否已赋值
                     * 
                     */
                    bool DescriptionEnHasBeenSet() const;

                private:

                    /**
                     * Event ID
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Status: 0 - pending processing; 1 - ignored; 3 - fixed; 5 - detecting; 6 - in remediation; 7 - rolling back; 8 - fix failed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host alias
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Host tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Version information: 0-Basic version, 1-Pro edition, 2-Flagship edition, 3-Lightweight edition
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * Whether automatic fixing is supported 0: Cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Host can only be manually repaired if not flagship, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: In-progress detection, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not on linux, 13: Fixing failed but host is offline, 14: Fixing failed but host is not flagship, 15: Manually fixed
                     */
                    uint64_t m_isSupportAutoFix;
                    bool m_isSupportAutoFixHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_fixStatusMsg;
                    bool m_fixStatusMsgHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_firstDiscoveryTime;
                    bool m_firstDiscoveryTimeHasBeenSet;

                    /**
                     * Instance status: "PENDING" - creating, "LAUNCH_FAILED" - creation failed, "RUNNING" - running, "STOPPED" - shutdown, "STARTING" - starting, "STOPPING" - indicates shutdown in progress, "REBOOTING" - restarting, "SHUTDOWN" - indicate shutdown and pending termination, "TERMINATING" - indicates terminating in progress.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Cloud Tag Information
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Host Additional Information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Host type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Whether to create a snapshot for the fix task: 0: not created; other: created.
                     */
                    uint64_t m_hasSnapshot;
                    bool m_hasSnapshotHasBeenSet;

                    /**
                     * Last repair time
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_
