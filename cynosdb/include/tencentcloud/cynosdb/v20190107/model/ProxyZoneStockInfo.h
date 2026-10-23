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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_

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
                * Database proxy specification
                */
                class ProxyZoneStockInfo : public AbstractModel
                {
                public:
                    ProxyZoneStockInfo();
                    ~ProxyZoneStockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>CPU inventory</p><p>This field is not a judgment standard for whether there are resources for delivery. For resources, refer to CheckProxyStockInfos</p>
                     * @return CpuStock <p>CPU inventory</p><p>This field is not a judgment standard for whether there are resources for delivery. For resources, refer to CheckProxyStockInfos</p>
                     * 
                     */
                    int64_t GetCpuStock() const;

                    /**
                     * 设置<p>CPU inventory</p><p>This field is not a judgment standard for whether there are resources for delivery. For resources, refer to CheckProxyStockInfos</p>
                     * @param _cpuStock <p>CPU inventory</p><p>This field is not a judgment standard for whether there are resources for delivery. For resources, refer to CheckProxyStockInfos</p>
                     * 
                     */
                    void SetCpuStock(const int64_t& _cpuStock);

                    /**
                     * 判断参数 CpuStock 是否已赋值
                     * @return CpuStock 是否已赋值
                     * 
                     */
                    bool CpuStockHasBeenSet() const;

                    /**
                     * 获取<p>Memory inventory</p><p>This field is not used as a judgment standard for whether there are resources for delivery. For resources, see CheckProxyStockInfos</p>
                     * @return MemStock <p>Memory inventory</p><p>This field is not used as a judgment standard for whether there are resources for delivery. For resources, see CheckProxyStockInfos</p>
                     * 
                     */
                    int64_t GetMemStock() const;

                    /**
                     * 设置<p>Memory inventory</p><p>This field is not used as a judgment standard for whether there are resources for delivery. For resources, see CheckProxyStockInfos</p>
                     * @param _memStock <p>Memory inventory</p><p>This field is not used as a judgment standard for whether there are resources for delivery. For resources, see CheckProxyStockInfos</p>
                     * 
                     */
                    void SetMemStock(const int64_t& _memStock);

                    /**
                     * 判断参数 MemStock 是否已赋值
                     * @return MemStock 是否已赋值
                     * 
                     */
                    bool MemStockHasBeenSet() const;

                private:

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>CPU inventory</p><p>This field is not a judgment standard for whether there are resources for delivery. For resources, refer to CheckProxyStockInfos</p>
                     */
                    int64_t m_cpuStock;
                    bool m_cpuStockHasBeenSet;

                    /**
                     * <p>Memory inventory</p><p>This field is not used as a judgment standard for whether there are resources for delivery. For resources, see CheckProxyStockInfos</p>
                     */
                    int64_t m_memStock;
                    bool m_memStockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_
