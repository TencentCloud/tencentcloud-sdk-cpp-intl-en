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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_

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
                * List of image IDs
                */
                class ImagesInfo : public AbstractModel
                {
                public:
                    ImagesInfo();
                    ~ImagesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return Size Image size
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Image size
                     * @param _size Image size
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Number of hosts (includes regular nodes and super nodes).
                     * @return HostCnt Number of hosts (includes regular nodes and super nodes).
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 设置Number of hosts (includes regular nodes and super nodes).
                     * @param _hostCnt Number of hosts (includes regular nodes and super nodes).
                     * 
                     */
                    void SetHostCnt(const uint64_t& _hostCnt);

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取Number of super nodes.
                     * @return SuperNodeCnt Number of super nodes.
                     * 
                     */
                    uint64_t GetSuperNodeCnt() const;

                    /**
                     * 设置Number of super nodes.
                     * @param _superNodeCnt Number of super nodes.
                     * 
                     */
                    void SetSuperNodeCnt(const uint64_t& _superNodeCnt);

                    /**
                     * 判断参数 SuperNodeCnt 是否已赋值
                     * @return SuperNodeCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeCntHasBeenSet() const;

                    /**
                     * 获取Number of containers
                     * @return ContainerCnt Number of containers
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置Number of containers
                     * @param _containerCnt Number of containers
                     * 
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scan time
                     * @param _scanTime Scan time
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VulCnt Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulCnt Number of vulnerabilities
                     * 
                     */
                    void SetVulCnt(const uint64_t& _vulCnt);

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取Number of viruses
                     * @return VirusCnt Number of viruses
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置Number of viruses
                     * @param _virusCnt Number of viruses
                     * 
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取Number of sensitive data items
                     * @return RiskCnt Number of sensitive data items
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置Number of sensitive data items
                     * @param _riskCnt Number of sensitive data items
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Whether it is a trusted image
                     * @return IsTrustImage Whether it is a trusted image
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 设置Whether it is a trusted image
                     * @param _isTrustImage Whether it is a trusted image
                     * 
                     */
                    void SetIsTrustImage(const bool& _isTrustImage);

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     * 
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取Image system
                     * @return OsName Image system
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Image system
                     * @param _osName Image system
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image scan error in the agent
                     * @return AgentError Image scan error in the agent
                     * 
                     */
                    std::string GetAgentError() const;

                    /**
                     * 设置Image scan error in the agent
                     * @param _agentError Image scan error in the agent
                     * 
                     */
                    void SetAgentError(const std::string& _agentError);

                    /**
                     * 判断参数 AgentError 是否已赋值
                     * @return AgentError 是否已赋值
                     * 
                     */
                    bool AgentErrorHasBeenSet() const;

                    /**
                     * 获取Image scan error on the backend
                     * @return ScanError Image scan error on the backend
                     * 
                     */
                    std::string GetScanError() const;

                    /**
                     * 设置Image scan error on the backend
                     * @param _scanError Image scan error on the backend
                     * 
                     */
                    void SetScanError(const std::string& _scanError);

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     * 
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取Scanning status
                     * @return ScanStatus Scanning status
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Scanning status
                     * @param _scanStatus Scanning status
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Trojan scan error message
                     * @return ScanVirusError Trojan scan error message
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 设置Trojan scan error message
                     * @param _scanVirusError Trojan scan error message
                     * 
                     */
                    void SetScanVirusError(const std::string& _scanVirusError);

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     * 
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取Vulnerability scan error message
                     * @return ScanVulError Vulnerability scan error message
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 设置Vulnerability scan error message
                     * @param _scanVulError Vulnerability scan error message
                     * 
                     */
                    void SetScanVulError(const std::string& _scanVulError);

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     * 
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取Risk scan error message
                     * @return ScanRiskError Risk scan error message
                     * 
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 设置Risk scan error message
                     * @param _scanRiskError Risk scan error message
                     * 
                     */
                    void SetScanRiskError(const std::string& _scanRiskError);

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     * 
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取Whether the image is of high priority. Valid values: `0` (no); others (yes).
                     * @return IsSuggest Whether the image is of high priority. Valid values: `0` (no); others (yes).
                     * 
                     */
                    uint64_t GetIsSuggest() const;

                    /**
                     * 设置Whether the image is of high priority. Valid values: `0` (no); others (yes).
                     * @param _isSuggest Whether the image is of high priority. Valid values: `0` (no); others (yes).
                     * 
                     */
                    void SetIsSuggest(const uint64_t& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * @return IsAuthorized Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * @param _isAuthorized Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取Number of components
                     * @return ComponentCnt Number of components
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 设置Number of components
                     * @param _componentCnt Number of components
                     * 
                     */
                    void SetComponentCnt(const uint64_t& _componentCnt);

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return CriticalLevelVulCnt 
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _criticalLevelVulCnt 
                     * 
                     */
                    void SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt);

                    /**
                     * 判断参数 CriticalLevelVulCnt 是否已赋值
                     * @return CriticalLevelVulCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighLevelVulCnt 
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _highLevelVulCnt 
                     * 
                     */
                    void SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt);

                    /**
                     * 判断参数 HighLevelVulCnt 是否已赋值
                     * @return HighLevelVulCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediumLevelVulCnt 
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _mediumLevelVulCnt 
                     * 
                     */
                    void SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt);

                    /**
                     * 判断参数 MediumLevelVulCnt 是否已赋值
                     * @return MediumLevelVulCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return LowLevelVulCnt 
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _lowLevelVulCnt 
                     * 
                     */
                    void SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt);

                    /**
                     * 判断参数 LowLevelVulCnt 是否已赋值
                     * @return LowLevelVulCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsLatestImage 
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置
                     * @param _isLatestImage 
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取
                     * @return RecommendedFix 
                     * 
                     */
                    bool GetRecommendedFix() const;

                    /**
                     * 设置
                     * @param _recommendedFix 
                     * 
                     */
                    void SetRecommendedFix(const bool& _recommendedFix);

                    /**
                     * 判断参数 RecommendedFix 是否已赋值
                     * @return RecommendedFix 是否已赋值
                     * 
                     */
                    bool RecommendedFixHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Solution Solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param _solution Solution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Reason

                     * @return Reason Reason

                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason

                     * @param _reason Reason

                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Image size
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Number of hosts (includes regular nodes and super nodes).
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * Number of super nodes.
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * Number of containers
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * Scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * Number of viruses
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * Number of sensitive data items
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Whether it is a trusted image
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

                    /**
                     * Image system
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image scan error in the agent
                     */
                    std::string m_agentError;
                    bool m_agentErrorHasBeenSet;

                    /**
                     * Image scan error on the backend
                     */
                    std::string m_scanError;
                    bool m_scanErrorHasBeenSet;

                    /**
                     * Scanning status
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Trojan scan error message
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * Vulnerability scan error message
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * Risk scan error message
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * Whether the image is of high priority. Valid values: `0` (no); others (yes).
                     */
                    uint64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * Number of components
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * 
                     */
                    bool m_recommendedFix;
                    bool m_recommendedFixHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Reason

                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_
