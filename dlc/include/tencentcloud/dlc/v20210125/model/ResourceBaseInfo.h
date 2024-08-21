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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEBASEINFO_H_

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
                * Resource basic information
                */
                class ResourceBaseInfo : public AbstractModel
                {
                public:
                    ResourceBaseInfo();
                    ~ResourceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Schema Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schema Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

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

                    /**
                     * 获取View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return View View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _view View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Function name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Function Function name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置Function name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _function Function name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                private:

                    /**
                     * Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Schema name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * View name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Function name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEBASEINFO_H_
