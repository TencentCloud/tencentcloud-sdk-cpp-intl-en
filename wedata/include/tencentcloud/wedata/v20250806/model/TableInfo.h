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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TechnicalMetadata.h>
#include <tencentcloud/wedata/v20250806/model/BusinessMetadata.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Database information
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data table GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Guid Data table GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置Data table GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _guid Data table GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取Data table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Data table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Data table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Table description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Table description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Table description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Table description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseName Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseName Database name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Schema name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchemaName Schema name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schemaName Schema name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Table type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableType Table type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableType Table type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Technical metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TechnicalMetadata Technical metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TechnicalMetadata GetTechnicalMetadata() const;

                    /**
                     * 设置Technical metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _technicalMetadata Technical metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTechnicalMetadata(const TechnicalMetadata& _technicalMetadata);

                    /**
                     * 判断参数 TechnicalMetadata 是否已赋值
                     * @return TechnicalMetadata 是否已赋值
                     * 
                     */
                    bool TechnicalMetadataHasBeenSet() const;

                    /**
                     * 获取Business metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessMetadata Business metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BusinessMetadata GetBusinessMetadata() const;

                    /**
                     * 设置Business metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessMetadata Business metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessMetadata(const BusinessMetadata& _businessMetadata);

                    /**
                     * 判断参数 BusinessMetadata 是否已赋值
                     * @return BusinessMetadata 是否已赋值
                     * 
                     */
                    bool BusinessMetadataHasBeenSet() const;

                    /**
                     * 获取Data catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CatalogName Data catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Data catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalogName Data catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceType Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceType Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * Data table GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * Data table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Table description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Schema name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Table type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Technical metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TechnicalMetadata m_technicalMetadata;
                    bool m_technicalMetadataHasBeenSet;

                    /**
                     * Business metadata of the table.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BusinessMetadata m_businessMetadata;
                    bool m_businessMetadataHasBeenSet;

                    /**
                     * Data catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_
