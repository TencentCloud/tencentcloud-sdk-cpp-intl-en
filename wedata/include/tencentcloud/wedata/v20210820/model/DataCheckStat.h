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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Monitoring Results
                */
                class DataCheckStat : public AbstractModel
                {
                public:
                    DataCheckStat();
                    ~DataCheckStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Tables
                     * @return TableTotal Total Tables
                     * 
                     */
                    uint64_t GetTableTotal() const;

                    /**
                     * 设置Total Tables
                     * @param _tableTotal Total Tables
                     * 
                     */
                    void SetTableTotal(const uint64_t& _tableTotal);

                    /**
                     * 判断参数 TableTotal 是否已赋值
                     * @return TableTotal 是否已赋值
                     * 
                     */
                    bool TableTotalHasBeenSet() const;

                    /**
                     * 获取Total Number of Fields
                     * @return ColumnTotal Total Number of Fields
                     * 
                     */
                    uint64_t GetColumnTotal() const;

                    /**
                     * 设置Total Number of Fields
                     * @param _columnTotal Total Number of Fields
                     * 
                     */
                    void SetColumnTotal(const uint64_t& _columnTotal);

                    /**
                     * 判断参数 ColumnTotal 是否已赋值
                     * @return ColumnTotal 是否已赋值
                     * 
                     */
                    bool ColumnTotalHasBeenSet() const;

                    /**
                     * 获取Number of Table Configuration Checks
                     * @return TableConfig Number of Table Configuration Checks
                     * 
                     */
                    uint64_t GetTableConfig() const;

                    /**
                     * 设置Number of Table Configuration Checks
                     * @param _tableConfig Number of Table Configuration Checks
                     * 
                     */
                    void SetTableConfig(const uint64_t& _tableConfig);

                    /**
                     * 判断参数 TableConfig 是否已赋值
                     * @return TableConfig 是否已赋值
                     * 
                     */
                    bool TableConfigHasBeenSet() const;

                    /**
                     * 获取Number of Field Configuration Checks
                     * @return ColumnConfig Number of Field Configuration Checks
                     * 
                     */
                    uint64_t GetColumnConfig() const;

                    /**
                     * 设置Number of Field Configuration Checks
                     * @param _columnConfig Number of Field Configuration Checks
                     * 
                     */
                    void SetColumnConfig(const uint64_t& _columnConfig);

                    /**
                     * 判断参数 ColumnConfig 是否已赋值
                     * @return ColumnConfig 是否已赋值
                     * 
                     */
                    bool ColumnConfigHasBeenSet() const;

                    /**
                     * 获取Actual Number of Table Checks
                     * @return TableExec Actual Number of Table Checks
                     * 
                     */
                    uint64_t GetTableExec() const;

                    /**
                     * 设置Actual Number of Table Checks
                     * @param _tableExec Actual Number of Table Checks
                     * 
                     */
                    void SetTableExec(const uint64_t& _tableExec);

                    /**
                     * 判断参数 TableExec 是否已赋值
                     * @return TableExec 是否已赋值
                     * 
                     */
                    bool TableExecHasBeenSet() const;

                    /**
                     * 获取Actual Number of Field Checks
                     * @return ColumnExec Actual Number of Field Checks
                     * 
                     */
                    uint64_t GetColumnExec() const;

                    /**
                     * 设置Actual Number of Field Checks
                     * @param _columnExec Actual Number of Field Checks
                     * 
                     */
                    void SetColumnExec(const uint64_t& _columnExec);

                    /**
                     * 判断参数 ColumnExec 是否已赋值
                     * @return ColumnExec 是否已赋值
                     * 
                     */
                    bool ColumnExecHasBeenSet() const;

                private:

                    /**
                     * Total Tables
                     */
                    uint64_t m_tableTotal;
                    bool m_tableTotalHasBeenSet;

                    /**
                     * Total Number of Fields
                     */
                    uint64_t m_columnTotal;
                    bool m_columnTotalHasBeenSet;

                    /**
                     * Number of Table Configuration Checks
                     */
                    uint64_t m_tableConfig;
                    bool m_tableConfigHasBeenSet;

                    /**
                     * Number of Field Configuration Checks
                     */
                    uint64_t m_columnConfig;
                    bool m_columnConfigHasBeenSet;

                    /**
                     * Actual Number of Table Checks
                     */
                    uint64_t m_tableExec;
                    bool m_tableExecHasBeenSet;

                    /**
                     * Actual Number of Field Checks
                     */
                    uint64_t m_columnExec;
                    bool m_columnExecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_
