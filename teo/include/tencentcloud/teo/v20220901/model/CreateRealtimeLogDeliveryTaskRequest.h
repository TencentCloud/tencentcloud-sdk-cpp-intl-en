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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
#include <tencentcloud/teo/v20220901/model/CLSTopic.h>
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
                * CreateRealtimeLogDeliveryTask request structure.
                */
                class CreateRealtimeLogDeliveryTaskRequest : public AbstractModel
                {
                public:
                    CreateRealtimeLogDeliveryTaskRequest();
                    ~CreateRealtimeLogDeliveryTaskRequest() = default;
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
                     * 获取The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters.
                     * @return TaskName The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters.
                     * @param _taskName The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters.
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
                     * 获取The type of the real-time log delivery task. Valid values:
<li>cls: Push to Tencent Cloud CLS;</li>
<li>custom_endpoint: Push to a user-defined HTTP(S) address;</li>
<li>s3: Push to an AWS S3-compatible bucket address.</li>
                     * @return TaskType The type of the real-time log delivery task. Valid values:
<li>cls: Push to Tencent Cloud CLS;</li>
<li>custom_endpoint: Push to a user-defined HTTP(S) address;</li>
<li>s3: Push to an AWS S3-compatible bucket address.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置The type of the real-time log delivery task. Valid values:
<li>cls: Push to Tencent Cloud CLS;</li>
<li>custom_endpoint: Push to a user-defined HTTP(S) address;</li>
<li>s3: Push to an AWS S3-compatible bucket address.</li>
                     * @param _taskType The type of the real-time log delivery task. Valid values:
<li>cls: Push to Tencent Cloud CLS;</li>
<li>custom_endpoint: Push to a user-defined HTTP(S) address;</li>
<li>s3: Push to an AWS S3-compatible bucket address.</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>
                     * @return EntityList The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>
                     * @param _entityList The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>
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
                     * 获取The type of data delivery. Valid values:
<li>domain: Site acceleration log;</li>
<li>application: Layer 4 proxy log;</li>
<li>web-rateLiming: Rate limit and CC attack defense log;</li>
<li>web-attack: Managed rule log;</li>
<li>web-rule: Custom rule log;</li>
<li>web-bot: Bot management log.</li>
                     * @return LogType The type of data delivery. Valid values:
<li>domain: Site acceleration log;</li>
<li>application: Layer 4 proxy log;</li>
<li>web-rateLiming: Rate limit and CC attack defense log;</li>
<li>web-attack: Managed rule log;</li>
<li>web-rule: Custom rule log;</li>
<li>web-bot: Bot management log.</li>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置The type of data delivery. Valid values:
<li>domain: Site acceleration log;</li>
<li>application: Layer 4 proxy log;</li>
<li>web-rateLiming: Rate limit and CC attack defense log;</li>
<li>web-attack: Managed rule log;</li>
<li>web-rule: Custom rule log;</li>
<li>web-bot: Bot management log.</li>
                     * @param _logType The type of data delivery. Valid values:
<li>domain: Site acceleration log;</li>
<li>application: Layer 4 proxy log;</li>
<li>web-rateLiming: Rate limit and CC attack defense log;</li>
<li>web-attack: Managed rule log;</li>
<li>web-rule: Custom rule log;</li>
<li>web-bot: Bot management log.</li>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取The data delivery area. Valid values:
<li>mainland: Within the Chinese mainland;</li>
<li>overseas: Global (excluding the Chinese mainland).</li>
                     * @return Area The data delivery area. Valid values:
<li>mainland: Within the Chinese mainland;</li>
<li>overseas: Global (excluding the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The data delivery area. Valid values:
<li>mainland: Within the Chinese mainland;</li>
<li>overseas: Global (excluding the Chinese mainland).</li>
                     * @param _area The data delivery area. Valid values:
<li>mainland: Within the Chinese mainland;</li>
<li>overseas: Global (excluding the Chinese mainland).</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The list of predefined fields for delivery.
                     * @return Fields The list of predefined fields for delivery.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置The list of predefined fields for delivery.
                     * @param _fields The list of predefined fields for delivery.
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
                     * 获取The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200.
                     * @return CustomFields The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200.
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200.
                     * @param _customFields The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200.
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
                     * 获取The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the sampling ratio is 100%.
                     * @return Sample The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the sampling ratio is 100%.
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the sampling ratio is 100%.
                     * @param _sample The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the sampling ratio is 100%.
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
                     * 获取Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines;</li>Specifically, when TaskType is 'cls', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.
                     * @return LogFormat Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines;</li>Specifically, when TaskType is 'cls', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines;</li>Specifically, when TaskType is 'cls', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.
                     * @param _logFormat Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines;</li>Specifically, when TaskType is 'cls', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.
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
                     * 获取The configuration information of CLS. This parameter is required when TaskType is cls.
                     * @return CLS The configuration information of CLS. This parameter is required when TaskType is cls.
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置The configuration information of CLS. This parameter is required when TaskType is cls.
                     * @param _cLS The configuration information of CLS. This parameter is required when TaskType is cls.
                     * 
                     */
                    void SetCLS(const CLSTopic& _cLS);

                    /**
                     * 判断参数 CLS 是否已赋值
                     * @return CLS 是否已赋值
                     * 
                     */
                    bool CLSHasBeenSet() const;

                    /**
                     * 获取The configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.
                     * @return CustomEndpoint The configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置The configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.
                     * @param _customEndpoint The configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.
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
                     * 获取The configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.
                     * @return S3 The configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置The configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.
                     * @param _s3 The configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.
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
                     * The name of the real-time log delivery task, which is a combination of numbers, English letters, - and _, containing up to 200 characters.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * The type of the real-time log delivery task. Valid values:
<li>cls: Push to Tencent Cloud CLS;</li>
<li>custom_endpoint: Push to a user-defined HTTP(S) address;</li>
<li>s3: Push to an AWS S3-compatible bucket address.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * The list of entities (Layer 7 domains or Layer 4 proxy instances) corresponding to the real-time log delivery task. Valid value examples:
<li>Layer 7 domain: domain.example.com;</li>
<li>Layer 4 proxy instance: sid-2s69eb5wcms7.</li>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * The type of data delivery. Valid values:
<li>domain: Site acceleration log;</li>
<li>application: Layer 4 proxy log;</li>
<li>web-rateLiming: Rate limit and CC attack defense log;</li>
<li>web-attack: Managed rule log;</li>
<li>web-rule: Custom rule log;</li>
<li>web-bot: Bot management log.</li>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * The data delivery area. Valid values:
<li>mainland: Within the Chinese mainland;</li>
<li>overseas: Global (excluding the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The list of predefined fields for delivery.
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * The list of custom fields for delivery, supporting extracting specified field values from HTTP request headers, response headers, and cookies. Each custom field name must be unique and the maximum number of fields is 200.
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Log delivery filter conditions. If this field is not filled in, all logs will be delivered.
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * The sampling ratio in permille. Value range: 1 to 1000. For example, 605 represents a sampling ratio of 60.5%. If this field is not filled in, the sampling ratio is 100%.
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines;</li>Specifically, when TaskType is 'cls', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * The configuration information of CLS. This parameter is required when TaskType is cls.
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * The configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * The configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
