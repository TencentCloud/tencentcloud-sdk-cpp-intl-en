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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageScanTask request structure.
                */
                class CreateAssetImageScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanTaskRequest();
                    ~CreateAssetImageScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether to scan all images; select one from all images, image list, and filter by condition.</p>
                     * @return All <p>Whether to scan all images; select one from all images, image list, and filter by condition.</p>
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>Whether to scan all images; select one from all images, image list, and filter by condition.</p>
                     * @param _all <p>Whether to scan all images; select one from all images, image list, and filter by condition.</p>
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
                     * 获取<p>List of images to scan; choose one from all images, image list, and filter by condition.</p>
                     * @return Images <p>List of images to scan; choose one from all images, image list, and filter by condition.</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>List of images to scan; choose one from all images, image list, and filter by condition.</p>
                     * @param _images <p>List of images to scan; choose one from all images, image list, and filter by condition.</p>
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
                     * 获取<p>Scan vulnerabilities; select one from vulnerability, Trojan, and risk.</p>
                     * @return ScanVul <p>Scan vulnerabilities; select one from vulnerability, Trojan, and risk.</p>
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置<p>Scan vulnerabilities; select one from vulnerability, Trojan, and risk.</p>
                     * @param _scanVul <p>Scan vulnerabilities; select one from vulnerability, Trojan, and risk.</p>
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
                     * 获取<p>Scan for trojans; select either vulnerability, Trojan or risk.</p>
                     * @return ScanVirus <p>Scan for trojans; select either vulnerability, Trojan or risk.</p>
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置<p>Scan for trojans; select either vulnerability, Trojan or risk.</p>
                     * @param _scanVirus <p>Scan for trojans; select either vulnerability, Trojan or risk.</p>
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
                     * 获取<p>Scan risk; select one from vulnerability, Trojan, and risk.</p>
                     * @return ScanRisk <p>Scan risk; select one from vulnerability, Trojan, and risk.</p>
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置<p>Scan risk; select one from vulnerability, Trojan, and risk.</p>
                     * @param _scanRisk <p>Scan risk; select one from vulnerability, Trojan, and risk.</p>
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
                     * 获取<p>Filter images by conditions; select one from all images, image list, and filter by condition.</p>
                     * @return Filters <p>Filter images by conditions; select one from all images, image list, and filter by condition.</p>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter images by conditions; select one from all images, image list, and filter by condition.</p>
                     * @param _filters <p>Filter images by conditions; select one from all images, image list, and filter by condition.</p>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Filter images by conditions and exclude individual images</p>
                     * @return ExcludeImageIds <p>Filter images by conditions and exclude individual images</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIds() const;

                    /**
                     * 设置<p>Filter images by conditions and exclude individual images</p>
                     * @param _excludeImageIds <p>Filter images by conditions and exclude individual images</p>
                     * 
                     */
                    void SetExcludeImageIds(const std::vector<std::string>& _excludeImageIds);

                    /**
                     * 判断参数 ExcludeImageIds 是否已赋值
                     * @return ExcludeImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageIdsHasBeenSet() const;

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
                     * 获取<p>Scan range 0 all authorized images, 1 selected images, 2 recommended scan, 3 cluster scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * @return ScanScope <p>Scan range 0 all authorized images, 1 selected images, 2 recommended scan, 3 cluster scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置<p>Scan range 0 all authorized images, 1 selected images, 2 recommended scan, 3 cluster scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     * @param _scanScope <p>Scan range 0 all authorized images, 1 selected images, 2 recommended scan, 3 cluster scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
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
                     * 获取<p>Task timeout duration unit seconds, default 1 hour.</p>
                     * @return Timeout <p>Task timeout duration unit seconds, default 1 hour.</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Task timeout duration unit seconds, default 1 hour.</p>
                     * @param _timeout <p>Task timeout duration unit seconds, default 1 hour.</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>One-click scan task. Default false indicates non-one-click scan, true one-click scan.</p>
                     * @return IsOneClickScanningTask <p>One-click scan task. Default false indicates non-one-click scan, true one-click scan.</p>
                     * 
                     */
                    bool GetIsOneClickScanningTask() const;

                    /**
                     * 设置<p>One-click scan task. Default false indicates non-one-click scan, true one-click scan.</p>
                     * @param _isOneClickScanningTask <p>One-click scan task. Default false indicates non-one-click scan, true one-click scan.</p>
                     * 
                     */
                    void SetIsOneClickScanningTask(const bool& _isOneClickScanningTask);

                    /**
                     * 判断参数 IsOneClickScanningTask 是否已赋值
                     * @return IsOneClickScanningTask 是否已赋值
                     * 
                     */
                    bool IsOneClickScanningTaskHasBeenSet() const;

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
                     * <p>Whether to scan all images; select one from all images, image list, and filter by condition.</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>List of images to scan; choose one from all images, image list, and filter by condition.</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Scan vulnerabilities; select one from vulnerability, Trojan, and risk.</p>
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * <p>Scan for trojans; select either vulnerability, Trojan or risk.</p>
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * <p>Scan risk; select one from vulnerability, Trojan, and risk.</p>
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * <p>Filter images by conditions; select one from all images, image list, and filter by condition.</p>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Filter images by conditions and exclude individual images</p>
                     */
                    std::vector<std::string> m_excludeImageIds;
                    bool m_excludeImageIdsHasBeenSet;

                    /**
                     * <p>Whether the image has running containers</p>
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * <p>Scan range 0 all authorized images, 1 selected images, 2 recommended scan, 3 cluster scan</p><p>Value ranges from 0 to 3</p><p>Default value: 0</p>
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * <p>Task timeout duration unit seconds, default 1 hour.</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>One-click scan task. Default false indicates non-one-click scan, true one-click scan.</p>
                     */
                    bool m_isOneClickScanningTask;
                    bool m_isOneClickScanningTaskHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
