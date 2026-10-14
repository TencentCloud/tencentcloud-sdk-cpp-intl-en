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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * UpdateImageRegistryTimingScanTask request structure.
                */
                class UpdateImageRegistryTimingScanTaskRequest : public AbstractModel
                {
                public:
                    UpdateImageRegistryTimingScanTaskRequest();
                    ~UpdateImageRegistryTimingScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scheduled scan cycle
                     * @return ScanPeriod Scheduled scan cycle
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置Scheduled scan cycle
                     * @param _scanPeriod Scheduled scan cycle
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
                     * 获取Scheduled scan switch
                     * @return Enable Scheduled scan switch
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Scheduled scan switch
                     * @param _enable Scheduled scan switch
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
                     * 获取The time for scheduled scan
                     * @return ScanTime The time for scheduled scan
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置The time for scheduled scan
                     * @param _scanTime The time for scheduled scan
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
                     * 获取Array of Trojan horse types to scan
                     * @return ScanType Array of Trojan horse types to scan
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置Array of Trojan horse types to scan
                     * @param _scanType Array of Trojan horse types to scan
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取Scan image
                     * @return Images Scan image
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置Scan image
                     * @param _images Scan image
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Whether to scan all
                     * @return All Whether to scan all
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to scan all
                     * @param _all Whether to scan all
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
                     * 获取Scan Image ID
                     * @return Id Scan Image ID
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置Scan Image ID
                     * @param _id Scan Image ID
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Whether to Scan the Latest Version
                     * @return Latest Whether to Scan the Latest Version
                     * 
                     */
                    bool GetLatest() const;

                    /**
                     * 设置Whether to Scan the Latest Version
                     * @param _latest Whether to Scan the Latest Version
                     * 
                     */
                    void SetLatest(const bool& _latest);

                    /**
                     * 判断参数 Latest 是否已赋值
                     * @return Latest 是否已赋值
                     * 
                     */
                    bool LatestHasBeenSet() const;

                    /**
                     * 获取Whether There Are Running Containers
                     * @return ContainerRunning Whether There Are Running Containers
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置Whether There Are Running Containers
                     * @param _containerRunning Whether There Are Running Containers
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
                     * 获取Scan end time
                     * @return ScanEndTime Scan end time
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置Scan end time
                     * @param _scanEndTime Scan end time
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
                     * 获取Scan Scope. 0: All Images; 1: Custom Images; 2: Recommended Scan Images
                     * @return ScanScope Scan Scope. 0: All Images; 1: Custom Images; 2: Recommended Scan Images
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置Scan Scope. 0: All Images; 1: Custom Images; 2: Recommended Scan Images
                     * @param _scanScope Scan Scope. 0: All Images; 1: Custom Images; 2: Recommended Scan Images
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
                     * 获取Repository Type: tcr, ccr, harbor
                     * @return RegistryType Repository Type: tcr, ccr, harbor
                     * 
                     */
                    std::vector<std::string> GetRegistryType() const;

                    /**
                     * 设置Repository Type: tcr, ccr, harbor
                     * @param _registryType Repository Type: tcr, ccr, harbor
                     * 
                     */
                    void SetRegistryType(const std::vector<std::string>& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::vector<std::string>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取IDs of excluded image assets.
                     * @return ExcludeImageAssetIds IDs of excluded image assets.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeImageAssetIds() const;

                    /**
                     * 设置IDs of excluded image assets.
                     * @param _excludeImageAssetIds IDs of excluded image assets.
                     * 
                     */
                    void SetExcludeImageAssetIds(const std::vector<uint64_t>& _excludeImageAssetIds);

                    /**
                     * 判断参数 ExcludeImageAssetIds 是否已赋值
                     * @return ExcludeImageAssetIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageAssetIdsHasBeenSet() const;

                private:

                    /**
                     * Scheduled scan cycle
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * Scheduled scan switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The time for scheduled scan
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Array of Trojan horse types to scan
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * Scan image
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Whether to scan all
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Scan Image ID
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether to Scan the Latest Version
                     */
                    bool m_latest;
                    bool m_latestHasBeenSet;

                    /**
                     * Whether There Are Running Containers
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * Scan end time
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * Scan Scope. 0: All Images; 1: Custom Images; 2: Recommended Scan Images
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * Repository Type: tcr, ccr, harbor
                     */
                    std::vector<std::string> m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * IDs of excluded image assets.
                     */
                    std::vector<uint64_t> m_excludeImageAssetIds;
                    bool m_excludeImageAssetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_
