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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_

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
                * CreateAssetImageScanSetting request structure.
                */
                class CreateAssetImageScanSettingRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanSettingRequest();
                    ~CreateAssetImageScanSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Switch.</p>
                     * @return Enable <p>Switch.</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Switch.</p>
                     * @param _enable <p>Switch.</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Scan start time<br>01:00 Time Division</p>
                     * @return ScanTime <p>Scan start time<br>01:00 Time Division</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>Scan start time<br>01:00 Time Division</p>
                     * @param _scanTime <p>Scan start time<br>01:00 Time Division</p>
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
                     * 获取<p>Scan cycle</p>
                     * @return ScanPeriod <p>Scan cycle</p>
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置<p>Scan cycle</p>
                     * @param _scanPeriod <p>Scan cycle</p>
                     * 
                     */
                    void SetScanPeriod(const uint64_t& _scanPeriod);

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Scan for trojans</p>
                     * @return ScanVirus <p>Scan for trojans</p>
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置<p>Scan for trojans</p>
                     * @param _scanVirus <p>Scan for trojans</p>
                     * 
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取<p>Scan sensitive information</p>
                     * @return ScanRisk <p>Scan sensitive information</p>
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置<p>Scan sensitive information</p>
                     * @param _scanRisk <p>Scan sensitive information</p>
                     * 
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取<p>Scan for vulnerabilities</p>
                     * @return ScanVul <p>Scan for vulnerabilities</p>
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置<p>Scan for vulnerabilities</p>
                     * @param _scanVul <p>Scan for vulnerabilities</p>
                     * 
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取<p>All images</p>
                     * @return All <p>All images</p>
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>All images</p>
                     * @param _all <p>All images</p>
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取<p>Custom Image</p>
                     * @return Images <p>Custom Image</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>Custom Image</p>
                     * @param _images <p>Custom Image</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>Whether the image has running containers</p>
                     * @return ContainerRunning <p>Whether the image has running containers</p>
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置<p>Whether the image has running containers</p>
                     * @param _containerRunning <p>Whether the image has running containers</p>
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>Scan range 0 all authorized images, 1 select mirror, 2 recommended scan, 3 cluster filtering scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * @return ScanScope <p>Scan range 0 all authorized images, 1 select mirror, 2 recommended scan, 3 cluster filtering scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置<p>Scan range 0 all authorized images, 1 select mirror, 2 recommended scan, 3 cluster filtering scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * @param _scanScope <p>Scan range 0 all authorized images, 1 select mirror, 2 recommended scan, 3 cluster filtering scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取<p>Scan end time<br>02:00 Time Division</p>
                     * @return ScanEndTime <p>Scan end time<br>02:00 Time Division</p>
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置<p>Scan end time<br>02:00 Time Division</p>
                     * @param _scanEndTime <p>Scan end time<br>02:00 Time Division</p>
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Exclude mirror scan</p>
                     * @return ExcludeImages <p>Exclude mirror scan</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 设置<p>Exclude mirror scan</p>
                     * @param _excludeImages <p>Exclude mirror scan</p>
                     * 
                     */
                    void SetExcludeImages(const std::vector<std::string>& _excludeImages);

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Switch.</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Scan start time<br>01:00 Time Division</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>Scan cycle</p>
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * <p>Scan for trojans</p>
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * <p>Scan sensitive information</p>
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * <p>Scan for vulnerabilities</p>
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * <p>All images</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>Custom Image</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Whether the image has running containers</p>
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * <p>Scan range 0 all authorized images, 1 select mirror, 2 recommended scan, 3 cluster filtering scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * <p>Scan end time<br>02:00 Time Division</p>
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * <p>Exclude mirror scan</p>
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
