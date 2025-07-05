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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DLCTABLE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DLCTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/TColumn.h>
#include <tencentcloud/dlc/v20210125/model/TPartition.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>
#include <tencentcloud/dlc/v20210125/model/ExternalDataConfiguration.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Query table information object
                */
                class DLCTable : public AbstractModel
                {
                public:
                    DLCTable();
                    ~DLCTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic information of the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableBaseInfo Basic information of the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置Basic information of the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableBaseInfo Basic information of the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     * 
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取Data table column information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns Data table column information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TColumn> GetColumns() const;

                    /**
                     * 设置Data table column information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columns Data table column information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumns(const std::vector<TColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Data table partition information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Data table partition information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TPartition> GetPartitions() const;

                    /**
                     * 设置Data table partition information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitions Data table partition information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitions(const std::vector<TPartition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Data storage path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Data storage path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Data storage path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Data storage path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Data table attribute information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Properties Data table attribute information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置Data table attribute information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _properties Data table attribute information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Data table update information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Data table update information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Data table update information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Data table update information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Database creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Database creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Database creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Database creation time
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
                     * 获取Data format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputFormat Data format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInputFormat() const;

                    /**
                     * 设置Data format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputFormat Data format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputFormat(const std::string& _inputFormat);

                    /**
                     * 判断参数 InputFormat 是否已赋值
                     * @return InputFormat 是否已赋值
                     * 
                     */
                    bool InputFormatHasBeenSet() const;

                    /**
                     * 获取Data storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageSize Data storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Data storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageSize Data storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Number of rows in the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordCount Number of rows in the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置Number of rows in the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordCount Number of rows in the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取Materialized view name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MapMaterializedViewName Materialized view name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMapMaterializedViewName() const;

                    /**
                     * 设置Materialized view name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mapMaterializedViewName Materialized view name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMapMaterializedViewName(const std::string& _mapMaterializedViewName);

                    /**
                     * 判断参数 MapMaterializedViewName 是否已赋值
                     * @return MapMaterializedViewName 是否已赋值
                     * 
                     */
                    bool MapMaterializedViewNameHasBeenSet() const;

                    /**
                     * 获取Visit hot spots
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HeatValue Visit hot spots
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHeatValue() const;

                    /**
                     * 设置Visit hot spots
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _heatValue Visit hot spots
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeatValue(const int64_t& _heatValue);

                    /**
                     * 判断参数 HeatValue 是否已赋值
                     * @return HeatValue 是否已赋值
                     * 
                     */
                    bool HeatValueHasBeenSet() const;

                    /**
                     * 获取External table configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExternalDataConfiguration External table configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExternalDataConfiguration GetExternalDataConfiguration() const;

                    /**
                     * 设置External table configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _externalDataConfiguration External table configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExternalDataConfiguration(const ExternalDataConfiguration& _externalDataConfiguration);

                    /**
                     * 判断参数 ExternalDataConfiguration 是否已赋值
                     * @return ExternalDataConfiguration 是否已赋值
                     * 
                     */
                    bool ExternalDataConfigurationHasBeenSet() const;

                private:

                    /**
                     * Basic information of the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * Data table column information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Data table partition information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Data storage path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Data table attribute information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Data table update information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Database creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Data format
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputFormat;
                    bool m_inputFormatHasBeenSet;

                    /**
                     * Data storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Number of rows in the data table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * Materialized view name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mapMaterializedViewName;
                    bool m_mapMaterializedViewNameHasBeenSet;

                    /**
                     * Visit hot spots
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_heatValue;
                    bool m_heatValueHasBeenSet;

                    /**
                     * External table configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExternalDataConfiguration m_externalDataConfiguration;
                    bool m_externalDataConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DLCTABLE_H_
