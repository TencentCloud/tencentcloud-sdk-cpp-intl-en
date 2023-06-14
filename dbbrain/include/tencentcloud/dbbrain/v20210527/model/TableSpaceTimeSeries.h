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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACETIMESERIES_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACETIMESERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MonitorFloatMetricSeriesData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Time series of database tablespace data
                */
                class TableSpaceTimeSeries : public AbstractModel
                {
                public:
                    TableSpaceTimeSeries();
                    ~TableSpaceTimeSeries() = default;
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
                     * 获取Space metric value in a unit of time interval
                     * @return SeriesData Space metric value in a unit of time interval
                     * 
                     */
                    MonitorFloatMetricSeriesData GetSeriesData() const;

                    /**
                     * 设置Space metric value in a unit of time interval
                     * @param _seriesData Space metric value in a unit of time interval
                     * 
                     */
                    void SetSeriesData(const MonitorFloatMetricSeriesData& _seriesData);

                    /**
                     * 判断参数 SeriesData 是否已赋值
                     * @return SeriesData 是否已赋值
                     * 
                     */
                    bool SeriesDataHasBeenSet() const;

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
                     * Space metric value in a unit of time interval
                     */
                    MonitorFloatMetricSeriesData m_seriesData;
                    bool m_seriesDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESPACETIMESERIES_H_
