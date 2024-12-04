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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareColumnItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Table configuration for data consistency check
                */
                class CompareTableItem : public AbstractModel
                {
                public:
                    CompareTableItem();
                    ~CompareTableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取In column mode, all refers to all data, while partial refers to part of the data (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColumnMode In column mode, all refers to all data, while partial refers to part of the data (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColumnMode() const;

                    /**
                     * 设置In column mode, all refers to all data, while partial refers to part of the data (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columnMode In column mode, all refers to all data, while partial refers to part of the data (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumnMode(const std::string& _columnMode);

                    /**
                     * 判断参数 ColumnMode 是否已赋值
                     * @return ColumnMode 是否已赋值
                     * 
                     */
                    bool ColumnModeHasBeenSet() const;

                    /**
                     * 获取This field is required when ColumnMode is set to partial (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns This field is required when ColumnMode is set to partial (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CompareColumnItem> GetColumns() const;

                    /**
                     * 设置This field is required when ColumnMode is set to partial (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columns This field is required when ColumnMode is set to partial (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumns(const std::vector<CompareColumnItem>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * In column mode, all refers to all data, while partial refers to part of the data (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_columnMode;
                    bool m_columnModeHasBeenSet;

                    /**
                     * This field is required when ColumnMode is set to partial (this parameter is only valid for data sync tasks).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CompareColumnItem> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_
