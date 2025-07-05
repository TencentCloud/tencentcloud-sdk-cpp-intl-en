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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Host information entity of the log-in audit allowlist
                */
                class HostDesc : public AbstractModel
                {
                public:
                    HostDesc();
                    ~HostDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Yunjing client ID
                     * @return Quuid Yunjing client ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Yunjing client ID
                     * @param _quuid Yunjing client ID
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
                     * 获取Host ID
                     * @return Uuid Host ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host ID
                     * @param _uuid Host ID
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
                     * 获取Machine name
                     * @return MachineName Machine name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine name
                     * @param _machineName Machine name
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
                     * 获取Machine IP address. This parameter is left blank for terminated servers.
                     * @return MachineIp Machine IP address. This parameter is left blank for terminated servers.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Machine IP address. This parameter is left blank for terminated servers.
                     * @param _machineIp Machine IP address. This parameter is left blank for terminated servers.
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
                     * 获取Public IP address. This parameter is left blank for terminated servers.
                     * @return MachineWanIp Public IP address. This parameter is left blank for terminated servers.
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address. This parameter is left blank for terminated servers.
                     * @param _machineWanIp Public IP address. This parameter is left blank for terminated servers.
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
                     * 获取Tag information array
                     * @return Tags Tag information array
                     * 
                     */
                    std::vector<MachineTag> GetTags() const;

                    /**
                     * 设置Tag information array
                     * @param _tags Tag information array
                     * 
                     */
                    void SetTags(const std::vector<MachineTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Yunjing client ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Machine name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Machine IP address. This parameter is left blank for terminated servers.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Public IP address. This parameter is left blank for terminated servers.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Tag information array
                     */
                    std::vector<MachineTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_
