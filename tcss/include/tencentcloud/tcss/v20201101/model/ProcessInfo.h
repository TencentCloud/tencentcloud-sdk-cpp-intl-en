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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * List of processes
                */
                class ProcessInfo : public AbstractModel
                {
                public:
                    ProcessInfo();
                    ~ProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process start time
                     * @return StartTime Process start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Process start time
                     * @param StartTime Process start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return RunAs Operator
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Operator
                     * @param RunAs Operator
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Command line parameter
                     * @return CmdLine Command line parameter
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command line parameter
                     * @param CmdLine Command line parameter
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取Exe path
                     * @return Exe Exe path
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Exe path
                     * @param Exe Exe path
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Server PID
                     * @return PID Server PID
                     */
                    uint64_t GetPID() const;

                    /**
                     * 设置Server PID
                     * @param PID Server PID
                     */
                    void SetPID(const uint64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Container PID
                     * @return ContainerPID Container PID
                     */
                    uint64_t GetContainerPID() const;

                    /**
                     * 设置Container PID
                     * @param ContainerPID Container PID
                     */
                    void SetContainerPID(const uint64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param ContainerName Container name
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param HostID Server ID
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
                     * @param HostIP Server IP
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param ProcessName Process name
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return HostName Server name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param HostName Server name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param PublicIp Public IP
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * Process start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Command line parameter
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Exe path
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Server PID
                     */
                    uint64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Container PID
                     */
                    uint64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_
