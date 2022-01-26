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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEDEVICEREQUEST_H_

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
                * DeleteDevice request structure.
                */
                class DeleteDeviceRequest : public AbstractModel
                {
                public:
                    DeleteDeviceRequest();
                    ~DeleteDeviceRequest() = default;
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
                     * 获取Name of the device to delete
                     * @return DeviceName Name of the device to delete
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Name of the device to delete
                     * @param DeviceName Name of the device to delete
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Skey, which is required to delete a LoRa device or LoRa gateway device
                     * @return Skey Skey, which is required to delete a LoRa device or LoRa gateway device
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置Skey, which is required to delete a LoRa device or LoRa gateway device
                     * @param Skey Skey, which is required to delete a LoRa device or LoRa gateway device
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * ID of the product to which the device belongs
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Name of the device to delete
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Skey, which is required to delete a LoRa device or LoRa gateway device
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEDEVICEREQUEST_H_
