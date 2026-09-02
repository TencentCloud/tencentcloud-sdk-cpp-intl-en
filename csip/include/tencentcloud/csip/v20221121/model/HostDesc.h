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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MachineTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>Machine uuid</p>
                     * @return Quuid <p>Machine uuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Machine uuid</p>
                     * @param _quuid <p>Machine uuid</p>
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
                     * 获取<p>Host security UID</p>
                     * @return Uuid <p>Host security UID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Host security UID</p>
                     * @param _uuid <p>Host security UID</p>
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
                     * 获取<p>Machine name</p>
                     * @return MachineName <p>Machine name</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Machine name</p>
                     * @param _machineName <p>Machine name</p>
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
                     * 获取<p>Machine IP address. This parameter is left blank for terminated servers.</p>
                     * @return MachineIp <p>Machine IP address. This parameter is left blank for terminated servers.</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Machine IP address. This parameter is left blank for terminated servers.</p>
                     * @param _machineIp <p>Machine IP address. This parameter is left blank for terminated servers.</p>
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
                     * 获取<p>Public IP address. This parameter is left blank for terminated servers.</p>
                     * @return MachineWanIp <p>Public IP address. This parameter is left blank for terminated servers.</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>Public IP address. This parameter is left blank for terminated servers.</p>
                     * @param _machineWanIp <p>Public IP address. This parameter is left blank for terminated servers.</p>
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
                     * 获取<p>Tag information array</p>
                     * @return Tags <p>Tag information array</p>
                     * 
                     */
                    std::vector<MachineTag> GetTags() const;

                    /**
                     * 设置<p>Tag information array</p>
                     * @param _tags <p>Tag information array</p>
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
                     * <p>Machine uuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Host security UID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Machine name</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Machine IP address. This parameter is left blank for terminated servers.</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>Public IP address. This parameter is left blank for terminated servers.</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>Tag information array</p>
                     */
                    std::vector<MachineTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_
