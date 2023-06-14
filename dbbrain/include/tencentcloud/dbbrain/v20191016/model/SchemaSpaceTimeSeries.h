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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCHEMASPACETIMESERIES_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCHEMASPACETIMESERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/MonitorMetricSeriesData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Time series of database space data
                */
                class SchemaSpaceTimeSeries : public AbstractModel
                {
                public:
                    SchemaSpaceTimeSeries();
                    ~SchemaSpaceTimeSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return TableSchema Database name
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置Database name
                     * @param _tableSchema Database name
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
                     * 获取Monitoring metric data in a unit of time interval.
                     * @return SeriesData Monitoring metric data in a unit of time interval.
                     * 
                     */
                    MonitorMetricSeriesData GetSeriesData() const;

                    /**
                     * 设置Monitoring metric data in a unit of time interval.
                     * @param _seriesData Monitoring metric data in a unit of time interval.
                     * 
                     */
                    void SetSeriesData(const MonitorMetricSeriesData& _seriesData);

                    /**
                     * 判断参数 SeriesData 是否已赋值
                     * @return SeriesData 是否已赋值
                     * 
                     */
                    bool SeriesDataHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * Monitoring metric data in a unit of time interval.
                     */
                    MonitorMetricSeriesData m_seriesData;
                    bool m_seriesDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCHEMASPACETIMESERIES_H_
