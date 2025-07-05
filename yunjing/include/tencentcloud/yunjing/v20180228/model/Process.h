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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_

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
                * Process information.
                */
                class Process : public AbstractModel
                {
                public:
                    Process();
                    ~Process() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID.
                     * @return Id Unique ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID.
                     * @param _id Unique ID.
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
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param _uuid CWP agent `UUID`.
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
                     * 获取Private IP of server.
                     * @return MachineIp Private IP of server.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP of server.
                     * @param _machineIp Private IP of server.
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
                     * 获取Server name.
                     * @return MachineName Server name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param _machineName Server name.
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
                     * 获取Process `Pid`.
                     * @return Pid Process `Pid`.
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Process `Pid`.
                     * @param _pid Process `Pid`.
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Process `Ppid`.
                     * @return Ppid Process `Ppid`.
                     * 
                     */
                    uint64_t GetPpid() const;

                    /**
                     * 设置Process `Ppid`.
                     * @param _ppid Process `Ppid`.
                     * 
                     */
                    void SetPpid(const uint64_t& _ppid);

                    /**
                     * 判断参数 Ppid 是否已赋值
                     * @return Ppid 是否已赋值
                     * 
                     */
                    bool PpidHasBeenSet() const;

                    /**
                     * 获取Process name.
                     * @return ProcessName Process name.
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name.
                     * @param _processName Process name.
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Process username.
                     * @return Username Process username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Process username.
                     * @param _username Process username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取OS.
<li>WIN32: Windows 32-bit</li>
<li>WIN64: Windows 64-bit</li>
<li>LINUX32: Linux 32-bit</li>
<li>LINUX64: Linux 64-bit</li>
                     * @return Platform OS.
<li>WIN32: Windows 32-bit</li>
<li>WIN64: Windows 64-bit</li>
<li>LINUX32: Linux 32-bit</li>
<li>LINUX64: Linux 64-bit</li>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置OS.
<li>WIN32: Windows 32-bit</li>
<li>WIN64: Windows 64-bit</li>
<li>LINUX32: Linux 32-bit</li>
<li>LINUX64: Linux 64-bit</li>
                     * @param _platform OS.
<li>WIN32: Windows 32-bit</li>
<li>WIN64: Windows 64-bit</li>
<li>LINUX32: Linux 32-bit</li>
<li>LINUX64: Linux 64-bit</li>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Process path.
                     * @return FullPath Process path.
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置Process path.
                     * @param _fullPath Process path.
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * Private IP of server.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Process `Pid`.
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Process `Ppid`.
                     */
                    uint64_t m_ppid;
                    bool m_ppidHasBeenSet;

                    /**
                     * Process name.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * OS.
<li>WIN32: Windows 32-bit</li>
<li>WIN64: Windows 64-bit</li>
<li>LINUX32: Linux 32-bit</li>
<li>LINUX64: Linux 64-bit</li>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Process path.
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_
