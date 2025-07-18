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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InternetPriceDetail.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Public Network Inquiry Output Parameters
                */
                class InternetPrice : public AbstractModel
                {
                public:
                    InternetPrice();
                    ~InternetPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detailed parameters of Public IP inquiry.
                     * @return AddressPrice Detailed parameters of Public IP inquiry.
                     * 
                     */
                    InternetPriceDetail GetAddressPrice() const;

                    /**
                     * 设置Detailed parameters of Public IP inquiry.
                     * @param _addressPrice Detailed parameters of Public IP inquiry.
                     * 
                     */
                    void SetAddressPrice(const InternetPriceDetail& _addressPrice);

                    /**
                     * 判断参数 AddressPrice 是否已赋值
                     * @return AddressPrice 是否已赋值
                     * 
                     */
                    bool AddressPriceHasBeenSet() const;

                private:

                    /**
                     * Detailed parameters of Public IP inquiry.
                     */
                    InternetPriceDetail m_addressPrice;
                    bool m_addressPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_
