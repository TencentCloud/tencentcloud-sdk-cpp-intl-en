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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ServerlessZoneStockInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * serverless specification.
                */
                class ServerlessSpec : public AbstractModel
                {
                public:
                    ServerlessSpec();
                    ~ServerlessSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the minimum value of the cpu.
                     * @return MinCpu Specifies the minimum value of the cpu.
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置Specifies the minimum value of the cpu.
                     * @param _minCpu Specifies the minimum value of the cpu.
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取Maximum value of cpu.
                     * @return MaxCpu Maximum value of cpu.
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置Maximum value of cpu.
                     * @param _maxCpu Maximum value of cpu.
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取Maximum storage space.
                     * @return MaxStorageSize Maximum storage space.
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum storage space.
                     * @param _maxStorageSize Maximum storage space.
                     * 
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is the default specification.
                     * @return IsDefault Specifies whether it is the default specification.
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Specifies whether it is the default specification.
                     * @param _isDefault Specifies whether it is the default specification.
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether there is inventory.
                     * @return HasStock Whether there is inventory.
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置Whether there is inventory.
                     * @param _hasStock Whether there is inventory.
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                    /**
                     * 获取Inventory quantity.
                     * @return StockCount Inventory quantity.
                     * 
                     */
                    int64_t GetStockCount() const;

                    /**
                     * 设置Inventory quantity.
                     * @param _stockCount Inventory quantity.
                     * 
                     */
                    void SetStockCount(const int64_t& _stockCount);

                    /**
                     * 判断参数 StockCount 是否已赋值
                     * @return StockCount 是否已赋值
                     * 
                     */
                    bool StockCountHasBeenSet() const;

                    /**
                     * 获取Availability zone inventory information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneStockInfos Availability zone inventory information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerlessZoneStockInfo> GetZoneStockInfos() const;

                    /**
                     * 设置Availability zone inventory information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneStockInfos Availability zone inventory information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneStockInfos(const std::vector<ServerlessZoneStockInfo>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     * 
                     */
                    bool ZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * Specifies the minimum value of the cpu.
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * Maximum value of cpu.
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Maximum storage space.
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Specifies whether it is the default specification.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether there is inventory.
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * Inventory quantity.
                     */
                    int64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * Availability zone inventory information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerlessZoneStockInfo> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_
