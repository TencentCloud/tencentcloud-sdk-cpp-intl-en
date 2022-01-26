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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UpdateDevicesEnableState request structure.
                */
                class UpdateDevicesEnableStateRequest : public AbstractModel
                {
                public:
                    UpdateDevicesEnableStateRequest();
                    ~UpdateDevicesEnableStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the product to which the device belongs
                     * @return ProductId ID of the product to which the device belongs
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置ID of the product to which the device belongs
                     * @param ProductId ID of the product to which the device belongs
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Device names
                     * @return DeviceNames Device names
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置Device names
                     * @param DeviceNames Device names
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取New status of the devices. `0`: disabled; `1`: enabled
                     * @return Status New status of the devices. `0`: disabled; `1`: enabled
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置New status of the devices. `0`: disabled; `1`: enabled
                     * @param Status New status of the devices. `0`: disabled; `1`: enabled
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ID of the product to which the device belongs
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Device names
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * New status of the devices. `0`: disabled; `1`: enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
