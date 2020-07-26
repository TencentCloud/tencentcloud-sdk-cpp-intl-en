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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Port list
                */
                class OpenPort : public AbstractModel
                {
                public:
                    OpenPort();
                    ~OpenPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID.
                     * @return Id Unique ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID.
                     * @param Id Unique ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param Uuid CWP agent `UUID`.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Open port number.
                     * @return Port Open port number.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Open port number.
                     * @param Port Open port number.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP.
                     * @param MachineIp Server IP.
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param MachineName Server name.
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Process name corresponding to port.
                     * @return ProcessName Process name corresponding to port.
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name corresponding to port.
                     * @param ProcessName Process name corresponding to port.
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Process `Pid` corresponding to port.
                     * @return Pid Process `Pid` corresponding to port.
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Process `Pid` corresponding to port.
                     * @param Pid Process `Pid` corresponding to port.
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Record creation time.
                     * @return CreateTime Record creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Record creation time.
                     * @param CreateTime Record creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Record update time.
                     * @return ModifyTime Record update time.
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Record update time.
                     * @param ModifyTime Record update time.
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent `UUID`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Open port number.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Process name corresponding to port.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process `Pid` corresponding to port.
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Record creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Record update time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_
