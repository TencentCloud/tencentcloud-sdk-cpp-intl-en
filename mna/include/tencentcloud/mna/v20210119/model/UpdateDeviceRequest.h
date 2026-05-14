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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/UpdateNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateDevice request structure.
                */
                class UpdateDeviceRequest : public AbstractModel
                {
                public:
                    UpdateDeviceRequest();
                    ~UpdateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
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
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
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
                     * 获取device Remarks
                     * @return Remark device Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置device Remarks
                     * @param _remark device Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Update device network info
                     * @return UpdateNetInfo Update device network info
                     * 
                     */
                    std::vector<UpdateNetInfo> GetUpdateNetInfo() const;

                    /**
                     * 设置Update device network info
                     * @param _updateNetInfo Update device network info
                     * 
                     */
                    void SetUpdateNetInfo(const std::vector<UpdateNetInfo>& _updateNetInfo);

                    /**
                     * 判断参数 UpdateNetInfo 是否已赋值
                     * @return UpdateNetInfo 是否已赋值
                     * 
                     */
                    bool UpdateNetInfoHasBeenSet() const;

                    /**
                     * 获取No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * @return FlowTrunc No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * @param _flowTrunc No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * 
                     */
                    void SetFlowTrunc(const int64_t& _flowTrunc);

                    /**
                     * 判断参数 FlowTrunc 是否已赋值
                     * @return FlowTrunc 是否已赋值
                     * 
                     */
                    bool FlowTruncHasBeenSet() const;

                private:

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * device Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Update device network info
                     */
                    std::vector<UpdateNetInfo> m_updateNetInfo;
                    bool m_updateNetInfoHasBeenSet;

                    /**
                     * No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_
