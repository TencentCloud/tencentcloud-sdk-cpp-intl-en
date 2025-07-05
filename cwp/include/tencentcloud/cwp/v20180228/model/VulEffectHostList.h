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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status. 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 7: rolling back; 8: fixing failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status. 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 7: rolling back; 8: fixing failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 7: rolling back; 8: fixing failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status. 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 7: rolling back; 8: fixing failed.Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastTime Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastTime Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AliasName Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aliasName Host alias
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostVersion Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostVersion Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether automatic fixing is supported. 0: not supported; 1: supported; 2: client offline; 3: manual fixing supported for Ultimate Edition hosts; 4: not supported for this model; 5: fixing, 6: fixed; 7: detecting; 9: fixing failed; 10: ignored; 11: supported for Linux but not Windows; 12: supported for Windows but not Linux; 13: fixing failed but host is offline; 14: fixing failed but host is not of the Ultimate edition; 15: manually fixed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSupportAutoFix Whether automatic fixing is supported. 0: not supported; 1: supported; 2: client offline; 3: manual fixing supported for Ultimate Edition hosts; 4: not supported for this model; 5: fixing, 6: fixed; 7: detecting; 9: fixing failed; 10: ignored; 11: supported for Linux but not Windows; 12: supported for Windows but not Linux; 13: fixing failed but host is offline; 14: fixing failed but host is not of the Ultimate edition; 15: manually fixed.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsSupportAutoFix() const;

                    /**
                     * 设置Whether automatic fixing is supported. 0: not supported; 1: supported; 2: client offline; 3: manual fixing supported for Ultimate Edition hosts; 4: not supported for this model; 5: fixing, 6: fixed; 7: detecting; 9: fixing failed; 10: ignored; 11: supported for Linux but not Windows; 12: supported for Windows but not Linux; 13: fixing failed but host is offline; 14: fixing failed but host is not of the Ultimate edition; 15: manually fixed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSupportAutoFix Whether automatic fixing is supported. 0: not supported; 1: supported; 2: client offline; 3: manual fixing supported for Ultimate Edition hosts; 4: not supported for this model; 5: fixing, 6: fixed; 7: detecting; 9: fixing failed; 10: ignored; 11: supported for Linux but not Windows; 12: supported for Windows but not Linux; 13: fixing failed but host is offline; 14: fixing failed but host is not of the Ultimate edition; 15: manually fixed.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixStatusMsg Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFixStatusMsg() const;

                    /**
                     * 设置Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixStatusMsg Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstDiscoveryTime First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstDiscoveryTime() const;

                    /**
                     * 设置First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstDiscoveryTime First detection time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance status. "PENDING": creating; "LAUNCH_FAILED" : creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": shut down and pending termination; "TERMINATING": terminating.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceState Instance status. "PENDING": creating; "LAUNCH_FAILED" : creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": shut down and pending termination; "TERMINATING": terminating.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. "PENDING": creating; "LAUNCH_FAILED" : creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": shut down and pending termination; "TERMINATING": terminating.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceState Instance status. "PENDING": creating; "LAUNCH_FAILED" : creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": shut down and pending termination; "TERMINATING": terminating.Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIpAddresses Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicIpAddresses Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudTags Cloud tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置Cloud tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudTags Cloud tag information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Status. 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 7: rolling back; 8: fixing failed.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * Whether automatic fixing is supported. 0: not supported; 1: supported; 2: client offline; 3: manual fixing supported for Ultimate Edition hosts; 4: not supported for this model; 5: fixing, 6: fixed; 7: detecting; 9: fixing failed; 10: ignored; 11: supported for Linux but not Windows; 12: supported for Windows but not Linux; 13: fixing failed but host is offline; 14: fixing failed but host is not of the Ultimate edition; 15: manually fixed.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isSupportAutoFix;
                    bool m_isSupportAutoFixHasBeenSet;

                    /**
                     * Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fixStatusMsg;
                    bool m_fixStatusMsgHasBeenSet;

                    /**
                     * First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstDiscoveryTime;
                    bool m_firstDiscoveryTimeHasBeenSet;

                    /**
                     * Instance status. "PENDING": creating; "LAUNCH_FAILED" : creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": shut down and pending termination; "TERMINATING": terminating.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Cloud tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Host additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_
