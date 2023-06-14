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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_

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
                * DescribeVulScanInfo request structure.
                */
                class DescribeVulScanInfoRequest : public AbstractModel
                {
                public:
                    DescribeVulScanInfoRequest();
                    ~DescribeVulScanInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the task to scan local images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * @return LocalTaskID ID of the task to scan local images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置ID of the task to scan local images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * @param _localTaskID ID of the task to scan local images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
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
                     * 获取ID of the task to scan repository images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * @return RegistryTaskID ID of the task to scan repository images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置ID of the task to scan repository images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     * @param _registryTaskID ID of the task to scan repository images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
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
                     * ID of the task to scan local images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * ID of the task to scan repository images for vulnerabilities. If it is not specified, the ID of the last scan will be returned.
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_
