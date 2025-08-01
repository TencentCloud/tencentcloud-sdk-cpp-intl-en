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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACEDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Database tablespace statistics.
                */
                class TableSpaceData : public AbstractModel
                {
                public:
                    TableSpaceData();
                    ~TableSpaceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name.
                     * @return TableName Table name.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name.
                     * @param _tableName Table name.
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
                     * 获取Database name.
                     * @return TableSchema Database name.
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置Database name.
                     * @param _tableSchema Database name.
                     * 
                     */
                    void SetTableSchema(const std::string& _tableSchema);

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                    /**
                     * 获取Database table storage engine.
                     * @return Engine Database table storage engine.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Database table storage engine.
                     * @param _engine Database table storage engine.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Data space in MB.
                     * @return DataLength Data space in MB.
                     * 
                     */
                    double GetDataLength() const;

                    /**
                     * 设置Data space in MB.
                     * @param _dataLength Data space in MB.
                     * 
                     */
                    void SetDataLength(const double& _dataLength);

                    /**
                     * 判断参数 DataLength 是否已赋值
                     * @return DataLength 是否已赋值
                     * 
                     */
                    bool DataLengthHasBeenSet() const;

                    /**
                     * 获取Index space in MB.
                     * @return IndexLength Index space in MB.
                     * 
                     */
                    double GetIndexLength() const;

                    /**
                     * 设置Index space in MB.
                     * @param _indexLength Index space in MB.
                     * 
                     */
                    void SetIndexLength(const double& _indexLength);

                    /**
                     * 判断参数 IndexLength 是否已赋值
                     * @return IndexLength 是否已赋值
                     * 
                     */
                    bool IndexLengthHasBeenSet() const;

                    /**
                     * 获取Fragmented space in MB.
                     * @return DataFree Fragmented space in MB.
                     * 
                     */
                    double GetDataFree() const;

                    /**
                     * 设置Fragmented space in MB.
                     * @param _dataFree Fragmented space in MB.
                     * 
                     */
                    void SetDataFree(const double& _dataFree);

                    /**
                     * 判断参数 DataFree 是否已赋值
                     * @return DataFree 是否已赋值
                     * 
                     */
                    bool DataFreeHasBeenSet() const;

                    /**
                     * 获取Total space usage in MB.
                     * @return TotalLength Total space usage in MB.
                     * 
                     */
                    double GetTotalLength() const;

                    /**
                     * 设置Total space usage in MB.
                     * @param _totalLength Total space usage in MB.
                     * 
                     */
                    void SetTotalLength(const double& _totalLength);

                    /**
                     * 判断参数 TotalLength 是否已赋值
                     * @return TotalLength 是否已赋值
                     * 
                     */
                    bool TotalLengthHasBeenSet() const;

                    /**
                     * 获取Fragmentation rate in %.
                     * @return FragRatio Fragmentation rate in %.
                     * 
                     */
                    double GetFragRatio() const;

                    /**
                     * 设置Fragmentation rate in %.
                     * @param _fragRatio Fragmentation rate in %.
                     * 
                     */
                    void SetFragRatio(const double& _fragRatio);

                    /**
                     * 判断参数 FragRatio 是否已赋值
                     * @return FragRatio 是否已赋值
                     * 
                     */
                    bool FragRatioHasBeenSet() const;

                    /**
                     * 获取Number of rows.
                     * @return TableRows Number of rows.
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置Number of rows.
                     * @param _tableRows Number of rows.
                     * 
                     */
                    void SetTableRows(const int64_t& _tableRows);

                    /**
                     * 判断参数 TableRows 是否已赋值
                     * @return TableRows 是否已赋值
                     * 
                     */
                    bool TableRowsHasBeenSet() const;

                    /**
                     * 获取Size in MB of the physical file exclusive to a table.
                     * @return PhysicalFileSize Size in MB of the physical file exclusive to a table.
                     * 
                     */
                    double GetPhysicalFileSize() const;

                    /**
                     * 设置Size in MB of the physical file exclusive to a table.
                     * @param _physicalFileSize Size in MB of the physical file exclusive to a table.
                     * 
                     */
                    void SetPhysicalFileSize(const double& _physicalFileSize);

                    /**
                     * 判断参数 PhysicalFileSize 是否已赋值
                     * @return PhysicalFileSize 是否已赋值
                     * 
                     */
                    bool PhysicalFileSizeHasBeenSet() const;

                private:

                    /**
                     * Table name.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * Database table storage engine.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Data space in MB.
                     */
                    double m_dataLength;
                    bool m_dataLengthHasBeenSet;

                    /**
                     * Index space in MB.
                     */
                    double m_indexLength;
                    bool m_indexLengthHasBeenSet;

                    /**
                     * Fragmented space in MB.
                     */
                    double m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * Total space usage in MB.
                     */
                    double m_totalLength;
                    bool m_totalLengthHasBeenSet;

                    /**
                     * Fragmentation rate in %.
                     */
                    double m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * Number of rows.
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                    /**
                     * Size in MB of the physical file exclusive to a table.
                     */
                    double m_physicalFileSize;
                    bool m_physicalFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACEDATA_H_
