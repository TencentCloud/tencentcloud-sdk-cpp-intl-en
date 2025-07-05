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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_

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
                * StopVulScanTask request structure.
                */
                class StopVulScanTaskRequest : public AbstractModel
                {
                public:
                    StopVulScanTaskRequest();
                    ~StopVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the task to scan local images for vulnerabilities
                     * @return LocalTaskID ID of the task to scan local images for vulnerabilities
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置ID of the task to scan local images for vulnerabilities
                     * @param _localTaskID ID of the task to scan local images for vulnerabilities
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
                     * 获取Local image ID. If it is not specified, it indicates all.
                     * @return LocalImageIDs Local image ID. If it is not specified, it indicates all.
                     * 
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置Local image ID. If it is not specified, it indicates all.
                     * @param _localImageIDs Local image ID. If it is not specified, it indicates all.
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
                     * 获取Repository image ID. If it is not specified, it indicates all.
                     * @return RegistryImageIDs Repository image ID. If it is not specified, it indicates all.
                     * 
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置Repository image ID. If it is not specified, it indicates all.
                     * @param _registryImageIDs Repository image ID. If it is not specified, it indicates all.
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
                     * 获取ID of the task to scan repository images for vulnerabilities
                     * @return RegistryTaskID ID of the task to scan repository images for vulnerabilities
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置ID of the task to scan repository images for vulnerabilities
                     * @param _registryTaskID ID of the task to scan repository images for vulnerabilities
                     * 
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                private:

                    /**
                     * ID of the task to scan local images for vulnerabilities
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * Local image ID. If it is not specified, it indicates all.
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * Repository image ID. If it is not specified, it indicates all.
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * ID of the task to scan repository images for vulnerabilities
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_
