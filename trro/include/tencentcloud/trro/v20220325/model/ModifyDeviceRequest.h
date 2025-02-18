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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_

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
                * ModifyDevice request structure.
                */
                class ModifyDeviceRequest : public AbstractModel
                {
                public:
                    ModifyDeviceRequest();
                    ~ModifyDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The target project id to modify the device's affiliated project.
                     * @return ProjectId The target project id to modify the device's affiliated project.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置The target project id to modify the device's affiliated project.
                     * @param _projectId The target project id to modify the device's affiliated project.
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
                     * 获取The target device id to modify the device.
                     * @return DeviceId The target device id to modify the device.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置The target device id to modify the device.
                     * @param _deviceId The target device id to modify the device.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取The modified device name; if not filled in, no modification will be made.
                     * @return DeviceName The modified device name; if not filled in, no modification will be made.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置The modified device name; if not filled in, no modification will be made.
                     * @param _deviceName The modified device name; if not filled in, no modification will be made.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取The modified device authentication password; if not filled in, no modification will be made.
                     * @return DeviceToken The modified device authentication password; if not filled in, no modification will be made.
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置The modified device authentication password; if not filled in, no modification will be made.
                     * @param _deviceToken The modified device authentication password; if not filled in, no modification will be made.
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                private:

                    /**
                     * The target project id to modify the device's affiliated project.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The target device id to modify the device.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * The modified device name; if not filled in, no modification will be made.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * The modified device authentication password; if not filled in, no modification will be made.
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_
