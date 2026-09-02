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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host structure for client-side settings.
                */
                class ClientSettingHost : public AbstractModel
                {
                public:
                    ClientSettingHost();
                    ~ClientSettingHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database record ID corresponding to the host.</p>
                     * @return Id <p>Database record ID corresponding to the host.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Database record ID corresponding to the host.</p>
                     * @param _id <p>Database record ID corresponding to the host.</p>
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
                     * 获取<p>Host name.</p>
                     * @return Name <p>Host name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _name <p>Host name.</p>
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
                     * 获取<p>Public IP address</p>
                     * @return PublicIp <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIp <p>Public IP address</p>
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
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIp <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIp <p>Private IP address.</p>
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
                     * 获取<p>Host Quuid</p>
                     * @return Quuid <p>Host Quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host Quuid</p>
                     * @param _quuid <p>Host Quuid</p>
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
                     * 获取<p>Host status<br>OFFLINE: offline<br>ONLINE: online<br>SHUTDOWN: is shut down<br>UNINSTALLED: no protection</p>
                     * @return Status <p>Host status<br>OFFLINE: offline<br>ONLINE: online<br>SHUTDOWN: is shut down<br>UNINSTALLED: no protection</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Host status<br>OFFLINE: offline<br>ONLINE: online<br>SHUTDOWN: is shut down<br>UNINSTALLED: no protection</p>
                     * @param _status <p>Host status<br>OFFLINE: offline<br>ONLINE: online<br>SHUTDOWN: is shut down<br>UNINSTALLED: no protection</p>
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
                     * 获取<p>ins-sad143</p>
                     * @return VpcId <p>ins-sad143</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>ins-sad143</p>
                     * @param _vpcId <p>ins-sad143</p>
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
                     * 获取<p>Region information.</p>
                     * @return RegionInfo <p>Region information.</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>Region information.</p>
                     * @param _regionInfo <p>Region information.</p>
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
                     * 获取<p>Additional information.</p>
                     * @return MachineExtraInfo <p>Additional information.</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>Additional information.</p>
                     * @param _machineExtraInfo <p>Additional information.</p>
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
                     * 获取<p>0: Disabled<br>1: Enabled<br>2: Enabling<br>3: Disabling<br>9: Not set</p>
                     * @return FunctionStatus <p>0: Disabled<br>1: Enabled<br>2: Enabling<br>3: Disabling<br>9: Not set</p>
                     * 
                     */
                    uint64_t GetFunctionStatus() const;

                    /**
                     * 设置<p>0: Disabled<br>1: Enabled<br>2: Enabling<br>3: Disabling<br>9: Not set</p>
                     * @param _functionStatus <p>0: Disabled<br>1: Enabled<br>2: Enabling<br>3: Disabling<br>9: Not set</p>
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
                     * 获取<p>The following fixed values require special handling on the frontend, while other failure reasons can be shown directly:</p><ol><li>UNINSTALLED   -- not installed</li><li>NEED_UPGRADE -- Upgrade required</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- Password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * @return Message <p>The following fixed values require special handling on the frontend, while other failure reasons can be shown directly:</p><ol><li>UNINSTALLED   -- not installed</li><li>NEED_UPGRADE -- Upgrade required</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- Password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>The following fixed values require special handling on the frontend, while other failure reasons can be shown directly:</p><ol><li>UNINSTALLED   -- not installed</li><li>NEED_UPGRADE -- Upgrade required</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- Password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * @param _message <p>The following fixed values require special handling on the frontend, while other failure reasons can be shown directly:</p><ol><li>UNINSTALLED   -- not installed</li><li>NEED_UPGRADE -- Upgrade required</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- Password login is not enabled, so QR code login cannot be enabled</li></ol>
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
                     * 获取<p>Failure reason</p>
                     * @return MessageDesc <p>Failure reason</p>
                     * 
                     */
                    std::string GetMessageDesc() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _messageDesc <p>Failure reason</p>
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
                     * 获取<p>Instance status<br>RUNNING: Running<br>STOPED: Shut down<br>EXPIRED: To be recycled</p>
                     * @return InstanceStatus <p>Instance status<br>RUNNING: Running<br>STOPED: Shut down<br>EXPIRED: To be recycled</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status<br>RUNNING: Running<br>STOPED: Shut down<br>EXPIRED: To be recycled</p>
                     * @param _instanceStatus <p>Instance status<br>RUNNING: Running<br>STOPED: Shut down<br>EXPIRED: To be recycled</p>
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
                     * <p>Database record ID corresponding to the host.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Host Quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Host status<br>OFFLINE: offline<br>ONLINE: online<br>SHUTDOWN: is shut down<br>UNINSTALLED: no protection</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ins-sad143</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Region information.</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>Additional information.</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>0: Disabled<br>1: Enabled<br>2: Enabling<br>3: Disabling<br>9: Not set</p>
                     */
                    uint64_t m_functionStatus;
                    bool m_functionStatusHasBeenSet;

                    /**
                     * <p>The following fixed values require special handling on the frontend, while other failure reasons can be shown directly:</p><ol><li>UNINSTALLED   -- not installed</li><li>NEED_UPGRADE -- Upgrade required</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- Password login is not enabled, so QR code login cannot be enabled</li></ol>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_messageDesc;
                    bool m_messageDescHasBeenSet;

                    /**
                     * <p>Instance status<br>RUNNING: Running<br>STOPED: Shut down<br>EXPIRED: To be recycled</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_
