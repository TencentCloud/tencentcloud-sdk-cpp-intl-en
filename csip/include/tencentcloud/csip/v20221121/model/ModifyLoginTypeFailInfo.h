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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Details of failed host login method modifications.
                */
                class ModifyLoginTypeFailInfo : public AbstractModel
                {
                public:
                    ModifyLoginTypeFailInfo();
                    ~ModifyLoginTypeFailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host name.</p>
                     * @return MachineName <p>Host name.</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _machineName <p>Host name.</p>
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
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceId <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceId <p>Host instance ID.</p>
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
                     * 获取<p>Host private IP address</p>
                     * @return MachineIp <p>Host private IP address</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Host private IP address</p>
                     * @param _machineIp <p>Host private IP address</p>
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
                     * 获取<p>Public IP of the server</p>
                     * @return MachineWanIp <p>Public IP of the server</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>Public IP of the server</p>
                     * @param _machineWanIp <p>Public IP of the server</p>
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
                     * 获取<p>Host availability zone</p>
                     * @return Region <p>Host availability zone</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Host availability zone</p>
                     * @param _region <p>Host availability zone</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Specific host types</p>
                     * @return MachineType <p>Specific host types</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Specific host types</p>
                     * @param _machineType <p>Specific host types</p>
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
                     * 获取<p>The following fixed values require special handling on the frontend. Other failure reasons can be displayed directly:</p><ol><li>UNINSTALLED -- not installed</li><li>NEED_UPGRADE -- requires upgrading</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * @return Message <p>The following fixed values require special handling on the frontend. Other failure reasons can be displayed directly:</p><ol><li>UNINSTALLED -- not installed</li><li>NEED_UPGRADE -- requires upgrading</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>The following fixed values require special handling on the frontend. Other failure reasons can be displayed directly:</p><ol><li>UNINSTALLED -- not installed</li><li>NEED_UPGRADE -- requires upgrading</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- password login is not enabled, so QR code login cannot be enabled</li></ol>
                     * @param _message <p>The following fixed values require special handling on the frontend. Other failure reasons can be displayed directly:</p><ol><li>UNINSTALLED -- not installed</li><li>NEED_UPGRADE -- requires upgrading</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- password login is not enabled, so QR code login cannot be enabled</li></ol>
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

                private:

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Host private IP address</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>Public IP of the server</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>Host availability zone</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Specific host types</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>The following fixed values require special handling on the frontend. Other failure reasons can be displayed directly:</p><ol><li>UNINSTALLED -- not installed</li><li>NEED_UPGRADE -- requires upgrading</li><li>NOT_RUNNING -- is shut down</li><li>NO_PASSWORD -- password login is not enabled, so QR code login cannot be enabled</li></ol>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_messageDesc;
                    bool m_messageDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_
