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
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Process start time
                     * @param _startTime Process start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return RunAs Operator
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Operator
                     * @param _runAs Operator
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Command line parameter
                     * @return CmdLine Command line parameter
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command line parameter
                     * @param _cmdLine Command line parameter
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取Exe path
                     * @return Exe Exe path
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Exe path
                     * @param _exe Exe path
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Server PID
                     * @return PID Server PID
                     * 
                     */
                    uint64_t GetPID() const;

                    /**
                     * 设置Server PID
                     * @param _pID Server PID
                     * 
                     */
                    void SetPID(const uint64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Container PID
                     * @return ContainerPID Container PID
                     * 
                     */
                    uint64_t GetContainerPID() const;

                    /**
                     * 设置Container PID
                     * @param _containerPID Container PID
                     * 
                     */
                    void SetContainerPID(const uint64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param _containerName Container name
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param _hostID Server ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
                     * @param _hostIP Server IP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
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
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
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
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
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
                     * 获取Node ID
                     * @return NodeID Node ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置Node ID
                     * @param _nodeID Node ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取Pod IP
                     * @return PodIP Pod IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod IP
                     * @param _podIP Pod IP
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return PodName Pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param _podName Pod name
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取UID of the super node
                     * @return NodeUniqueID UID of the super node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置UID of the super node
                     * @param _nodeUniqueID UID of the super node
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

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

                    /**
                     * Node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * UID of the super node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_
