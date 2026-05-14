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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_

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
                * Create Hardware input parameters
                */
                class Hardware : public AbstractModel
                {
                public:
                    Hardware();
                    ~Hardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hardware Serial Number
                     * @return SN Hardware Serial Number
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置Hardware Serial Number
                     * @param _sN Hardware Serial Number
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取license billing mode:
1. Tenant payment
2: Manufacturer monthly payment
3: Manufacturer permanent license
                     * @return LicenseChargingMode license billing mode:
1. Tenant payment
2: Manufacturer monthly payment
3: Manufacturer permanent license
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置license billing mode:
1. Tenant payment
2: Manufacturer monthly payment
3: Manufacturer permanent license
                     * @param _licenseChargingMode license billing mode:
1. Tenant payment
2: Manufacturer monthly payment
3: Manufacturer permanent license
                     * 
                     */
                    void SetLicenseChargingMode(const int64_t& _licenseChargingMode);

                    /**
                     * 判断参数 LicenseChargingMode 是否已赋值
                     * @return LicenseChargingMode 是否已赋值
                     * 
                     */
                    bool LicenseChargingModeHasBeenSet() const;

                    /**
                     * 获取Device description
                     * @return Description Device description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Device description
                     * @param _description Device description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Hardware ID. No need to pass as an input parameter.
                     * @return HardwareId Hardware ID. No need to pass as an input parameter.
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置Hardware ID. No need to pass as an input parameter.
                     * @param _hardwareId Hardware ID. No need to pass as an input parameter.
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

                private:

                    /**
                     * Hardware Serial Number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * license billing mode:
1. Tenant payment
2: Manufacturer monthly payment
3: Manufacturer permanent license
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * Device description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Hardware ID. No need to pass as an input parameter.
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_
