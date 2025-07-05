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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PRICE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Price.
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance price.
                     * @return InstancePrice Instance price.
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置Instance price.
                     * @param _instancePrice Instance price.
                     * 
                     */
                    void SetInstancePrice(const ItemPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Network price.
                     * @return BandwidthPrice Network price.
                     * 
                     */
                    ItemPrice GetBandwidthPrice() const;

                    /**
                     * 设置Network price.
                     * @param _bandwidthPrice Network price.
                     * 
                     */
                    void SetBandwidthPrice(const ItemPrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                private:

                    /**
                     * Instance price.
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Network price.
                     */
                    ItemPrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PRICE_H_
