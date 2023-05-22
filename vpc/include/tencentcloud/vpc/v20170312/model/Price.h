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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Price
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
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置Instance price.
                     * @param InstancePrice Instance price.
                     */
                    void SetInstancePrice(const ItemPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Bandwidth price
                     * @return BandwidthPrice Bandwidth price
                     */
                    ItemPrice GetBandwidthPrice() const;

                    /**
                     * 设置Bandwidth price
                     * @param BandwidthPrice Bandwidth price
                     */
                    void SetBandwidthPrice(const ItemPrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     */
                    bool BandwidthPriceHasBeenSet() const;

                private:

                    /**
                     * Instance price.
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Bandwidth price
                     */
                    ItemPrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRICE_H_
