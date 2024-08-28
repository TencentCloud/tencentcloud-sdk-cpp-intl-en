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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_

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
                * Authorize binding details
                */
                class LicenseBindDetail : public AbstractModel
                {
                public:
                    LicenseBindDetail();
                    ~LicenseBindDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine Alias
                     * @return MachineName Machine Alias
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine Alias
                     * @param _machineName Machine Alias
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
                     * 获取Machine Public IP address
                     * @return MachineWanIp Machine Public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Machine Public IP address
                     * @param _machineWanIp Machine Public IP address
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
                     * 获取Machine Private IP address
                     * @return MachineIp Machine Private IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Machine Private IP address
                     * @param _machineIp Machine Private IP address
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
                     * 获取CVM UUID
                     * @return Quuid CVM UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM UUID
                     * @param _quuid CVM UUID
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
                     * 获取CWPP client UUID
                     * @return Uuid CWPP client UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP client UUID
                     * @param _uuid CWPP client UUID
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
                     * 获取Tag information
                     * @return Tags Tag information
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag information
                     * @param _tags Tag information
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
                     * 获取CWPP client status: OFFLINE, ONLINE, and UNINSTALL.
                     * @return AgentStatus CWPP client status: OFFLINE, ONLINE, and UNINSTALL.
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置CWPP client status: OFFLINE, ONLINE, and UNINSTALL.
                     * @param _agentStatus CWPP client status: OFFLINE, ONLINE, and UNINSTALL.
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取Whether unbinding is allowed: false - unbinding is not allowed.
                     * @return IsUnBind Whether unbinding is allowed: false - unbinding is not allowed.
                     * 
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置Whether unbinding is allowed: false - unbinding is not allowed.
                     * @param _isUnBind Whether unbinding is allowed: false - unbinding is not allowed.
                     * 
                     */
                    void SetIsUnBind(const bool& _isUnBind);

                    /**
                     * 判断参数 IsUnBind 是否已赋值
                     * @return IsUnBind 是否已赋值
                     * 
                     */
                    bool IsUnBindHasBeenSet() const;

                    /**
                     * 获取Whether rebinding is allowed: false - rebinding is not allowed.
                     * @return IsSwitchBind Whether rebinding is allowed: false - rebinding is not allowed.
                     * 
                     */
                    bool GetIsSwitchBind() const;

                    /**
                     * 设置Whether rebinding is allowed: false - rebinding is not allowed.
                     * @param _isSwitchBind Whether rebinding is allowed: false - rebinding is not allowed.
                     * 
                     */
                    void SetIsSwitchBind(const bool& _isSwitchBind);

                    /**
                     * 判断参数 IsSwitchBind 是否已赋值
                     * @return IsSwitchBind 是否已赋值
                     * 
                     */
                    bool IsSwitchBindHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
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
                     * Machine Alias
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Machine Public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Machine Private IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * CVM UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * CWPP client UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CWPP client status: OFFLINE, ONLINE, and UNINSTALL.
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * Whether unbinding is allowed: false - unbinding is not allowed.
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * Whether rebinding is allowed: false - rebinding is not allowed.
                     */
                    bool m_isSwitchBind;
                    bool m_isSwitchBindHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_
