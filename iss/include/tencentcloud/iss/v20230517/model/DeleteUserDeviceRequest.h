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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETEUSERDEVICEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETEUSERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteUserDevice request structure.
                */
                class DeleteUserDeviceRequest : public AbstractModel
                {
                public:
                    DeleteUserDeviceRequest();
                    ~DeleteUserDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID (obtain from the ListDevices API for getting the device list)
                     * @return DeviceId Device ID (obtain from the ListDevices API for getting the device list)
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID (obtain from the ListDevices API for getting the device list)
                     * @param _deviceId Device ID (obtain from the ListDevices API for getting the device list)
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
                     * Device ID (obtain from the ListDevices API for getting the device list)
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETEUSERDEVICEREQUEST_H_
