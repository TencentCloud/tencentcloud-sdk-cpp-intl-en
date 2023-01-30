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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_

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
                * List of containers
                */
                class ContainerInfo : public AbstractModel
                {
                public:
                    ContainerInfo();
                    ~ContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container ID
                     * @return ContainerID Container ID
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置Container ID
                     * @param ContainerID Container ID
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     */
                    bool ContainerIDHasBeenSet() const;

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
                     * 获取Container status
                     * @return Status Container status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Container status
                     * @param Status Container status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 获取Command line
                     * @return Cmd Command line
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置Command line
                     * @param Cmd Command line
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取CPU utilization * 1000
                     * @return CPUUsage CPU utilization * 1000
                     */
                    uint64_t GetCPUUsage() const;

                    /**
                     * 设置CPU utilization * 1000
                     * @param CPUUsage CPU utilization * 1000
                     */
                    void SetCPUUsage(const uint64_t& _cPUUsage);

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取Memory usage in KB
                     * @return RamUsage Memory usage in KB
                     */
                    uint64_t GetRamUsage() const;

                    /**
                     * 设置Memory usage in KB
                     * @param RamUsage Memory usage in KB
                     */
                    void SetRamUsage(const uint64_t& _ramUsage);

                    /**
                     * 判断参数 RamUsage 是否已赋值
                     * @return RamUsage 是否已赋值
                     */
                    bool RamUsageHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param ImageID Image ID
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return POD Image ID
                     */
                    std::string GetPOD() const;

                    /**
                     * 设置Image ID
                     * @param POD Image ID
                     */
                    void SetPOD(const std::string& _pOD);

                    /**
                     * 判断参数 POD 是否已赋值
                     * @return POD 是否已赋值
                     */
                    bool PODHasBeenSet() const;

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
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param UpdateTime Update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

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

                    /**
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return NetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param NetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the network
                     * @return NetSubStatus Sub-status of the network
                     */
                    std::string GetNetSubStatus() const;

                    /**
                     * 设置Sub-status of the network
                     * @param NetSubStatus Sub-status of the network
                     */
                    void SetNetSubStatus(const std::string& _netSubStatus);

                    /**
                     * 判断参数 NetSubStatus 是否已赋值
                     * @return NetSubStatus 是否已赋值
                     */
                    bool NetSubStatusHasBeenSet() const;

                    /**
                     * 获取Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateSource Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolateSource() const;

                    /**
                     * 设置Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsolateSource Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolateSource(const std::string& _isolateSource);

                    /**
                     * 判断参数 IsolateSource 是否已赋值
                     * @return IsolateSource 是否已赋值
                     */
                    bool IsolateSourceHasBeenSet() const;

                    /**
                     * 获取Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsolateTime Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                private:

                    /**
                     * Container ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Container status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Command line
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * CPU utilization * 1000
                     */
                    uint64_t m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * Memory usage in KB
                     */
                    uint64_t m_ramUsage;
                    bool m_ramUsageHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_pOD;
                    bool m_pODHasBeenSet;

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
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

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
                     * Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * Sub-status of the network
                     */
                    std::string m_netSubStatus;
                    bool m_netSubStatusHasBeenSet;

                    /**
                     * Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateSource;
                    bool m_isolateSourceHasBeenSet;

                    /**
                     * Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
