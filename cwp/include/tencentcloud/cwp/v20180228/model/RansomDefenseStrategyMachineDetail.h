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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Anti-Ransomware Host List
                */
                class RansomDefenseStrategyMachineDetail : public AbstractModel
                {
                public:
                    RansomDefenseStrategyMachineDetail();
                    ~RansomDefenseStrategyMachineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Host name
                     * @return MachineName Host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name
                     * @param _machineName Host name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Host Instance ID
                     * @return InstanceId Host Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Host Instance ID
                     * @param _instanceId Host Instance ID
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
                     * 获取Private IP address
                     * @return MachineIp Private IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP address
                     * @param _machineIp Private IP address
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineWanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineWanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Cloud tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudTags Cloud tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetCloudTags() const;

                    /**
                     * 设置Cloud tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudTags Cloud tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudTags(const std::vector<Tag>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取Availability zone information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionInfo Availability zone information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Availability zone information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionInfo Availability zone information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取CWPP tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag CWPP tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置CWPP tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag CWPP tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Protection status: 0 Disabled, 1 Enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Protection status: 0 Disabled, 1 Enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Protection status: 0 Disabled, 1 Enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Protection status: 0 Disabled, 1 Enabled.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Policy ID. 0 indicates no binding to any policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Policy ID. 0 indicates no binding to any policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID. 0 indicates no binding to any policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Policy ID. 0 indicates no binding to any policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Hard disk information, all hard disks take effect when left blank:
Separate diskId1|diskName1;diskId2|diskName2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskInfo Hard disk information, all hard disks take effect when left blank:
Separate diskId1|diskName1;diskId2|diskName2
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置Hard disk information, all hard disks take effect when left blank:
Separate diskId1|diskName1;diskId2|diskName2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskInfo Hard disk information, all hard disks take effect when left blank:
Separate diskId1|diskName1;diskId2|diskName2
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

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
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                private:

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Host Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Cloud tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Availability zone information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * CWPP tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Protection status: 0 Disabled, 1 Enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Policy ID. 0 indicates no binding to any policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Hard disk information, all hard disks take effect when left blank:
Separate diskId1|diskName1;diskId2|diskName2
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                    /**
                     * Edition information. 0: Basic Edition; 1: Pro Edition; 2: Ultimate Edition; 3: Inclusive Edition.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEDETAIL_H_
