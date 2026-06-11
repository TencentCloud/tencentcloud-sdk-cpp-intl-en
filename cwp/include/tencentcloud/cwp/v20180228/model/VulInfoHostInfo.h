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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Fix vulnerability second popup in batch
                */
                class VulInfoHostInfo : public AbstractModel
                {
                public:
                    VulInfoHostInfo();
                    ~VulInfoHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取host name
                     * @return HostName host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置host name
                     * @param _hostName host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

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
                     * 获取0: Vulnerability cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Manual fixing supported for non-flagship hosts, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: Detecting, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not linux.
                     * @return IsSupportAutoFix 0: Vulnerability cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Manual fixing supported for non-flagship hosts, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: Detecting, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not linux.
                     * 
                     */
                    uint64_t GetIsSupportAutoFix() const;

                    /**
                     * 设置0: Vulnerability cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Manual fixing supported for non-flagship hosts, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: Detecting, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not linux.
                     * @param _isSupportAutoFix 0: Vulnerability cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Manual fixing supported for non-flagship hosts, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: Detecting, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not linux.
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
                     * 获取Host instance ID.
                     * @return InstanceId Host instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Host instance ID.
                     * @param _instanceId Host instance ID.
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
                     * 获取agent online status; 0 for offline, 1 for online.
                     * @return AgentStatus agent online status; 0 for offline, 1 for online.
                     * 
                     */
                    uint64_t GetAgentStatus() const;

                    /**
                     * 设置agent online status; 0 for offline, 1 for online.
                     * @param _agentStatus agent online status; 0 for offline, 1 for online.
                     * 
                     */
                    void SetAgentStatus(const uint64_t& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                private:

                    /**
                     * host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 0: Vulnerability cannot be automatically repaired, 1: Can be automatically repaired, 2: Client offline, 3: Manual fixing supported for non-flagship hosts, 4: Not supported for this model, 5: In remediation, 6: Fixed, 7: Detecting, 9: Fix failed, 10: Ignored, 11: Vulnerability supported only on linux, not Windows, 12: Vulnerability supported only on Windows, not linux.
                     */
                    uint64_t m_isSupportAutoFix;
                    bool m_isSupportAutoFixHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Host type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * agent online status; 0 for offline, 1 for online.
                     */
                    uint64_t m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_
