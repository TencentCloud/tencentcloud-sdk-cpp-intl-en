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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>
#include <tencentcloud/dts/v20211206/model/TableFilter.h>
#include <tencentcloud/dts/v20211206/model/ViewFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DDL/DML allowlist at the database/table/view level
                */
                class DBOpFilter : public AbstractModel
                {
                public:
                    DBOpFilter();
                    ~DBOpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name for rule effectiveness
                     * @return DbName Database name for rule effectiveness
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name for rule effectiveness
                     * @param _dbName Database name for rule effectiveness
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Database-level DDL/DML Filter Rule
                     * @return OpFilter Database-level DDL/DML Filter Rule
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置Database-level DDL/DML Filter Rule
                     * @param _opFilter Database-level DDL/DML Filter Rule
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                    /**
                     * 获取Table-level DDL/DML filtering information
                     * @return Tables Table-level DDL/DML filtering information
                     * 
                     */
                    std::vector<TableFilter> GetTables() const;

                    /**
                     * 设置Table-level DDL/DML filtering information
                     * @param _tables Table-level DDL/DML filtering information
                     * 
                     */
                    void SetTables(const std::vector<TableFilter>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取View-level DDL/DML filtering information
                     * @return Views View-level DDL/DML filtering information
                     * 
                     */
                    std::vector<ViewFilter> GetViews() const;

                    /**
                     * 设置View-level DDL/DML filtering information
                     * @param _views View-level DDL/DML filtering information
                     * 
                     */
                    void SetViews(const std::vector<ViewFilter>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                private:

                    /**
                     * Database name for rule effectiveness
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Database-level DDL/DML Filter Rule
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                    /**
                     * Table-level DDL/DML filtering information
                     */
                    std::vector<TableFilter> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * View-level DDL/DML filtering information
                     */
                    std::vector<ViewFilter> m_views;
                    bool m_viewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBOPFILTER_H_
