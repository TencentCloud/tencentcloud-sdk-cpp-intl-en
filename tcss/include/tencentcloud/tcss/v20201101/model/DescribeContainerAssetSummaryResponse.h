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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeContainerAssetSummary response structure.
                */
                class DescribeContainerAssetSummaryResponse : public AbstractModel
                {
                public:
                    DescribeContainerAssetSummaryResponse();
                    ~DescribeContainerAssetSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of containers
                     * @return ContainerTotalCnt Total number of containers
                     * 
                     */
                    uint64_t GetContainerTotalCnt() const;

                    /**
                     * 判断参数 ContainerTotalCnt 是否已赋值
                     * @return ContainerTotalCnt 是否已赋值
                     * 
                     */
                    bool ContainerTotalCntHasBeenSet() const;

                    /**
                     * 获取Number of running containers
                     * @return ContainerRunningCnt Number of running containers
                     * 
                     */
                    uint64_t GetContainerRunningCnt() const;

                    /**
                     * 判断参数 ContainerRunningCnt 是否已赋值
                     * @return ContainerRunningCnt 是否已赋值
                     * 
                     */
                    bool ContainerRunningCntHasBeenSet() const;

                    /**
                     * 获取Number of suspended containers
                     * @return ContainerPauseCnt Number of suspended containers
                     * 
                     */
                    uint64_t GetContainerPauseCnt() const;

                    /**
                     * 判断参数 ContainerPauseCnt 是否已赋值
                     * @return ContainerPauseCnt 是否已赋值
                     * 
                     */
                    bool ContainerPauseCntHasBeenSet() const;

                    /**
                     * 获取Number of stopped containers
                     * @return ContainerStopped Number of stopped containers
                     * 
                     */
                    uint64_t GetContainerStopped() const;

                    /**
                     * 判断参数 ContainerStopped 是否已赋值
                     * @return ContainerStopped 是否已赋值
                     * 
                     */
                    bool ContainerStoppedHasBeenSet() const;

                    /**
                     * 获取Number of local images
                     * @return ImageCnt Number of local images
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取Number of server nodes
                     * @return HostCnt Number of server nodes
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取Number of running nodes on the server
                     * @return HostRunningCnt Number of running nodes on the server
                     * 
                     */
                    uint64_t GetHostRunningCnt() const;

                    /**
                     * 判断参数 HostRunningCnt 是否已赋值
                     * @return HostRunningCnt 是否已赋值
                     * 
                     */
                    bool HostRunningCntHasBeenSet() const;

                    /**
                     * 获取Number of offline nodes on the server
                     * @return HostOfflineCnt Number of offline nodes on the server
                     * 
                     */
                    uint64_t GetHostOfflineCnt() const;

                    /**
                     * 判断参数 HostOfflineCnt 是否已赋值
                     * @return HostOfflineCnt 是否已赋值
                     * 
                     */
                    bool HostOfflineCntHasBeenSet() const;

                    /**
                     * 获取Number of image repositories
                     * @return ImageRegistryCnt Number of image repositories
                     * 
                     */
                    uint64_t GetImageRegistryCnt() const;

                    /**
                     * 判断参数 ImageRegistryCnt 是否已赋值
                     * @return ImageRegistryCnt 是否已赋值
                     * 
                     */
                    bool ImageRegistryCntHasBeenSet() const;

                    /**
                     * 获取Total number of images
                     * @return ImageTotalCnt Total number of images
                     * 
                     */
                    uint64_t GetImageTotalCnt() const;

                    /**
                     * 判断参数 ImageTotalCnt 是否已赋值
                     * @return ImageTotalCnt 是否已赋值
                     * 
                     */
                    bool ImageTotalCntHasBeenSet() const;

                    /**
                     * 获取Number of servers not installed with the agent
                     * @return HostUnInstallCnt Number of servers not installed with the agent
                     * 
                     */
                    uint64_t GetHostUnInstallCnt() const;

                    /**
                     * 判断参数 HostUnInstallCnt 是否已赋值
                     * @return HostUnInstallCnt 是否已赋值
                     * 
                     */
                    bool HostUnInstallCntHasBeenSet() const;

                    /**
                     * 获取Number of super nodes
                     * @return HostSuperNodeCnt Number of super nodes
                     * 
                     */
                    uint64_t GetHostSuperNodeCnt() const;

                    /**
                     * 判断参数 HostSuperNodeCnt 是否已赋值
                     * @return HostSuperNodeCnt 是否已赋值
                     * 
                     */
                    bool HostSuperNodeCntHasBeenSet() const;

                private:

                    /**
                     * Total number of containers
                     */
                    uint64_t m_containerTotalCnt;
                    bool m_containerTotalCntHasBeenSet;

                    /**
                     * Number of running containers
                     */
                    uint64_t m_containerRunningCnt;
                    bool m_containerRunningCntHasBeenSet;

                    /**
                     * Number of suspended containers
                     */
                    uint64_t m_containerPauseCnt;
                    bool m_containerPauseCntHasBeenSet;

                    /**
                     * Number of stopped containers
                     */
                    uint64_t m_containerStopped;
                    bool m_containerStoppedHasBeenSet;

                    /**
                     * Number of local images
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of server nodes
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * Number of running nodes on the server
                     */
                    uint64_t m_hostRunningCnt;
                    bool m_hostRunningCntHasBeenSet;

                    /**
                     * Number of offline nodes on the server
                     */
                    uint64_t m_hostOfflineCnt;
                    bool m_hostOfflineCntHasBeenSet;

                    /**
                     * Number of image repositories
                     */
                    uint64_t m_imageRegistryCnt;
                    bool m_imageRegistryCntHasBeenSet;

                    /**
                     * Total number of images
                     */
                    uint64_t m_imageTotalCnt;
                    bool m_imageTotalCntHasBeenSet;

                    /**
                     * Number of servers not installed with the agent
                     */
                    uint64_t m_hostUnInstallCnt;
                    bool m_hostUnInstallCntHasBeenSet;

                    /**
                     * Number of super nodes
                     */
                    uint64_t m_hostSuperNodeCnt;
                    bool m_hostSuperNodeCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_
