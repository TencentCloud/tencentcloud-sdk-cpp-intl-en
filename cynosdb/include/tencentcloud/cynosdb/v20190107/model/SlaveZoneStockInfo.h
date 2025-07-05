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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class SlaveZoneStockInfo : public AbstractModel
                {
                public:
                    SlaveZoneStockInfo();
                    ~SlaveZoneStockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Replica AZ.
                     * @return SlaveZone Replica AZ.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Replica AZ.
                     * @param _slaveZone Replica AZ.
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Inventory quantity in spare availability zone.	
                     * @return StockCount Inventory quantity in spare availability zone.	
                     * 
                     */
                    uint64_t GetStockCount() const;

                    /**
                     * 设置Inventory quantity in spare availability zone.	
                     * @param _stockCount Inventory quantity in spare availability zone.	
                     * 
                     */
                    void SetStockCount(const uint64_t& _stockCount);

                    /**
                     * 判断参数 StockCount 是否已赋值
                     * @return StockCount 是否已赋值
                     * 
                     */
                    bool StockCountHasBeenSet() const;

                    /**
                     * 获取Whether there is inventory in the spare availability zone.	
                     * @return HasStock Whether there is inventory in the spare availability zone.	
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置Whether there is inventory in the spare availability zone.	
                     * @param _hasStock Whether there is inventory in the spare availability zone.	
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                private:

                    /**
                     * Replica AZ.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Inventory quantity in spare availability zone.	
                     */
                    uint64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * Whether there is inventory in the spare availability zone.	
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_
