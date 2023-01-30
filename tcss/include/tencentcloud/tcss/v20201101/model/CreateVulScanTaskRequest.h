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
                     * 获取Local image scan scope. Valid values: `ALL` (all local images); `NOT_SCAN` (all licensed but not scanned local images); `IMAGEIDS` (IDs of specified local images).
                     * @return LocalImageScanType Local image scan scope. Valid values: `ALL` (all local images); `NOT_SCAN` (all licensed but not scanned local images); `IMAGEIDS` (IDs of specified local images).
                     */
                    std::string GetLocalImageScanType() const;

                    /**
                     * 设置Local image scan scope. Valid values: `ALL` (all local images); `NOT_SCAN` (all licensed but not scanned local images); `IMAGEIDS` (IDs of specified local images).
                     * @param LocalImageScanType Local image scan scope. Valid values: `ALL` (all local images); `NOT_SCAN` (all licensed but not scanned local images); `IMAGEIDS` (IDs of specified local images).
                     */
                    void SetLocalImageScanType(const std::string& _localImageScanType);

                    /**
                     * 判断参数 LocalImageScanType 是否已赋值
                     * @return LocalImageScanType 是否已赋值
                     */
                    bool LocalImageScanTypeHasBeenSet() const;

                    /**
                     * 获取Scan by licensed local image ID, with a higher priority than scan by licensed local image that meets the condition.
                     * @return LocalImageIDs Scan by licensed local image ID, with a higher priority than scan by licensed local image that meets the condition.
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置Scan by licensed local image ID, with a higher priority than scan by licensed local image that meets the condition.
                     * @param LocalImageIDs Scan by licensed local image ID, with a higher priority than scan by licensed local image that meets the condition.
                     */
                    void SetLocalImageIDs(const std::vector<std::string>& _localImageIDs);

                    /**
                     * 判断参数 LocalImageIDs 是否已赋值
                     * @return LocalImageIDs 是否已赋值
                     */
                    bool LocalImageIDsHasBeenSet() const;

                    /**
                     * 获取Repository image scan scope. Valid values: `ALL` (all repository images); `NOT_SCAN` (all licensed but not scanned repository images); `IMAGEIDS` (IDs of specified repository images).
                     * @return RegistryImageScanType Repository image scan scope. Valid values: `ALL` (all repository images); `NOT_SCAN` (all licensed but not scanned repository images); `IMAGEIDS` (IDs of specified repository images).
                     */
                    std::string GetRegistryImageScanType() const;

                    /**
                     * 设置Repository image scan scope. Valid values: `ALL` (all repository images); `NOT_SCAN` (all licensed but not scanned repository images); `IMAGEIDS` (IDs of specified repository images).
                     * @param RegistryImageScanType Repository image scan scope. Valid values: `ALL` (all repository images); `NOT_SCAN` (all licensed but not scanned repository images); `IMAGEIDS` (IDs of specified repository images).
                     */
                    void SetRegistryImageScanType(const std::string& _registryImageScanType);

                    /**
                     * 判断参数 RegistryImageScanType 是否已赋值
                     * @return RegistryImageScanType 是否已赋值
                     */
                    bool RegistryImageScanTypeHasBeenSet() const;

                    /**
                     * 获取Scan by licensed repository image ID, with a higher priority than scan by licensed repository image that meets the condition.
                     * @return RegistryImageIDs Scan by licensed repository image ID, with a higher priority than scan by licensed repository image that meets the condition.
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置Scan by licensed repository image ID, with a higher priority than scan by licensed repository image that meets the condition.
                     * @param RegistryImageIDs Scan by licensed repository image ID, with a higher priority than scan by licensed repository image that meets the condition.
                     */
                    void SetRegistryImageIDs(const std::vector<uint64_t>& _registryImageIDs);

                    /**
                     * 判断参数 RegistryImageIDs 是否已赋值
                     * @return RegistryImageIDs 是否已赋值
                     */
                    bool RegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取ID of the task to scan local images again for vulnerabilities
                     * @return LocalTaskID ID of the task to scan local images again for vulnerabilities
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置ID of the task to scan local images again for vulnerabilities
                     * @param LocalTaskID ID of the task to scan local images again for vulnerabilities
                     */
                    void SetLocalTaskID(const int64_t& _localTaskID);

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取ID of the task to scan repository images again for vulnerabilities
                     * @return RegistryTaskID ID of the task to scan repository images again for vulnerabilities
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置ID of the task to scan repository images again for vulnerabilities
                     * @param RegistryTaskID ID of the task to scan repository images again for vulnerabilities
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                private:

                    /**
                     * Local image scan scope. Valid values: `ALL` (all local images); `NOT_SCAN` (all licensed but not scanned local images); `IMAGEIDS` (IDs of specified local images).
                     */
                    std::string m_localImageScanType;
                    bool m_localImageScanTypeHasBeenSet;

                    /**
                     * Scan by licensed local image ID, with a higher priority than scan by licensed local image that meets the condition.
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * Repository image scan scope. Valid values: `ALL` (all repository images); `NOT_SCAN` (all licensed but not scanned repository images); `IMAGEIDS` (IDs of specified repository images).
                     */
                    std::string m_registryImageScanType;
                    bool m_registryImageScanTypeHasBeenSet;

                    /**
                     * Scan by licensed repository image ID, with a higher priority than scan by licensed repository image that meets the condition.
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * ID of the task to scan local images again for vulnerabilities
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * ID of the task to scan repository images again for vulnerabilities
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
