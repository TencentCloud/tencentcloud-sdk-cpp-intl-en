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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_

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
                * DescribeDeviceInfo response structure.
                */
                class DescribeDeviceInfoResponse : public AbstractModel
                {
                public:
                    DescribeDeviceInfoResponse();
                    ~DescribeDeviceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Device type: "field" specifies on-site devices (controlled party), and "remote" specifies remote devices (controlling party).
                     * @return DeviceType Device type: "field" specifies on-site devices (controlled party), and "remote" specifies remote devices (controlling party).
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Device status: offline means offline, ready means online and ready, connected means in session.
                     * @return DeviceStatus Device status: offline means offline, ready means online and ready, connected means in session.
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取Last updated time of device status.
                     * @return LastReportTime Last updated time of device status.
                     * 
                     */
                    std::string GetLastReportTime() const;

                    /**
                     * 判断参数 LastReportTime 是否已赋值
                     * @return LastReportTime 是否已赋值
                     * 
                     */
                    bool LastReportTimeHasBeenSet() const;

                    /**
                     * 获取Modification time of device information.
                     * @return ModifyTime Modification time of device information.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Device type: "field" specifies on-site devices (controlled party), and "remote" specifies remote devices (controlling party).
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Device status: offline means offline, ready means online and ready, connected means in session.
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * Last updated time of device status.
                     */
                    std::string m_lastReportTime;
                    bool m_lastReportTimeHasBeenSet;

                    /**
                     * Modification time of device information.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_
