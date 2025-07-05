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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * FavorInfo
                */
                class FavorInfo : public AbstractModel
                {
                public:
                    FavorInfo();
                    ~FavorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prioritized items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Priority Prioritized items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Prioritized items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _priority Prioritized items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取DataBase name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataBase DataBase name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataBase() const;

                    /**
                     * 设置DataBase name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataBase DataBase name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataBase(const std::string& _dataBase);

                    /**
                     * 判断参数 DataBase 是否已赋值
                     * @return DataBase 是否已赋值
                     * 
                     */
                    bool DataBaseHasBeenSet() const;

                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Prioritized items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * DataBase name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataBase;
                    bool m_dataBaseHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_
