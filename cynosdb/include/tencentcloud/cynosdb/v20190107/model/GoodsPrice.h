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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSPRICE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/TradePrice.h>
#include <tencentcloud/cynosdb/v20190107/model/GoodsSpec.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Item price.
                */
                class GoodsPrice : public AbstractModel
                {
                public:
                    GoodsPrice();
                    ~GoodsPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the instance price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstancePrice Specifies the instance price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TradePrice GetInstancePrice() const;

                    /**
                     * 设置Specifies the instance price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instancePrice Specifies the instance price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstancePrice(const TradePrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Specifies the storage price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoragePrice Specifies the storage price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TradePrice GetStoragePrice() const;

                    /**
                     * 设置Specifies the storage price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storagePrice Specifies the storage price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStoragePrice(const TradePrice& _storagePrice);

                    /**
                     * 判断参数 StoragePrice 是否已赋值
                     * @return StoragePrice 是否已赋值
                     * 
                     */
                    bool StoragePriceHasBeenSet() const;

                    /**
                     * 获取Specifies the product specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GoodsSpec Specifies the product specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    GoodsSpec GetGoodsSpec() const;

                    /**
                     * 设置Specifies the product specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _goodsSpec Specifies the product specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGoodsSpec(const GoodsSpec& _goodsSpec);

                    /**
                     * 判断参数 GoodsSpec 是否已赋值
                     * @return GoodsSpec 是否已赋值
                     * 
                     */
                    bool GoodsSpecHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance price.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TradePrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Specifies the storage price.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TradePrice m_storagePrice;
                    bool m_storagePriceHasBeenSet;

                    /**
                     * Specifies the product specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GoodsSpec m_goodsSpec;
                    bool m_goodsSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSPRICE_H_
