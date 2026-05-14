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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWARERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/VendorHardware.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetVendorHardware response structure.
                */
                class GetVendorHardwareResponse : public AbstractModel
                {
                public:
                    GetVendorHardwareResponse();
                    ~GetVendorHardwareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of Hardware Information
                     * @return VendorHardware List of Hardware Information
                     * 
                     */
                    std::vector<VendorHardware> GetVendorHardware() const;

                    /**
                     * 判断参数 VendorHardware 是否已赋值
                     * @return VendorHardware 是否已赋值
                     * 
                     */
                    bool VendorHardwareHasBeenSet() const;

                    /**
                     * 获取Total number of devices
                     * @return Length Total number of devices
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Total pages
                     * @return TotalPage Total pages
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * List of Hardware Information
                     */
                    std::vector<VendorHardware> m_vendorHardware;
                    bool m_vendorHardwareHasBeenSet;

                    /**
                     * Total number of devices
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Total pages
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWARERESPONSE_H_
