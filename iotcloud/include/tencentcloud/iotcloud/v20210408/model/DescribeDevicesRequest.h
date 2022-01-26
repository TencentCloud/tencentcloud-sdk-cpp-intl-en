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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_

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
                * DescribeDevices request structure.
                */
                class DescribeDevicesRequest : public AbstractModel
                {
                public:
                    DescribeDevicesRequest();
                    ~DescribeDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the product whose devices are queried
                     * @return ProductId ID of the product whose devices are queried
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置ID of the product whose devices are queried
                     * @param ProductId ID of the product whose devices are queried
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Offset, which starts from 0
                     * @return Offset Offset, which starts from 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which starts from 0
                     * @param Offset Offset, which starts from 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size. Value range: 10-250
                     * @return Limit Page size. Value range: 10-250
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. Value range: 10-250
                     * @param Limit Page size. Value range: 10-250
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Device firmware version. If no value is passed in, devices of all firmware versions are returned. If `None-FirmwareVersion` is passed in, devices without version numbers are returned.
                     * @return FirmwareVersion Device firmware version. If no value is passed in, devices of all firmware versions are returned. If `None-FirmwareVersion` is passed in, devices without version numbers are returned.
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置Device firmware version. If no value is passed in, devices of all firmware versions are returned. If `None-FirmwareVersion` is passed in, devices without version numbers are returned.
                     * @param FirmwareVersion Device firmware version. If no value is passed in, devices of all firmware versions are returned. If `None-FirmwareVersion` is passed in, devices without version numbers are returned.
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取Device name to query
                     * @return DeviceName Device name to query
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name to query
                     * @param DeviceName Device name to query
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Whether to query enabled or disabled devices. `0`: disabled devices; `1`: enabled devices. By default, both enabled and disabled devices are queried.
                     * @return EnableState Whether to query enabled or disabled devices. `0`: disabled devices; `1`: enabled devices. By default, both enabled and disabled devices are queried.
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 设置Whether to query enabled or disabled devices. `0`: disabled devices; `1`: enabled devices. By default, both enabled and disabled devices are queried.
                     * @param EnableState Whether to query enabled or disabled devices. `0`: disabled devices; `1`: enabled devices. By default, both enabled and disabled devices are queried.
                     */
                    void SetEnableState(const uint64_t& _enableState);

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     */
                    bool EnableStateHasBeenSet() const;

                private:

                    /**
                     * ID of the product whose devices are queried
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Offset, which starts from 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. Value range: 10-250
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Device firmware version. If no value is passed in, devices of all firmware versions are returned. If `None-FirmwareVersion` is passed in, devices without version numbers are returned.
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * Device name to query
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Whether to query enabled or disabled devices. `0`: disabled devices; `1`: enabled devices. By default, both enabled and disabled devices are queried.
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_
