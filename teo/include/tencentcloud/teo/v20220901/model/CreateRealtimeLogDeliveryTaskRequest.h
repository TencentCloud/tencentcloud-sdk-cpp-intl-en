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
                     * 获取Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).
                     * @return TaskName Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).
                     * @param _taskName Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).
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
                     * 获取Type of a real-time log delivery task. Valid values:
<li>cls: push to Tencent Cloud CLS;</li>
<li>custom_endpoint: push to a custom HTTP(S) endpoint;</li>
<li>s3: push to an AWS S3-compatible bucket.</li>
                     * @return TaskType Type of a real-time log delivery task. Valid values:
<li>cls: push to Tencent Cloud CLS;</li>
<li>custom_endpoint: push to a custom HTTP(S) endpoint;</li>
<li>s3: push to an AWS S3-compatible bucket.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Type of a real-time log delivery task. Valid values:
<li>cls: push to Tencent Cloud CLS;</li>
<li>custom_endpoint: push to a custom HTTP(S) endpoint;</li>
<li>s3: push to an AWS S3-compatible bucket.</li>
                     * @param _taskType Type of a real-time log delivery task. Valid values:
<li>cls: push to Tencent Cloud CLS;</li>
<li>custom_endpoint: push to a custom HTTP(S) endpoint;</li>
<li>s3: push to an AWS S3-compatible bucket.</li>
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
                     * 获取List of entities associated with the real-time log delivery task. Valid value examples:
<li>L7 domain name: domain.example.com</li>
<li>L4 proxy instance: sid-2s69eb5wcms7</li>
<li>Edge Function instance: test-zone-2mxigizoh9l9-1257626257</li>
                     * @return EntityList List of entities associated with the real-time log delivery task. Valid value examples:
<li>L7 domain name: domain.example.com</li>
<li>L4 proxy instance: sid-2s69eb5wcms7</li>
<li>Edge Function instance: test-zone-2mxigizoh9l9-1257626257</li>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置List of entities associated with the real-time log delivery task. Valid value examples:
<li>L7 domain name: domain.example.com</li>
<li>L4 proxy instance: sid-2s69eb5wcms7</li>
<li>Edge Function instance: test-zone-2mxigizoh9l9-1257626257</li>
                     * @param _entityList List of entities associated with the real-time log delivery task. Valid value examples:
<li>L7 domain name: domain.example.com</li>
<li>L4 proxy instance: sid-2s69eb5wcms7</li>
<li>Edge Function instance: test-zone-2mxigizoh9l9-1257626257</li>
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
                     * 获取Dataset type. Valid values:
<li>domain: site acceleration logs;</li>
<li>application: L4 proxy logs;</li>
<li>function: Edge Function execution log;</li>
<li>web-rateLiming: rate limiting and CC attack protection logs;</li>
<li>web-attack: managed rule logs;</li>
<li>web-rule: custom rule logs;</li>
<li>web-bot: Bot management logs.</li>
                     * @return LogType Dataset type. Valid values:
<li>domain: site acceleration logs;</li>
<li>application: L4 proxy logs;</li>
<li>function: Edge Function execution log;</li>
<li>web-rateLiming: rate limiting and CC attack protection logs;</li>
<li>web-attack: managed rule logs;</li>
<li>web-rule: custom rule logs;</li>
<li>web-bot: Bot management logs.</li>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Dataset type. Valid values:
<li>domain: site acceleration logs;</li>
<li>application: L4 proxy logs;</li>
<li>function: Edge Function execution log;</li>
<li>web-rateLiming: rate limiting and CC attack protection logs;</li>
<li>web-attack: managed rule logs;</li>
<li>web-rule: custom rule logs;</li>
<li>web-bot: Bot management logs.</li>
                     * @param _logType Dataset type. Valid values:
<li>domain: site acceleration logs;</li>
<li>application: L4 proxy logs;</li>
<li>function: Edge Function execution log;</li>
<li>web-rateLiming: rate limiting and CC attack protection logs;</li>
<li>web-attack: managed rule logs;</li>
<li>web-rule: custom rule logs;</li>
<li>web-bot: Bot management logs.</li>
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
                     * 获取Data area. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * @return Area Data area. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data area. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * @param _area Data area. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
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
                     * 获取Pre-defined log fields to be delivered. Refer to:
<li>[Site acceleration log (L7 access log)](https://www.tencentcloud.com/document/product/1145/61300)</li>
<li>[L4 proxy log](https://www.tencentcloud.com/document/product/1145/61301)</li>
<li>[Edge Function execution log](https://www.tencentcloud.com/document/product/1145/67840)</li>
                     * @return Fields Pre-defined log fields to be delivered. Refer to:
<li>[Site acceleration log (L7 access log)](https://www.tencentcloud.com/document/product/1145/61300)</li>
<li>[L4 proxy log](https://www.tencentcloud.com/document/product/1145/61301)</li>
<li>[Edge Function execution log](https://www.tencentcloud.com/document/product/1145/67840)</li>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置Pre-defined log fields to be delivered. Refer to:
<li>[Site acceleration log (L7 access log)](https://www.tencentcloud.com/document/product/1145/61300)</li>
<li>[L4 proxy log](https://www.tencentcloud.com/document/product/1145/61301)</li>
<li>[Edge Function execution log](https://www.tencentcloud.com/document/product/1145/67840)</li>
                     * @param _fields Pre-defined log fields to be delivered. Refer to:
<li>[Site acceleration log (L7 access log)](https://www.tencentcloud.com/document/product/1145/61300)</li>
<li>[L4 proxy log](https://www.tencentcloud.com/document/product/1145/61301)</li>
<li>[Edge Function execution log](https://www.tencentcloud.com/document/product/1145/67840)</li>
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
                     * 获取The list of custom fields for log delivery, which supports extracting specified content from HTTP request headers, response headers, cookies, and request bodies. Custom field names must be unique. The number of custom fields cannot exceed a maximum of 200. A single real-time log delivery task can configure up to 5 custom fields of the request body type. Currently, only site acceleration logs (`LogType`=`domain`) support custom fields.
                     * @return CustomFields The list of custom fields for log delivery, which supports extracting specified content from HTTP request headers, response headers, cookies, and request bodies. Custom field names must be unique. The number of custom fields cannot exceed a maximum of 200. A single real-time log delivery task can configure up to 5 custom fields of the request body type. Currently, only site acceleration logs (`LogType`=`domain`) support custom fields.
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置The list of custom fields for log delivery, which supports extracting specified content from HTTP request headers, response headers, cookies, and request bodies. Custom field names must be unique. The number of custom fields cannot exceed a maximum of 200. A single real-time log delivery task can configure up to 5 custom fields of the request body type. Currently, only site acceleration logs (`LogType`=`domain`) support custom fields.
                     * @param _customFields The list of custom fields for log delivery, which supports extracting specified content from HTTP request headers, response headers, cookies, and request bodies. Custom field names must be unique. The number of custom fields cannot exceed a maximum of 200. A single real-time log delivery task can configure up to 5 custom fields of the request body type. Currently, only site acceleration logs (`LogType`=`domain`) support custom fields.
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
                     * 获取Filter criteria of log delivery. If this parameter is not specified, all logs will be delivered.
                     * @return DeliveryConditions Filter criteria of log delivery. If this parameter is not specified, all logs will be delivered.
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置Filter criteria of log delivery. If this parameter is not specified, all logs will be delivered.
                     * @param _deliveryConditions Filter criteria of log delivery. If this parameter is not specified, all logs will be delivered.
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
                     * 获取Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not specified, the sampling ratio is 100%.
                     * @return Sample Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not specified, the sampling ratio is 100%.
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not specified, the sampling ratio is 100%.
                     * @param _sample Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not specified, the sampling ratio is 100%.
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
<li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When `TaskType` is `s3`, the default format is JSON Lines;</li>Specifically, when `TaskType` is `cls`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to input `LogFormat`.
                     * @return LogFormat Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When `TaskType` is `s3`, the default format is JSON Lines;</li>Specifically, when `TaskType` is `cls`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to input `LogFormat`.
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When `TaskType` is `s3`, the default format is JSON Lines;</li>Specifically, when `TaskType` is `cls`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to input `LogFormat`.
                     * @param _logFormat Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When `TaskType` is `s3`, the default format is JSON Lines;</li>Specifically, when `TaskType` is `cls`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to input `LogFormat`.
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
                     * 获取Configuration information of CLS. This parameter is required when `TaskType` is `cls`.
                     * @return CLS Configuration information of CLS. This parameter is required when `TaskType` is `cls`.
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置Configuration information of CLS. This parameter is required when `TaskType` is `cls`.
                     * @param _cLS Configuration information of CLS. This parameter is required when `TaskType` is `cls`.
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
                     * 获取Configuration information of the custom HTTP endpoint. This parameter is required when `TaskType` is `custom_endpoint`.
                     * @return CustomEndpoint Configuration information of the custom HTTP endpoint. This parameter is required when `TaskType` is `custom_endpoint`.
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置Configuration information of the custom HTTP endpoint. This parameter is required when `TaskType` is `custom_endpoint`.
                     * @param _customEndpoint Configuration information of the custom HTTP endpoint. This parameter is required when `TaskType` is `custom_endpoint`.
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
                     * 获取Configuration information of the AWS S3-compatible bucket. This parameter is required when `TaskType` is `s3`.
                     * @return S3 Configuration information of the AWS S3-compatible bucket. This parameter is required when `TaskType` is `s3`.
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置Configuration information of the AWS S3-compatible bucket. This parameter is required when `TaskType` is `s3`.
                     * @param _s3 Configuration information of the AWS S3-compatible bucket. This parameter is required when `TaskType` is `s3`.
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
                     * Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Type of a real-time log delivery task. Valid values:
<li>cls: push to Tencent Cloud CLS;</li>
<li>custom_endpoint: push to a custom HTTP(S) endpoint;</li>
<li>s3: push to an AWS S3-compatible bucket.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * List of entities associated with the real-time log delivery task. Valid value examples:
<li>L7 domain name: domain.example.com</li>
<li>L4 proxy instance: sid-2s69eb5wcms7</li>
<li>Edge Function instance: test-zone-2mxigizoh9l9-1257626257</li>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * Dataset type. Valid values:
<li>domain: site acceleration logs;</li>
<li>application: L4 proxy logs;</li>
<li>function: Edge Function execution log;</li>
<li>web-rateLiming: rate limiting and CC attack protection logs;</li>
<li>web-attack: managed rule logs;</li>
<li>web-rule: custom rule logs;</li>
<li>web-bot: Bot management logs.</li>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Data area. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Pre-defined log fields to be delivered. Refer to:
<li>[Site acceleration log (L7 access log)](https://www.tencentcloud.com/document/product/1145/61300)</li>
<li>[L4 proxy log](https://www.tencentcloud.com/document/product/1145/61301)</li>
<li>[Edge Function execution log](https://www.tencentcloud.com/document/product/1145/67840)</li>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * The list of custom fields for log delivery, which supports extracting specified content from HTTP request headers, response headers, cookies, and request bodies. Custom field names must be unique. The number of custom fields cannot exceed a maximum of 200. A single real-time log delivery task can configure up to 5 custom fields of the request body type. Currently, only site acceleration logs (`LogType`=`domain`) support custom fields.
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Filter criteria of log delivery. If this parameter is not specified, all logs will be delivered.
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not specified, the sampling ratio is 100%.
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * Output format for log delivery. If this field is not specified, the default format is used, which works as follows:
<li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When `TaskType` is `s3`, the default format is JSON Lines;</li>Specifically, when `TaskType` is `cls`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to input `LogFormat`.
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * Configuration information of CLS. This parameter is required when `TaskType` is `cls`.
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * Configuration information of the custom HTTP endpoint. This parameter is required when `TaskType` is `custom_endpoint`.
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * Configuration information of the AWS S3-compatible bucket. This parameter is required when `TaskType` is `s3`.
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
