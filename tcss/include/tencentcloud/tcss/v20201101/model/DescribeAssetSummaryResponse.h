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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_

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
                * DescribeAssetSummary response structure.
                */
                class DescribeAssetSummaryResponse : public AbstractModel
                {
                public:
                    DescribeAssetSummaryResponse();
                    ~DescribeAssetSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of applications
                     * @return AppCnt Number of applications
                     */
                    uint64_t GetAppCnt() const;

                    /**
                     * 判断参数 AppCnt 是否已赋值
                     * @return AppCnt 是否已赋值
                     */
                    bool AppCntHasBeenSet() const;

                    /**
                     * 获取Number of containers
                     * @return ContainerCnt Number of containers
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取Number of paused containers
                     * @return ContainerPause Number of paused containers
                     */
                    uint64_t GetContainerPause() const;

                    /**
                     * 判断参数 ContainerPause 是否已赋值
                     * @return ContainerPause 是否已赋值
                     */
                    bool ContainerPauseHasBeenSet() const;

                    /**
                     * 获取Number of running containers
                     * @return ContainerRunning Number of running containers
                     */
                    uint64_t GetContainerRunning() const;

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取Number of stopped containers
                     * @return ContainerStop Number of stopped containers
                     */
                    uint64_t GetContainerStop() const;

                    /**
                     * 判断参数 ContainerStop 是否已赋值
                     * @return ContainerStop 是否已赋值
                     */
                    bool ContainerStopHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of databases
                     * @return DbCnt Number of databases
                     */
                    uint64_t GetDbCnt() const;

                    /**
                     * 判断参数 DbCnt 是否已赋值
                     * @return DbCnt 是否已赋值
                     */
                    bool DbCntHasBeenSet() const;

                    /**
                     * 获取Number of images
                     * @return ImageCnt Number of images
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取Number of online servers
                     * @return HostOnline Number of online servers
                     */
                    uint64_t GetHostOnline() const;

                    /**
                     * 判断参数 HostOnline 是否已赋值
                     * @return HostOnline 是否已赋值
                     */
                    bool HostOnlineHasBeenSet() const;

                    /**
                     * 获取Number of servers
                     * @return HostCnt Number of servers
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取Number of images at risk
                     * @return ImageHasRiskInfoCnt Number of images at risk
                     */
                    uint64_t GetImageHasRiskInfoCnt() const;

                    /**
                     * 判断参数 ImageHasRiskInfoCnt 是否已赋值
                     * @return ImageHasRiskInfoCnt 是否已赋值
                     */
                    bool ImageHasRiskInfoCntHasBeenSet() const;

                    /**
                     * 获取Number of images with viruses
                     * @return ImageHasVirusCnt Number of images with viruses
                     */
                    uint64_t GetImageHasVirusCnt() const;

                    /**
                     * 判断参数 ImageHasVirusCnt 是否已赋值
                     * @return ImageHasVirusCnt 是否已赋值
                     */
                    bool ImageHasVirusCntHasBeenSet() const;

                    /**
                     * 获取Number of images with vulnerabilities
                     * @return ImageHasVulsCnt Number of images with vulnerabilities
                     */
                    uint64_t GetImageHasVulsCnt() const;

                    /**
                     * 判断参数 ImageHasVulsCnt 是否已赋值
                     * @return ImageHasVulsCnt 是否已赋值
                     */
                    bool ImageHasVulsCntHasBeenSet() const;

                    /**
                     * 获取Number of untrusted images
                     * @return ImageUntrustCnt Number of untrusted images
                     */
                    uint64_t GetImageUntrustCnt() const;

                    /**
                     * 判断参数 ImageUntrustCnt 是否已赋值
                     * @return ImageUntrustCnt 是否已赋值
                     */
                    bool ImageUntrustCntHasBeenSet() const;

                    /**
                     * 获取Number of listened ports
                     * @return ListenPortCnt Number of listened ports
                     */
                    uint64_t GetListenPortCnt() const;

                    /**
                     * 判断参数 ListenPortCnt 是否已赋值
                     * @return ListenPortCnt 是否已赋值
                     */
                    bool ListenPortCntHasBeenSet() const;

                    /**
                     * 获取Number of processes
                     * @return ProcessCnt Number of processes
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取Number of web services
                     * @return WebServiceCnt Number of web services
                     */
                    uint64_t GetWebServiceCnt() const;

                    /**
                     * 判断参数 WebServiceCnt 是否已赋值
                     * @return WebServiceCnt 是否已赋值
                     */
                    bool WebServiceCntHasBeenSet() const;

                    /**
                     * 获取Last image scan time
                     * @return LatestImageScanTime Last image scan time
                     */
                    std::string GetLatestImageScanTime() const;

                    /**
                     * 判断参数 LatestImageScanTime 是否已赋值
                     * @return LatestImageScanTime 是否已赋值
                     */
                    bool LatestImageScanTimeHasBeenSet() const;

                    /**
                     * 获取Number of images at risk
                     * @return ImageUnsafeCnt Number of images at risk
                     */
                    uint64_t GetImageUnsafeCnt() const;

                    /**
                     * 判断参数 ImageUnsafeCnt 是否已赋值
                     * @return ImageUnsafeCnt 是否已赋值
                     */
                    bool ImageUnsafeCntHasBeenSet() const;

                    /**
                     * 获取Number of servers not installed with the agent
                     * @return HostUnInstallCnt Number of servers not installed with the agent
                     */
                    uint64_t GetHostUnInstallCnt() const;

                    /**
                     * 判断参数 HostUnInstallCnt 是否已赋值
                     * @return HostUnInstallCnt 是否已赋值
                     */
                    bool HostUnInstallCntHasBeenSet() const;

                private:

                    /**
                     * Number of applications
                     */
                    uint64_t m_appCnt;
                    bool m_appCntHasBeenSet;

                    /**
                     * Number of containers
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * Number of paused containers
                     */
                    uint64_t m_containerPause;
                    bool m_containerPauseHasBeenSet;

                    /**
                     * Number of running containers
                     */
                    uint64_t m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * Number of stopped containers
                     */
                    uint64_t m_containerStop;
                    bool m_containerStopHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of databases
                     */
                    uint64_t m_dbCnt;
                    bool m_dbCntHasBeenSet;

                    /**
                     * Number of images
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of online servers
                     */
                    uint64_t m_hostOnline;
                    bool m_hostOnlineHasBeenSet;

                    /**
                     * Number of servers
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * Number of images at risk
                     */
                    uint64_t m_imageHasRiskInfoCnt;
                    bool m_imageHasRiskInfoCntHasBeenSet;

                    /**
                     * Number of images with viruses
                     */
                    uint64_t m_imageHasVirusCnt;
                    bool m_imageHasVirusCntHasBeenSet;

                    /**
                     * Number of images with vulnerabilities
                     */
                    uint64_t m_imageHasVulsCnt;
                    bool m_imageHasVulsCntHasBeenSet;

                    /**
                     * Number of untrusted images
                     */
                    uint64_t m_imageUntrustCnt;
                    bool m_imageUntrustCntHasBeenSet;

                    /**
                     * Number of listened ports
                     */
                    uint64_t m_listenPortCnt;
                    bool m_listenPortCntHasBeenSet;

                    /**
                     * Number of processes
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * Number of web services
                     */
                    uint64_t m_webServiceCnt;
                    bool m_webServiceCntHasBeenSet;

                    /**
                     * Last image scan time
                     */
                    std::string m_latestImageScanTime;
                    bool m_latestImageScanTimeHasBeenSet;

                    /**
                     * Number of images at risk
                     */
                    uint64_t m_imageUnsafeCnt;
                    bool m_imageUnsafeCntHasBeenSet;

                    /**
                     * Number of servers not installed with the agent
                     */
                    uint64_t m_hostUnInstallCnt;
                    bool m_hostUnInstallCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_
