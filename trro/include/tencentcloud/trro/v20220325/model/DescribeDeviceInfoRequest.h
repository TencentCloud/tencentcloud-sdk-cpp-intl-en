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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeDeviceInfo request structure.
                */
                class DescribeDeviceInfoRequest : public AbstractModel
                {
                public:
                    DescribeDeviceInfoRequest();
                    ~DescribeDeviceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id to which the target device belongs.
                     * @return ProjectId Project id to which the target device belongs.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id to which the target device belongs.
                     * @param _projectId Project id to which the target device belongs.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Target device id.
                     * @return DeviceId Target device id.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Target device id.
                     * @param _deviceId Target device id.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * Project id to which the target device belongs.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Target device id.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
