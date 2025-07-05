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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_

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
                * Table Metadata Information
                */
                class ColumnBasicInfo : public AbstractModel
                {
                public:
                    ColumnBasicInfo();
                    ~ColumnBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table's Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table's Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table's Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table's Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Data Source Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceName Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceName Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnName Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnName Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取Data Type, such as string/int etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataType Data Type, such as string/int etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置Data Type, such as string/int etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataType Data Type, such as string/int etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取Field Type, such as varchar(32)/int(10) etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnType Field Type, such as varchar(32)/int(10) etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置Field Type, such as varchar(32)/int(10) etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnType Field Type, such as varchar(32)/int(10) etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                    /**
                     * 获取Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnDefault Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnDefault() const;

                    /**
                     * 设置Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnDefault Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnDefault(const std::string& _columnDefault);

                    /**
                     * 判断参数 ColumnDefault 是否已赋值
                     * @return ColumnDefault 是否已赋值
                     * 
                     */
                    bool ColumnDefaultHasBeenSet() const;

                    /**
                     * 获取Index Type, such as PRI/MUL/PARTITION etc., For normal fields, this value is an empty string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnKey Index Type, such as PRI/MUL/PARTITION etc., For normal fields, this value is an empty string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnKey() const;

                    /**
                     * 设置Index Type, such as PRI/MUL/PARTITION etc., For normal fields, this value is an empty string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnKey Index Type, such as PRI/MUL/PARTITION etc., For normal fields, this value is an empty string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnKey(const std::string& _columnKey);

                    /**
                     * 判断参数 ColumnKey 是否已赋值
                     * @return ColumnKey 是否已赋值
                     * 
                     */
                    bool ColumnKeyHasBeenSet() const;

                    /**
                     * 获取Field Order Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnPosition Field Order Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetColumnPosition() const;

                    /**
                     * 设置Field Order Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnPosition Field Order Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnPosition(const int64_t& _columnPosition);

                    /**
                     * 判断参数 ColumnPosition 是否已赋值
                     * @return ColumnPosition 是否已赋值
                     * 
                     */
                    bool ColumnPositionHasBeenSet() const;

                    /**
                     * 获取Field Comment
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnComment Field Comment
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnComment() const;

                    /**
                     * 设置Field Comment
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnComment Field Comment
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnComment(const std::string& _columnComment);

                    /**
                     * 判断参数 ColumnComment 是否已赋值
                     * @return ColumnComment 是否已赋值
                     * 
                     */
                    bool ColumnCommentHasBeenSet() const;

                    /**
                     * 获取Data TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StoreType Data TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStoreType() const;

                    /**
                     * 设置Data TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _storeType Data TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStoreType(const std::string& _storeType);

                    /**
                     * 判断参数 StoreType 是否已赋值
                     * @return StoreType 是否已赋值
                     * 
                     */
                    bool StoreTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Project Name in Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectDisplayName Project Name in Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置Project Name in Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectDisplayName Project Name in Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Scale Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scale Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                private:

                    /**
                     * Table's Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Data Source Globally Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * Data Type, such as string/int etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * Field Type, such as varchar(32)/int(10) etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnDefault;
                    bool m_columnDefaultHasBeenSet;

                    /**
                     * Index Type, such as PRI/MUL/PARTITION etc., For normal fields, this value is an empty string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnKey;
                    bool m_columnKeyHasBeenSet;

                    /**
                     * Field Order Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_columnPosition;
                    bool m_columnPositionHasBeenSet;

                    /**
                     * Field Comment
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnComment;
                    bool m_columnCommentHasBeenSet;

                    /**
                     * Data TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storeType;
                    bool m_storeTypeHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project Name in Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_
