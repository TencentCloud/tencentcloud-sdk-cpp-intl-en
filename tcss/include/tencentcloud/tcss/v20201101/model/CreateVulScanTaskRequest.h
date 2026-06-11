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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_

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
                * CreateVulScanTask request structure.
                */
                class CreateVulScanTaskRequest : public AbstractModel
                {
                public:
                    CreateVulScanTaskRequest();
                    ~CreateVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Local image scan range type</p><p>Enumeration value:</p><ul><li>ALL: All local images</li><li>NOT_SCAN: All authorized unscanned local images</li><li>IMAGEIDS: Selected local image IDs</li><li>CLUSTER: Cluster filtering</li></ul>
                     * @return LocalImageScanType <p>Local image scan range type</p><p>Enumeration value:</p><ul><li>ALL: All local images</li><li>NOT_SCAN: All authorized unscanned local images</li><li>IMAGEIDS: Selected local image IDs</li><li>CLUSTER: Cluster filtering</li></ul>
                     * 
                     */
                    std::string GetLocalImageScanType() const;

                    /**
                     * 设置<p>Local image scan range type</p><p>Enumeration value:</p><ul><li>ALL: All local images</li><li>NOT_SCAN: All authorized unscanned local images</li><li>IMAGEIDS: Selected local image IDs</li><li>CLUSTER: Cluster filtering</li></ul>
                     * @param _localImageScanType <p>Local image scan range type</p><p>Enumeration value:</p><ul><li>ALL: All local images</li><li>NOT_SCAN: All authorized unscanned local images</li><li>IMAGEIDS: Selected local image IDs</li><li>CLUSTER: Cluster filtering</li></ul>
                     * 
                     */
                    void SetLocalImageScanType(const std::string& _localImageScanType);

                    /**
                     * 判断参数 LocalImageScanType 是否已赋值
                     * @return LocalImageScanType 是否已赋值
                     * 
                     */
                    bool LocalImageScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan by authorized local image IDs, which takes precedence over scanning by authorized local images that meet the conditions.</p>
                     * @return LocalImageIDs <p>Scan by authorized local image IDs, which takes precedence over scanning by authorized local images that meet the conditions.</p>
                     * 
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置<p>Scan by authorized local image IDs, which takes precedence over scanning by authorized local images that meet the conditions.</p>
                     * @param _localImageIDs <p>Scan by authorized local image IDs, which takes precedence over scanning by authorized local images that meet the conditions.</p>
                     * 
                     */
                    void SetLocalImageIDs(const std::vector<std::string>& _localImageIDs);

                    /**
                     * 判断参数 LocalImageIDs 是否已赋值
                     * @return LocalImageIDs 是否已赋值
                     * 
                     */
                    bool LocalImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>Repository image scan range type. ALL: All repository images. NOT_SCAN: Total authorized unscanned repository images. IMAGEIDS: Selected repository image IDs.</p>
                     * @return RegistryImageScanType <p>Repository image scan range type. ALL: All repository images. NOT_SCAN: Total authorized unscanned repository images. IMAGEIDS: Selected repository image IDs.</p>
                     * 
                     */
                    std::string GetRegistryImageScanType() const;

                    /**
                     * 设置<p>Repository image scan range type. ALL: All repository images. NOT_SCAN: Total authorized unscanned repository images. IMAGEIDS: Selected repository image IDs.</p>
                     * @param _registryImageScanType <p>Repository image scan range type. ALL: All repository images. NOT_SCAN: Total authorized unscanned repository images. IMAGEIDS: Selected repository image IDs.</p>
                     * 
                     */
                    void SetRegistryImageScanType(const std::string& _registryImageScanType);

                    /**
                     * 判断参数 RegistryImageScanType 是否已赋值
                     * @return RegistryImageScanType 是否已赋值
                     * 
                     */
                    bool RegistryImageScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan by authorized repository image IDs, which takes precedence over scanning by authorized repository images that meet the conditions.</p>
                     * @return RegistryImageIDs <p>Scan by authorized repository image IDs, which takes precedence over scanning by authorized repository images that meet the conditions.</p>
                     * 
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置<p>Scan by authorized repository image IDs, which takes precedence over scanning by authorized repository images that meet the conditions.</p>
                     * @param _registryImageIDs <p>Scan by authorized repository image IDs, which takes precedence over scanning by authorized repository images that meet the conditions.</p>
                     * 
                     */
                    void SetRegistryImageIDs(const std::vector<uint64_t>& _registryImageIDs);

                    /**
                     * 判断参数 RegistryImageIDs 是否已赋值
                     * @return RegistryImageIDs 是否已赋值
                     * 
                     */
                    bool RegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>Task ID for local image re-vulnerability scanning</p>
                     * @return LocalTaskID <p>Task ID for local image re-vulnerability scanning</p>
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置<p>Task ID for local image re-vulnerability scanning</p>
                     * @param _localTaskID <p>Task ID for local image re-vulnerability scanning</p>
                     * 
                     */
                    void SetLocalTaskID(const int64_t& _localTaskID);

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     * 
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Task ID for repository image re-vulnerability scanning</p>
                     * @return RegistryTaskID <p>Task ID for repository image re-vulnerability scanning</p>
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置<p>Task ID for repository image re-vulnerability scanning</p>
                     * @param _registryTaskID <p>Task ID for repository image re-vulnerability scanning</p>
                     * 
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Local image container runtime</p>
                     * @return LocalImageContainerRunning <p>Local image container runtime</p>
                     * 
                     */
                    bool GetLocalImageContainerRunning() const;

                    /**
                     * 设置<p>Local image container runtime</p>
                     * @param _localImageContainerRunning <p>Local image container runtime</p>
                     * 
                     */
                    void SetLocalImageContainerRunning(const bool& _localImageContainerRunning);

                    /**
                     * 判断参数 LocalImageContainerRunning 是否已赋值
                     * @return LocalImageContainerRunning 是否已赋值
                     * 
                     */
                    bool LocalImageContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>Image Container in repository is running</p>
                     * @return RegistryImageContainerRunning <p>Image Container in repository is running</p>
                     * 
                     */
                    bool GetRegistryImageContainerRunning() const;

                    /**
                     * 设置<p>Image Container in repository is running</p>
                     * @param _registryImageContainerRunning <p>Image Container in repository is running</p>
                     * 
                     */
                    void SetRegistryImageContainerRunning(const bool& _registryImageContainerRunning);

                    /**
                     * 判断参数 RegistryImageContainerRunning 是否已赋值
                     * @return RegistryImageContainerRunning 是否已赋值
                     * 
                     */
                    bool RegistryImageContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>Whether the repository image is the latest</p>
                     * @return IsLatest <p>Whether the repository image is the latest</p>
                     * 
                     */
                    bool GetIsLatest() const;

                    /**
                     * 设置<p>Whether the repository image is the latest</p>
                     * @param _isLatest <p>Whether the repository image is the latest</p>
                     * 
                     */
                    void SetIsLatest(const bool& _isLatest);

                    /**
                     * 判断参数 IsLatest 是否已赋值
                     * @return IsLatest 是否已赋值
                     * 
                     */
                    bool IsLatestHasBeenSet() const;

                    /**
                     * 获取<p>Local image id to remove</p>
                     * @return ExcludeLocalImageIDs <p>Local image id to remove</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeLocalImageIDs() const;

                    /**
                     * 设置<p>Local image id to remove</p>
                     * @param _excludeLocalImageIDs <p>Local image id to remove</p>
                     * 
                     */
                    void SetExcludeLocalImageIDs(const std::vector<std::string>& _excludeLocalImageIDs);

                    /**
                     * 判断参数 ExcludeLocalImageIDs 是否已赋值
                     * @return ExcludeLocalImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeLocalImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>id of the repository image to remove</p>
                     * @return ExcludeRegistryImageIDs <p>id of the repository image to remove</p>
                     * 
                     */
                    std::vector<uint64_t> GetExcludeRegistryImageIDs() const;

                    /**
                     * 设置<p>id of the repository image to remove</p>
                     * @param _excludeRegistryImageIDs <p>id of the repository image to remove</p>
                     * 
                     */
                    void SetExcludeRegistryImageIDs(const std::vector<uint64_t>& _excludeRegistryImageIDs);

                    /**
                     * 判断参数 ExcludeRegistryImageIDs 是否已赋值
                     * @return ExcludeRegistryImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeRegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return LocalClusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetLocalClusterIDs() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _localClusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    void SetLocalClusterIDs(const std::vector<std::string>& _localClusterIDs);

                    /**
                     * 判断参数 LocalClusterIDs 是否已赋值
                     * @return LocalClusterIDs 是否已赋值
                     * 
                     */
                    bool LocalClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Local image scan range type</p><p>Enumeration value:</p><ul><li>ALL: All local images</li><li>NOT_SCAN: All authorized unscanned local images</li><li>IMAGEIDS: Selected local image IDs</li><li>CLUSTER: Cluster filtering</li></ul>
                     */
                    std::string m_localImageScanType;
                    bool m_localImageScanTypeHasBeenSet;

                    /**
                     * <p>Scan by authorized local image IDs, which takes precedence over scanning by authorized local images that meet the conditions.</p>
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * <p>Repository image scan range type. ALL: All repository images. NOT_SCAN: Total authorized unscanned repository images. IMAGEIDS: Selected repository image IDs.</p>
                     */
                    std::string m_registryImageScanType;
                    bool m_registryImageScanTypeHasBeenSet;

                    /**
                     * <p>Scan by authorized repository image IDs, which takes precedence over scanning by authorized repository images that meet the conditions.</p>
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * <p>Task ID for local image re-vulnerability scanning</p>
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * <p>Task ID for repository image re-vulnerability scanning</p>
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                    /**
                     * <p>Local image container runtime</p>
                     */
                    bool m_localImageContainerRunning;
                    bool m_localImageContainerRunningHasBeenSet;

                    /**
                     * <p>Image Container in repository is running</p>
                     */
                    bool m_registryImageContainerRunning;
                    bool m_registryImageContainerRunningHasBeenSet;

                    /**
                     * <p>Whether the repository image is the latest</p>
                     */
                    bool m_isLatest;
                    bool m_isLatestHasBeenSet;

                    /**
                     * <p>Local image id to remove</p>
                     */
                    std::vector<std::string> m_excludeLocalImageIDs;
                    bool m_excludeLocalImageIDsHasBeenSet;

                    /**
                     * <p>id of the repository image to remove</p>
                     */
                    std::vector<uint64_t> m_excludeRegistryImageIDs;
                    bool m_excludeRegistryImageIDsHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::vector<std::string> m_localClusterIDs;
                    bool m_localClusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
