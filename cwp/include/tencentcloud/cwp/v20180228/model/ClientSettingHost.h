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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
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
                * Client settings related features host struct
                */
                class ClientSettingHost : public AbstractModel
                {
                public:
                    ClientSettingHost();
                    ~ClientSettingHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID of the corresponding database host
                     * @return Id Record ID of the corresponding database host
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID of the corresponding database host
                     * @param _id Record ID of the corresponding database host
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
                     * 获取Host name.
                     * @return Name Host name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Host name.
                     * @param _name Host name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIp Private IP address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIp Private IP address
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

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
                     * 获取Host status
<li>OFFLINE: Offline</li>
<li>ONLINE: Online</li>
<li>SHUTDOWN: Shut down</li>
<li>UNINSTALLED: Unprotected</li>
                     * @return Status Host status
<li>OFFLINE: Offline</li>
<li>ONLINE: Online</li>
<li>SHUTDOWN: Shut down</li>
<li>UNINSTALLED: Unprotected</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Host status
<li>OFFLINE: Offline</li>
<li>ONLINE: Online</li>
<li>SHUTDOWN: Shut down</li>
<li>UNINSTALLED: Unprotected</li>
                     * @param _status Host status
<li>OFFLINE: Offline</li>
<li>ONLINE: Online</li>
<li>SHUTDOWN: Shut down</li>
<li>UNINSTALLED: Unprotected</li>
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
                     * 获取ins-sad143
                     * @return VpcId ins-sad143
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ins-sad143
                     * @param _vpcId ins-sad143
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Region information
                     * @return RegionInfo Region information
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information
                     * @param _regionInfo Region information
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
                     * 获取Additional information
                     * @return MachineExtraInfo Additional information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
                     * @param _machineExtraInfo Additional information
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
                     * 获取<li>0: disabled</li>
<li>1:  Enable</li>
<li>2: Enabled </li>
<li>3: Turning off</li>
<li>9: not set</li>
                     * @return FunctionStatus <li>0: disabled</li>
<li>1:  Enable</li>
<li>2: Enabled </li>
<li>3: Turning off</li>
<li>9: not set</li>
                     * 
                     */
                    uint64_t GetFunctionStatus() const;

                    /**
                     * 设置<li>0: disabled</li>
<li>1:  Enable</li>
<li>2: Enabled </li>
<li>3: Turning off</li>
<li>9: not set</li>
                     * @param _functionStatus <li>0: disabled</li>
<li>1:  Enable</li>
<li>2: Enabled </li>
<li>3: Turning off</li>
<li>9: not set</li>
                     * 
                     */
                    void SetFunctionStatus(const uint64_t& _functionStatus);

                    /**
                     * 判断参数 FunctionStatus 是否已赋值
                     * @return FunctionStatus 是否已赋值
                     * 
                     */
                    bool FunctionStatusHasBeenSet() const;

                    /**
                     * 获取The following fixed values require special handling by the frontend, other failures can be shown directly.
1. UNINSTALLED -- Not installed
2. NEED_UPGRADE -- Upgrade required
3. NOT_RUNNING -- Shutdown
4. NO_PASSWORD -- Password login is not enabled and cannot be enabled.
                     * @return Message The following fixed values require special handling by the frontend, other failures can be shown directly.
1. UNINSTALLED -- Not installed
2. NEED_UPGRADE -- Upgrade required
3. NOT_RUNNING -- Shutdown
4. NO_PASSWORD -- Password login is not enabled and cannot be enabled.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The following fixed values require special handling by the frontend, other failures can be shown directly.
1. UNINSTALLED -- Not installed
2. NEED_UPGRADE -- Upgrade required
3. NOT_RUNNING -- Shutdown
4. NO_PASSWORD -- Password login is not enabled and cannot be enabled.
                     * @param _message The following fixed values require special handling by the frontend, other failures can be shown directly.
1. UNINSTALLED -- Not installed
2. NEED_UPGRADE -- Upgrade required
3. NOT_RUNNING -- Shutdown
4. NO_PASSWORD -- Password login is not enabled and cannot be enabled.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return MessageDesc Reason for failure
                     * 
                     */
                    std::string GetMessageDesc() const;

                    /**
                     * 设置Reason for failure
                     * @param _messageDesc Reason for failure
                     * 
                     */
                    void SetMessageDesc(const std::string& _messageDesc);

                    /**
                     * 判断参数 MessageDesc 是否已赋值
                     * @return MessageDesc 是否已赋值
                     * 
                     */
                    bool MessageDescHasBeenSet() const;

                    /**
                     * 获取Instance status
<li>RUNNING: running</li>
<li>STOPPED: Shut down</li>
<li>EXPIRED: To be recycled</li>
                     * @return InstanceStatus Instance status
<li>RUNNING: running</li>
<li>STOPPED: Shut down</li>
<li>EXPIRED: To be recycled</li>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
<li>RUNNING: running</li>
<li>STOPPED: Shut down</li>
<li>EXPIRED: To be recycled</li>
                     * @param _instanceStatus Instance status
<li>RUNNING: running</li>
<li>STOPPED: Shut down</li>
<li>EXPIRED: To be recycled</li>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * Record ID of the corresponding database host
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host status
<li>OFFLINE: Offline</li>
<li>ONLINE: Online</li>
<li>SHUTDOWN: Shut down</li>
<li>UNINSTALLED: Unprotected</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ins-sad143
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Region information
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * Additional information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <li>0: disabled</li>
<li>1:  Enable</li>
<li>2: Enabled </li>
<li>3: Turning off</li>
<li>9: not set</li>
                     */
                    uint64_t m_functionStatus;
                    bool m_functionStatusHasBeenSet;

                    /**
                     * The following fixed values require special handling by the frontend, other failures can be shown directly.
1. UNINSTALLED -- Not installed
2. NEED_UPGRADE -- Upgrade required
3. NOT_RUNNING -- Shutdown
4. NO_PASSWORD -- Password login is not enabled and cannot be enabled.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_messageDesc;
                    bool m_messageDescHasBeenSet;

                    /**
                     * Instance status
<li>RUNNING: running</li>
<li>STOPPED: Shut down</li>
<li>EXPIRED: To be recycled</li>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_
