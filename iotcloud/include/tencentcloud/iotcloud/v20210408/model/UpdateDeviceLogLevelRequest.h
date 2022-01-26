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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICELOGLEVELREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICELOGLEVELREQUEST_H_

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
                * UpdateDeviceLogLevel request structure.
                */
                class UpdateDeviceLogLevelRequest : public AbstractModel
                {
                public:
                    UpdateDeviceLogLevelRequest();
                    ~UpdateDeviceLogLevelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product ID
                     * @return ProductId Product ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Product ID
                     * @param ProductId Product ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Device name
                     * @return DeviceName Device name
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name
                     * @param DeviceName Device name
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Log level. `0`: disable; `1`: error; `2`: warning; `3`: information; `4`: debugging
                     * @return LogLevel Log level. `0`: disable; `1`: error; `2`: warning; `3`: information; `4`: debugging
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 设置Log level. `0`: disable; `1`: error; `2`: warning; `3`: information; `4`: debugging
                     * @param LogLevel Log level. `0`: disable; `1`: error; `2`: warning; `3`: information; `4`: debugging
                     */
                    void SetLogLevel(const uint64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     */
                    bool LogLevelHasBeenSet() const;

                private:

                    /**
                     * Product ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Device name
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Log level. `0`: disable; `1`: error; `2`: warning; `3`: information; `4`: debugging
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICELOGLEVELREQUEST_H_
