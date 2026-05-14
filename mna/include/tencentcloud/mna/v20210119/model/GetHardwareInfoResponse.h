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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetHardwareInfo response structure.
                */
                class GetHardwareInfoResponse : public AbstractModel
                {
                public:
                    GetHardwareInfoResponse();
                    ~GetHardwareInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Authorization validity period of license 
0: Monthly authorization 
1: Permanent license 
-Unknown
                     * @return LicensePayMode Authorization validity period of license 
0: Monthly authorization 
1: Permanent license 
-Unknown
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 判断参数 LicensePayMode 是否已赋值
                     * @return LicensePayMode 是否已赋值
                     * 
                     */
                    bool LicensePayModeHasBeenSet() const;

                    /**
                     * 获取Payer 0: Customer payment 1: Manufacturer payment
                     * @return Payer Payer 0: Customer payment 1: Manufacturer payment
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取Hardware Serial Number
                     * @return SN Hardware Serial Number
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取Vendor name
                     * @return Vendor Vendor name
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                private:

                    /**
                     * Authorization validity period of license 
0: Monthly authorization 
1: Permanent license 
-Unknown
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * Payer 0: Customer payment 1: Manufacturer payment
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * Hardware Serial Number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * Vendor name
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_
