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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ContainerMount.h>
#include <tencentcloud/tcss/v20201101/model/ContainerNetwork.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetContainerDetail response structure.
                */
                class DescribeAssetContainerDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetContainerDetailResponse();
                    ~DescribeAssetContainerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     * 
                     */
                    std::string GetHostID() const;

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
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return RunAs Operator
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Command line
                     * @return Cmd Command line
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取CPU utilization * 1000
                     * @return CPUUsage CPU utilization * 1000
                     * 
                     */
                    uint64_t GetCPUUsage() const;

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     * 
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取Memory usage in KB
                     * @return RamUsage Memory usage in KB
                     * 
                     */
                    uint64_t GetRamUsage() const;

                    /**
                     * 判断参数 RamUsage 是否已赋值
                     * @return RamUsage 是否已赋值
                     * 
                     */
                    bool RamUsageHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Pod
                     * @return POD Pod
                     * 
                     */
                    std::string GetPOD() const;

                    /**
                     * 判断参数 POD 是否已赋值
                     * @return POD 是否已赋值
                     * 
                     */
                    bool PODHasBeenSet() const;

                    /**
                     * 获取K8s master node
                     * @return K8sMaster K8s master node
                     * 
                     */
                    std::string GetK8sMaster() const;

                    /**
                     * 判断参数 K8sMaster 是否已赋值
                     * @return K8sMaster 是否已赋值
                     * 
                     */
                    bool K8sMasterHasBeenSet() const;

                    /**
                     * 获取Number of processes in the container
                     * @return ProcessCnt Number of processes in the container
                     * 
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     * 
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取Number of ports in the container
                     * @return PortCnt Number of ports in the container
                     * 
                     */
                    uint64_t GetPortCnt() const;

                    /**
                     * 判断参数 PortCnt 是否已赋值
                     * @return PortCnt 是否已赋值
                     * 
                     */
                    bool PortCntHasBeenSet() const;

                    /**
                     * 获取Number of components
                     * @return ComponentCnt Number of components
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取Number of applications
                     * @return AppCnt Number of applications
                     * 
                     */
                    uint64_t GetAppCnt() const;

                    /**
                     * 判断参数 AppCnt 是否已赋值
                     * @return AppCnt 是否已赋值
                     * 
                     */
                    bool AppCntHasBeenSet() const;

                    /**
                     * 获取Number of web services
                     * @return WebServiceCnt Number of web services
                     * 
                     */
                    uint64_t GetWebServiceCnt() const;

                    /**
                     * 判断参数 WebServiceCnt 是否已赋值
                     * @return WebServiceCnt 是否已赋值
                     * 
                     */
                    bool WebServiceCntHasBeenSet() const;

                    /**
                     * 获取Mount
                     * @return Mounts Mount
                     * 
                     */
                    std::vector<ContainerMount> GetMounts() const;

                    /**
                     * 判断参数 Mounts 是否已赋值
                     * @return Mounts 是否已赋值
                     * 
                     */
                    bool MountsHasBeenSet() const;

                    /**
                     * 获取Container network information
                     * @return Network Container network information
                     * 
                     */
                    ContainerNetwork GetNetwork() const;

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Image creation time
                     * @return ImageCreateTime Image creation time
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return ImageSize Image size
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Server status. Valid values: `offline`, `online`, `pause`.
                     * @return HostStatus Server status. Valid values: `offline`, `online`, `pause`.
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

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
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the network
                     * @return NetSubStatus Sub-status of the network
                     * 
                     */
                    std::string GetNetSubStatus() const;

                    /**
                     * 判断参数 NetSubStatus 是否已赋值
                     * @return NetSubStatus 是否已赋值
                     * 
                     */
                    bool NetSubStatusHasBeenSet() const;

                    /**
                     * 获取Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateSource Isolation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolateSource() const;

                    /**
                     * 判断参数 IsolateSource 是否已赋值
                     * @return IsolateSource 是否已赋值
                     * 
                     */
                    bool IsolateSourceHasBeenSet() const;

                    /**
                     * 获取Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                private:

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
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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
                     * Pod
                     */
                    std::string m_pOD;
                    bool m_pODHasBeenSet;

                    /**
                     * K8s master node
                     */
                    std::string m_k8sMaster;
                    bool m_k8sMasterHasBeenSet;

                    /**
                     * Number of processes in the container
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * Number of ports in the container
                     */
                    uint64_t m_portCnt;
                    bool m_portCntHasBeenSet;

                    /**
                     * Number of components
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * Number of applications
                     */
                    uint64_t m_appCnt;
                    bool m_appCntHasBeenSet;

                    /**
                     * Number of web services
                     */
                    uint64_t m_webServiceCnt;
                    bool m_webServiceCntHasBeenSet;

                    /**
                     * Mount
                     */
                    std::vector<ContainerMount> m_mounts;
                    bool m_mountsHasBeenSet;

                    /**
                     * Container network information
                     */
                    ContainerNetwork m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Image creation time
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * Image size
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Server status. Valid values: `offline`, `online`, `pause`.
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERDETAILRESPONSE_H_
