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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_

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
                * CreateDevice request structure.
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Create the project id to which the device belongs.
                     * @return ProjectId Create the project id to which the device belongs.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Create the project id to which the device belongs.
                     * @param _projectId Create the project id to which the device belongs.
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
                     * 获取Create a device id, which must be unique within the project, consisting of lowercase english letters, numbers, and underscores, with a length not exceeding 18.
                     * @return DeviceId Create a device id, which must be unique within the project, consisting of lowercase english letters, numbers, and underscores, with a length not exceeding 18.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Create a device id, which must be unique within the project, consisting of lowercase english letters, numbers, and underscores, with a length not exceeding 18.
                     * @param _deviceId Create a device id, which must be unique within the project, consisting of lowercase english letters, numbers, and underscores, with a length not exceeding 18.
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
                     * 获取Create a device name, with a length of less than 24, which can include chinese, numbers, english letters, and underscores.
                     * @return DeviceName Create a device name, with a length of less than 24, which can include chinese, numbers, english letters, and underscores.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Create a device name, with a length of less than 24, which can include chinese, numbers, english letters, and underscores.
                     * @param _deviceName Create a device name, with a length of less than 24, which can include chinese, numbers, english letters, and underscores.
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
                     * 获取Device type, field for on-site device (controlled device), remote for remote device (control device), default is field if not specified.
                     * @return DeviceType Device type, field for on-site device (controlled device), remote for remote device (control device), default is field if not specified.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Device type, field for on-site device (controlled device), remote for remote device (control device), default is field if not specified.
                     * @param _deviceType Device type, field for on-site device (controlled device), remote for remote device (control device), default is field if not specified.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Device authentication password, consisting of uppercase and lowercase english letters and digits, must be 16 characters.
                     * @return DeviceToken Device authentication password, consisting of uppercase and lowercase english letters and digits, must be 16 characters.
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置Device authentication password, consisting of uppercase and lowercase english letters and digits, must be 16 characters.
                     * @param _deviceToken Device authentication password, consisting of uppercase and lowercase english letters and digits, must be 16 characters.
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
                     * Create the project id to which the device belongs.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Create a device id, which must be unique within the project, consisting of lowercase english letters, numbers, and underscores, with a length not exceeding 18.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Create a device name, with a length of less than 24, which can include chinese, numbers, english letters, and underscores.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Device type, field for on-site device (controlled device), remote for remote device (control device), default is field if not specified.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Device authentication password, consisting of uppercase and lowercase english letters and digits, must be 16 characters.
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_
