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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Register instance info.
                */
                class RegisterInstanceInfo : public AbstractModel
                {
                public:
                    RegisterInstanceInfo();
                    ~RegisterInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Registration code ID.
                     * @return RegisterCodeId Registration code ID.
                     * 
                     */
                    std::string GetRegisterCodeId() const;

                    /**
                     * 设置Registration code ID.
                     * @param _registerCodeId Registration code ID.
                     * 
                     */
                    void SetRegisterCodeId(const std::string& _registerCodeId);

                    /**
                     * 判断参数 RegisterCodeId 是否已赋值
                     * @return RegisterCodeId 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdHasBeenSet() const;

                    /**
                     * 获取Managed instance ID.
                     * @return InstanceId Managed instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Managed instance ID.
                     * @param _instanceId Managed instance ID.
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
                     * 获取Managed instance name.
                     * @return InstanceName Managed instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Managed instance name.
                     * @param _instanceName Managed instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Machine ID.
                     * @return MachineId Machine ID.
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置Machine ID.
                     * @param _machineId Machine ID.
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取System name. valid values: Linux | Windows.
                     * @return SystemName System name. valid values: Linux | Windows.
                     * 
                     */
                    std::string GetSystemName() const;

                    /**
                     * 设置System name. valid values: Linux | Windows.
                     * @param _systemName System name. valid values: Linux | Windows.
                     * 
                     */
                    void SetSystemName(const std::string& _systemName);

                    /**
                     * 判断参数 SystemName 是否已赋值
                     * @return SystemName 是否已赋值
                     * 
                     */
                    bool SystemNameHasBeenSet() const;

                    /**
                     * 获取Host name.
                     * @return HostName Host name.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name.
                     * @param _hostName Host name.
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
                     * 获取Private network IP
                     * @return LocalIp Private network IP
                     * 
                     */
                    std::string GetLocalIp() const;

                    /**
                     * 设置Private network IP
                     * @param _localIp Private network IP
                     * 
                     */
                    void SetLocalIp(const std::string& _localIp);

                    /**
                     * 判断参数 LocalIp 是否已赋值
                     * @return LocalIp 是否已赋值
                     * 
                     */
                    bool LocalIpHasBeenSet() const;

                    /**
                     * 获取Public key.
                     * @return PublicKey Public key.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key.
                     * @param _publicKey Public key.
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Hosting status.
Return Online means the instance is managed, return Offline means the instance is unhosted.
                     * @return Status Hosting status.
Return Online means the instance is managed, return Offline means the instance is unhosted.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Hosting status.
Return Online means the instance is managed, return Offline means the instance is unhosted.
                     * @param _status Hosting status.
Return Online means the instance is managed, return Offline means the instance is unhosted.
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
                     * 获取Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @return CreatedTime Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @param _createdTime Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @return UpdatedTime Last update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Last update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @param _updatedTime Last update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Registration code ID.
                     */
                    std::string m_registerCodeId;
                    bool m_registerCodeIdHasBeenSet;

                    /**
                     * Managed instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Managed instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Machine ID.
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * System name. valid values: Linux | Windows.
                     */
                    std::string m_systemName;
                    bool m_systemNameHasBeenSet;

                    /**
                     * Host name.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Private network IP
                     */
                    std::string m_localIp;
                    bool m_localIpHasBeenSet;

                    /**
                     * Public key.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Hosting status.
Return Online means the instance is managed, return Offline means the instance is unhosted.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_
