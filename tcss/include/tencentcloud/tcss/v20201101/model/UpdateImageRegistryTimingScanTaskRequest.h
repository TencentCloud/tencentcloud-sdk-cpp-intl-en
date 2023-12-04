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
                     * 获取Scheduled scan time
                     * @return ScanTime Scheduled scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scheduled scan time
                     * @param _scanTime Scheduled scan time
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
                     * 获取Array of the scanned trojan types
                     * @return ScanType Array of the scanned trojan types
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置Array of the scanned trojan types
                     * @param _scanType Array of the scanned trojan types
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
                     * 获取Scanned image
                     * @return Images Scanned image
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置Scanned image
                     * @param _images Scanned image
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
                     * 获取ID of the image to be scanned
                     * @return Id ID of the image to be scanned
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置ID of the image to be scanned
                     * @param _id ID of the image to be scanned
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
                     * 获取Whether to scan for the latest version
                     * @return Latest Whether to scan for the latest version
                     * 
                     */
                    bool GetLatest() const;

                    /**
                     * 设置Whether to scan for the latest version
                     * @param _latest Whether to scan for the latest version
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
                     * 获取
                     * @return ContainerRunning 
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置
                     * @param _containerRunning 
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
                     * 获取
                     * @return ScanEndTime 
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置
                     * @param _scanEndTime 
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
                     * 获取
                     * @return ScanScope 
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置
                     * @param _scanScope 
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
                     * 获取
                     * @return RegistryType 
                     * 
                     */
                    std::vector<std::string> GetRegistryType() const;

                    /**
                     * 设置
                     * @param _registryType 
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
                     * 获取
                     * @return Namespace 
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 设置
                     * @param _namespace 
                     * 
                     */
                    void SetNamespace(const std::vector<std::string>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

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
                     * Scheduled scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Array of the scanned trojan types
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * Scanned image
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Whether to scan all
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * ID of the image to be scanned
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether to scan for the latest version
                     */
                    bool m_latest;
                    bool m_latestHasBeenSet;

                    /**
                     * 
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_
