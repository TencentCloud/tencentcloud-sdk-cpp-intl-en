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
                     * 获取<p>cpu minimum value</p>
                     * @return MinCpu <p>cpu minimum value</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>cpu minimum value</p>
                     * @param _minCpu <p>cpu minimum value</p>
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
                     * 获取<p>Maximum value of cpu</p>
                     * @return MaxCpu <p>Maximum value of cpu</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>Maximum value of cpu</p>
                     * @param _maxCpu <p>Maximum value of cpu</p>
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
                     * 获取<p>Maximum storage space</p>
                     * @return MaxStorageSize <p>Maximum storage space</p>
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置<p>Maximum storage space</p>
                     * @param _maxStorageSize <p>Maximum storage space</p>
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
                     * 获取<p>Is the default specification</p>
                     * @return IsDefault <p>Is the default specification</p>
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置<p>Is the default specification</p>
                     * @param _isDefault <p>Is the default specification</p>
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
                     * 获取<p>Whether there is inventory</p>
                     * @return HasStock <p>Whether there is inventory</p>
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置<p>Whether there is inventory</p>
                     * @param _hasStock <p>Whether there is inventory</p>
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
                     * 获取<p>Inventory quantity</p>
                     * @return StockCount <p>Inventory quantity</p>
                     * 
                     */
                    int64_t GetStockCount() const;

                    /**
                     * 设置<p>Inventory quantity</p>
                     * @param _stockCount <p>Inventory quantity</p>
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
                     * 获取<p>Availability zone inventory information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneStockInfos <p>Availability zone inventory information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerlessZoneStockInfo> GetZoneStockInfos() const;

                    /**
                     * 设置<p>Availability zone inventory information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneStockInfos <p>Availability zone inventory information</p>
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
                     * <p>cpu minimum value</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>Maximum value of cpu</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>Maximum storage space</p>
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * <p>Is the default specification</p>
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>Whether there is inventory</p>
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * <p>Inventory quantity</p>
                     */
                    int64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * <p>Availability zone inventory information</p>
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
