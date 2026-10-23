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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SaleZone.h>
#include <tencentcloud/cynosdb/v20190107/model/Module.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Sales region information
                */
                class SaleRegion : public AbstractModel
                {
                public:
                    SaleRegion();
                    ~SaleRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取English name of the region
                     * @return Region English name of the region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置English name of the region
                     * @param _region English name of the region
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
                     * 获取Region numeric ID.
                     * @return RegionId Region numeric ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region numeric ID.
                     * @param _regionId Region numeric ID.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region Name in Chinese
                     * @return RegionZh Region Name in Chinese
                     * 
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置Region Name in Chinese
                     * @param _regionZh Region Name in Chinese
                     * 
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     * 
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取List of available saleable zones
                     * @return ZoneSet List of available saleable zones
                     * 
                     */
                    std::vector<SaleZone> GetZoneSet() const;

                    /**
                     * 设置List of available saleable zones
                     * @param _zoneSet List of available saleable zones
                     * 
                     */
                    void SetZoneSet(const std::vector<SaleZone>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                    /**
                     * 获取Engine type.
                     * @return DbType Engine type.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Engine type.
                     * @param _dbType Engine type.
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Region module support status
                     * @return Modules Region module support status
                     * 
                     */
                    std::vector<Module> GetModules() const;

                    /**
                     * 设置Region module support status
                     * @param _modules Region module support status
                     * 
                     */
                    void SetModules(const std::vector<Module>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                private:

                    /**
                     * English name of the region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region numeric ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region Name in Chinese
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * List of available saleable zones
                     */
                    std::vector<SaleZone> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                    /**
                     * Engine type.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Region module support status
                     */
                    std::vector<Module> m_modules;
                    bool m_modulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_
