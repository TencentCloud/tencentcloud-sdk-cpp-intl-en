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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_

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
                * UpdateDeviceStatus request structure.
                */
                class UpdateDeviceStatusRequest : public AbstractModel
                {
                public:
                    UpdateDeviceStatusRequest();
                    ~UpdateDeviceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID (obtain from the ListDevices API for getting device list)
                     * @return DeviceId Device ID (obtain from the ListDevices API for getting device list)
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID (obtain from the ListDevices API for getting device list)
                     * @param _deviceId Device ID (obtain from the ListDevices API for getting device list)
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
                     * 获取Disable enable status code (2: enable, 3: disable)
                     * @return Status Disable enable status code (2: enable, 3: disable)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Disable enable status code (2: enable, 3: disable)
                     * @param _status Disable enable status code (2: enable, 3: disable)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Device ID (obtain from the ListDevices API for getting device list)
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Disable enable status code (2: enable, 3: disable)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_
