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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
#include <tencentcloud/teo/v20220901/model/CustomEndpoint.h>
#include <tencentcloud/teo/v20220901/model/S3.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyRealtimeLogDeliveryTask request structure.
                */
                class ModifyRealtimeLogDeliveryTaskRequest : public AbstractModel
                {
                public:
                    ModifyRealtimeLogDeliveryTaskRequest();
                    ~ModifyRealtimeLogDeliveryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The ID of the real-time log delivery task.
                     * @return TaskId The ID of the real-time log delivery task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The ID of the real-time log delivery task.
                     * @param _taskId The ID of the real-time log delivery task.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters. If this field is not filled in, the original configuration will be retained.
                     * @return TaskName The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters. If this field is not filled in, the original configuration will be retained.
                     * @param _taskName The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取The status of the real-time log delivery task. Valid values:
<li>`enabled`: Enabled;</li>
<li>`disabled`: Disabled.</li>If this field is not filled in, the original configuration will be retained.
                     * @return DeliveryStatus The status of the real-time log delivery task. Valid values:
<li>`enabled`: Enabled;</li>
<li>`disabled`: Disabled.</li>If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置The status of the real-time log delivery task. Valid values:
<li>`enabled`: Enabled;</li>
<li>`disabled`: Disabled.</li>If this field is not filled in, the original configuration will be retained.
                     * @param _deliveryStatus The status of the real-time log delivery task. Valid values:
<li>`enabled`: Enabled;</li>
<li>`disabled`: Disabled.</li>If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetDeliveryStatus(const std::string& _deliveryStatus);

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>If this field is not filled in, the original configuration will be retained.
                     * @return EntityList The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>If this field is not filled in, the original configuration will be retained.
                     * @param _entityList The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     * 
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取The list of predefined fields for delivery. If this field is not filled in, the original configuration will be retained.
                     * @return Fields The list of predefined fields for delivery. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置The list of predefined fields for delivery. If this field is not filled in, the original configuration will be retained.
                     * @param _fields The list of predefined fields for delivery. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200. If this field is not filled in, the original configuration will be retained.
                     * @return CustomFields The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200. If this field is not filled in, the original configuration will be retained.
                     * @param _customFields The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetCustomFields(const std::vector<CustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     * @return DeliveryConditions Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     * @param _deliveryConditions Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     * 
                     */
                    void SetDeliveryConditions(const std::vector<DeliveryCondition>& _deliveryConditions);

                    /**
                     * 判断参数 DeliveryConditions 是否已赋值
                     * @return DeliveryConditions 是否已赋值
                     * 
                     */
                    bool DeliveryConditionsHasBeenSet() const;

                    /**
                     * 获取The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the original configuration will be retained.
                     * @return Sample The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the original configuration will be retained.
                     * @param _sample The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetSample(const uint64_t& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                    /**
                     * 获取Output format for log delivery. If this field is not specified, the original configuration will be retained.Specifically, when TaskType is set to cls, the value of LogFormat.FormatType can only be json, and other parameters in LogFormat will be ignored. It is recommended not to input LogFormat.
                     * @return LogFormat Output format for log delivery. If this field is not specified, the original configuration will be retained.Specifically, when TaskType is set to cls, the value of LogFormat.FormatType can only be json, and other parameters in LogFormat will be ignored. It is recommended not to input LogFormat.
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置Output format for log delivery. If this field is not specified, the original configuration will be retained.Specifically, when TaskType is set to cls, the value of LogFormat.FormatType can only be json, and other parameters in LogFormat will be ignored. It is recommended not to input LogFormat.
                     * @param _logFormat Output format for log delivery. If this field is not specified, the original configuration will be retained.Specifically, when TaskType is set to cls, the value of LogFormat.FormatType can only be json, and other parameters in LogFormat will be ignored. It is recommended not to input LogFormat.
                     * 
                     */
                    void SetLogFormat(const LogFormat& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     * 
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取The configuration information of the custom HTTP service. If this field is not filled in, the original configuration will be retained.
                     * @return CustomEndpoint The configuration information of the custom HTTP service. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置The configuration information of the custom HTTP service. If this field is not filled in, the original configuration will be retained.
                     * @param _customEndpoint The configuration information of the custom HTTP service. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetCustomEndpoint(const CustomEndpoint& _customEndpoint);

                    /**
                     * 判断参数 CustomEndpoint 是否已赋值
                     * @return CustomEndpoint 是否已赋值
                     * 
                     */
                    bool CustomEndpointHasBeenSet() const;

                    /**
                     * 获取The configuration information of the AWS S3-compatible bucket. If this field is not filled in, the original configuration will be retained.
                     * @return S3 The configuration information of the AWS S3-compatible bucket. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置The configuration information of the AWS S3-compatible bucket. If this field is not filled in, the original configuration will be retained.
                     * @param _s3 The configuration information of the AWS S3-compatible bucket. If this field is not filled in, the original configuration will be retained.
                     * 
                     */
                    void SetS3(const S3& _s3);

                    /**
                     * 判断参数 S3 是否已赋值
                     * @return S3 是否已赋值
                     * 
                     */
                    bool S3HasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The ID of the real-time log delivery task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters. If this field is not filled in, the original configuration will be retained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * The status of the real-time log delivery task. Valid values:
<li>`enabled`: Enabled;</li>
<li>`disabled`: Disabled.</li>If this field is not filled in, the original configuration will be retained.
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>If this field is not filled in, the original configuration will be retained.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * The list of predefined fields for delivery. If this field is not filled in, the original configuration will be retained.
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200. If this field is not filled in, the original configuration will be retained.
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the original configuration will be retained.
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * Output format for log delivery. If this field is not specified, the original configuration will be retained.Specifically, when TaskType is set to cls, the value of LogFormat.FormatType can only be json, and other parameters in LogFormat will be ignored. It is recommended not to input LogFormat.
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * The configuration information of the custom HTTP service. If this field is not filled in, the original configuration will be retained.
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * The configuration information of the AWS S3-compatible bucket. If this field is not filled in, the original configuration will be retained.
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
