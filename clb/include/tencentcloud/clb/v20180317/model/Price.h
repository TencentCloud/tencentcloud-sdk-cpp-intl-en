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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Price of CLB instances.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InstancePrice Instance price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置Instance price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _instancePrice Instance price.
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return BandwidthPrice Network price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    ItemPrice GetBandwidthPrice() const;

                    /**
                     * 设置Network price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _bandwidthPrice Network price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthPrice(const ItemPrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                    /**
                     * 获取LCU price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LcuPrice LCU price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    ItemPrice GetLcuPrice() const;

                    /**
                     * 设置LCU price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _lcuPrice LCU price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLcuPrice(const ItemPrice& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * Instance price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Network price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    ItemPrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                    /**
                     * LCU price.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    ItemPrice m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_
