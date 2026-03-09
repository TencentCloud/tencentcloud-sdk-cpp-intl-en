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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageProperty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * LineageProcess lineage generation process.
                */
                class LineageProcess : public AbstractModel
                {
                public:
                    LineageProcess();
                    ~LineageProcess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessId Original unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置Original unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processId Original unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取Task type
Schedule task execution.
    SCHEDULE_TASK,
Integration task.
    INTEGRATION_TASK,
Third-Party reporting.
    THIRD_REPORT,
Data modeling.
    TABLE_MODEL,
Create metrics for the model.
    MODEL_METRIC,
Create a derived metric from atomic metrics.
    METRIC_METRIC,
Data service.
    DATA_SERVICE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessType Task type
Schedule task execution.
    SCHEDULE_TASK,
Integration task.
    INTEGRATION_TASK,
Third-Party reporting.
    THIRD_REPORT,
Data modeling.
    TABLE_MODEL,
Create metrics for the model.
    MODEL_METRIC,
Create a derived metric from atomic metrics.
    METRIC_METRIC,
Data service.
    DATA_SERVICE
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置Task type
Schedule task execution.
    SCHEDULE_TASK,
Integration task.
    INTEGRATION_TASK,
Third-Party reporting.
    THIRD_REPORT,
Data modeling.
    TABLE_MODEL,
Create metrics for the model.
    MODEL_METRIC,
Create a derived metric from atomic metrics.
    METRIC_METRIC,
Data service.
    DATA_SERVICE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processType Task type
Schedule task execution.
    SCHEDULE_TASK,
Integration task.
    INTEGRATION_TASK,
Third-Party reporting.
    THIRD_REPORT,
Data modeling.
    TABLE_MODEL,
Create metrics for the model.
    MODEL_METRIC,
Create a derived metric from atomic metrics.
    METRIC_METRIC,
Data service.
    DATA_SERVICE
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取WEDATA, THIRD;
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Platform WEDATA, THIRD;
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置WEDATA, THIRD;
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _platform WEDATA, THIRD;
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Task Subtype
 SQL_TASK,
Integrate real-time tasks lineage.
    INTEGRATED_STREAM,
Integration of offline tasks lineage.
    INTEGRATED_OFFLINE;
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessSubType Task Subtype
 SQL_TASK,
Integrate real-time tasks lineage.
    INTEGRATED_STREAM,
Integration of offline tasks lineage.
    INTEGRATED_OFFLINE;
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessSubType() const;

                    /**
                     * 设置Task Subtype
 SQL_TASK,
Integrate real-time tasks lineage.
    INTEGRATED_STREAM,
Integration of offline tasks lineage.
    INTEGRATED_OFFLINE;
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processSubType Task Subtype
 SQL_TASK,
Integrate real-time tasks lineage.
    INTEGRATED_STREAM,
Integration of offline tasks lineage.
    INTEGRATED_OFFLINE;
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessSubType(const std::string& _processSubType);

                    /**
                     * 判断参数 ProcessSubType 是否已赋值
                     * @return ProcessSubType 是否已赋值
                     * 
                     */
                    bool ProcessSubTypeHasBeenSet() const;

                    /**
                     * 获取Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessProperties Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LineageProperty> GetProcessProperties() const;

                    /**
                     * 设置Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processProperties Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessProperties(const std::vector<LineageProperty>& _processProperties);

                    /**
                     * 判断参数 ProcessProperties 是否已赋值
                     * @return ProcessProperties 是否已赋值
                     * 
                     */
                    bool ProcessPropertiesHasBeenSet() const;

                    /**
                     * 获取Unique node ID of the lineage task.
                     * @return LineageNodeId Unique node ID of the lineage task.
                     * 
                     */
                    std::string GetLineageNodeId() const;

                    /**
                     * 设置Unique node ID of the lineage task.
                     * @param _lineageNodeId Unique node ID of the lineage task.
                     * 
                     */
                    void SetLineageNodeId(const std::string& _lineageNodeId);

                    /**
                     * 判断参数 LineageNodeId 是否已赋值
                     * @return LineageNodeId 是否已赋值
                     * 
                     */
                    bool LineageNodeIdHasBeenSet() const;

                private:

                    /**
                     * Original unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * Task type
Schedule task execution.
    SCHEDULE_TASK,
Integration task.
    INTEGRATION_TASK,
Third-Party reporting.
    THIRD_REPORT,
Data modeling.
    TABLE_MODEL,
Create metrics for the model.
    MODEL_METRIC,
Create a derived metric from atomic metrics.
    METRIC_METRIC,
Data service.
    DATA_SERVICE
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * WEDATA, THIRD;
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Task Subtype
 SQL_TASK,
Integrate real-time tasks lineage.
    INTEGRATED_STREAM,
Integration of offline tasks lineage.
    INTEGRATED_OFFLINE;
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processSubType;
                    bool m_processSubTypeHasBeenSet;

                    /**
                     * Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LineageProperty> m_processProperties;
                    bool m_processPropertiesHasBeenSet;

                    /**
                     * Unique node ID of the lineage task.
                     */
                    std::string m_lineageNodeId;
                    bool m_lineageNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_
