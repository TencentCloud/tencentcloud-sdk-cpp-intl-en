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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ReleaseAddresses request structure.
                */
                class ReleaseAddressesRequest : public AbstractModel
                {
                public:
                    ReleaseAddressesRequest();
                    ~ReleaseAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param _ecmRegion ECM region
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取List of unique IDs of EIPs.
                     * @return AddressIds List of unique IDs of EIPs.
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置List of unique IDs of EIPs.
                     * @param _addressIds List of unique IDs of EIPs.
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                private:

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * List of unique IDs of EIPs.
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEADDRESSESREQUEST_H_
