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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Device payment mode info
                */
                class DevicePayModeInfo : public AbstractModel
                {
                public:
                    DevicePayModeInfo();
                    ~DevicePayModeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取device ID
                     * @return DeviceId device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置device ID
                     * @param _deviceId device ID
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
                     * 获取Payment mode.
Prepaid Traffic Package
0: Pay-as-you-go by traffic
                     * @return PayMode Payment mode.
Prepaid Traffic Package
0: Pay-as-you-go by traffic
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode.
Prepaid Traffic Package
0: Pay-as-you-go by traffic
                     * @param _payMode Payment mode.
Prepaid Traffic Package
0: Pay-as-you-go by traffic
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Payment mode description.
                     * @return PayModeDesc Payment mode description.
                     * 
                     */
                    std::string GetPayModeDesc() const;

                    /**
                     * 设置Payment mode description.
                     * @param _payModeDesc Payment mode description.
                     * 
                     */
                    void SetPayModeDesc(const std::string& _payModeDesc);

                    /**
                     * 判断参数 PayModeDesc 是否已赋值
                     * @return PayModeDesc 是否已赋值
                     * 
                     */
                    bool PayModeDescHasBeenSet() const;

                    /**
                     * 获取Traffic package ID. Only available when the payment mode is package type.
                     * @return ResourceId Traffic package ID. Only available when the payment mode is package type.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Traffic package ID. Only available when the payment mode is package type.
                     * @param _resourceId Traffic package ID. Only available when the payment mode is package type.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Payment mode.
Prepaid Traffic Package
0: Pay-as-you-go by traffic
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Payment mode description.
                     */
                    std::string m_payModeDesc;
                    bool m_payModeDescHasBeenSet;

                    /**
                     * Traffic package ID. Only available when the payment mode is package type.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEPAYMODEINFO_H_
