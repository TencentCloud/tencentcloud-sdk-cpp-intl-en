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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/CustomExpressionField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
#include <tencentcloud/teo/v20220901/model/CustomEndpoint.h>
#include <tencentcloud/teo/v20220901/model/S3.h>
#include <tencentcloud/teo/v20220901/model/AWSS3.h>


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
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>ID of the real-time log delivery task.</p>
                     * @return TaskId <p>ID of the real-time log delivery task.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>ID of the real-time log delivery task.</p>
                     * @param _taskId <p>ID of the real-time log delivery task.</p>
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
                     * 获取<p>Name of the real-time log delivery task. It can contain digits, letters, hyphens (-), and underscores (_), with a maximum of 200 characters. If left empty, the original configuration applies.</p>
                     * @return TaskName <p>Name of the real-time log delivery task. It can contain digits, letters, hyphens (-), and underscores (_), with a maximum of 200 characters. If left empty, the original configuration applies.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Name of the real-time log delivery task. It can contain digits, letters, hyphens (-), and underscores (_), with a maximum of 200 characters. If left empty, the original configuration applies.</p>
                     * @param _taskName <p>Name of the real-time log delivery task. It can contain digits, letters, hyphens (-), and underscores (_), with a maximum of 200 characters. If left empty, the original configuration applies.</p>
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
                     * 获取<p>Status of the real-time log delivery task. Valid values:</p><ul><li>`enabled`: enabled;</li><li>`disabled`: disabled.</li></ul>If left empty, the original configuration applies.
                     * @return DeliveryStatus <p>Status of the real-time log delivery task. Valid values:</p><ul><li>`enabled`: enabled;</li><li>`disabled`: disabled.</li></ul>If left empty, the original configuration applies.
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置<p>Status of the real-time log delivery task. Valid values:</p><ul><li>`enabled`: enabled;</li><li>`disabled`: disabled.</li></ul>If left empty, the original configuration applies.
                     * @param _deliveryStatus <p>Status of the real-time log delivery task. Valid values:</p><ul><li>`enabled`: enabled;</li><li>`disabled`: disabled.</li></ul>If left empty, the original configuration applies.
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
                     * 获取<p>List of entities that the real-time log delivery task applies to (Layer 7 domain names or Layer 4 proxy instances). Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`;</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`.</li></ul>If left empty, the original configuration applies. For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * @return EntityList <p>List of entities that the real-time log delivery task applies to (Layer 7 domain names or Layer 4 proxy instances). Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`;</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`.</li></ul>If left empty, the original configuration applies. For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>List of entities that the real-time log delivery task applies to (Layer 7 domain names or Layer 4 proxy instances). Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`;</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`.</li></ul>If left empty, the original configuration applies. For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * @param _entityList <p>List of entities that the real-time log delivery task applies to (Layer 7 domain names or Layer 4 proxy instances). Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`;</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`.</li></ul>If left empty, the original configuration applies. For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
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
                     * 获取<p>List of preset fields to deliver. If left empty, the original configuration applies. For valid values, see `DescribeLogFields`.</p>
                     * @return Fields <p>List of preset fields to deliver. If left empty, the original configuration applies. For valid values, see `DescribeLogFields`.</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>List of preset fields to deliver. If left empty, the original configuration applies. For valid values, see `DescribeLogFields`.</p>
                     * @param _fields <p>List of preset fields to deliver. If left empty, the original configuration applies. For valid values, see `DescribeLogFields`.</p>
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
                     * 获取<p>List of custom fields to deliver. You can extract specified content from HTTP request headers, response headers, cookies, and request bodies.</p><p>Custom field names must be unique. Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p>
                     * @return CustomFields <p>List of custom fields to deliver. You can extract specified content from HTTP request headers, response headers, cookies, and request bodies.</p><p>Custom field names must be unique. Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p>
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置<p>List of custom fields to deliver. You can extract specified content from HTTP request headers, response headers, cookies, and request bodies.</p><p>Custom field names must be unique. Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p>
                     * @param _customFields <p>List of custom fields to deliver. You can extract specified content from HTTP request headers, response headers, cookies, and request bodies.</p><p>Custom field names must be unique. Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p>
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
                     * 获取<p>List of custom expression fields to deliver. By defining the field name and value expression for log delivery, you can deliver personalized real-time log content. For details, see <a href="https://www.tencentcloud.com/document/product/1145/61302">Custom Log Field Expressions</a>.</p><p>Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p><p><strong>Note</strong>: If a field in `CustomExpressionFields` has the same name as a field in `Fields` or `CustomFields`, the value in `CustomExpressionFields` takes precedence.</p>
                     * @return CustomExpressionFields <p>List of custom expression fields to deliver. By defining the field name and value expression for log delivery, you can deliver personalized real-time log content. For details, see <a href="https://www.tencentcloud.com/document/product/1145/61302">Custom Log Field Expressions</a>.</p><p>Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p><p><strong>Note</strong>: If a field in `CustomExpressionFields` has the same name as a field in `Fields` or `CustomFields`, the value in `CustomExpressionFields` takes precedence.</p>
                     * 
                     */
                    std::vector<CustomExpressionField> GetCustomExpressionFields() const;

                    /**
                     * 设置<p>List of custom expression fields to deliver. By defining the field name and value expression for log delivery, you can deliver personalized real-time log content. For details, see <a href="https://www.tencentcloud.com/document/product/1145/61302">Custom Log Field Expressions</a>.</p><p>Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p><p><strong>Note</strong>: If a field in `CustomExpressionFields` has the same name as a field in `Fields` or `CustomFields`, the value in `CustomExpressionFields` takes precedence.</p>
                     * @param _customExpressionFields <p>List of custom expression fields to deliver. By defining the field name and value expression for log delivery, you can deliver personalized real-time log content. For details, see <a href="https://www.tencentcloud.com/document/product/1145/61302">Custom Log Field Expressions</a>.</p><p>Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p><p><strong>Note</strong>: If a field in `CustomExpressionFields` has the same name as a field in `Fields` or `CustomFields`, the value in `CustomExpressionFields` takes precedence.</p>
                     * 
                     */
                    void SetCustomExpressionFields(const std::vector<CustomExpressionField>& _customExpressionFields);

                    /**
                     * 判断参数 CustomExpressionFields 是否已赋值
                     * @return CustomExpressionFields 是否已赋值
                     * 
                     */
                    bool CustomExpressionFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Filter conditions for log delivery. If left empty, all logs are delivered.</p>
                     * @return DeliveryConditions <p>Filter conditions for log delivery. If left empty, all logs are delivered.</p>
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置<p>Filter conditions for log delivery. If left empty, all logs are delivered.</p>
                     * @param _deliveryConditions <p>Filter conditions for log delivery. If left empty, all logs are delivered.</p>
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
                     * 获取<p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the original configuration applies.</p>
                     * @return Sample <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the original configuration applies.</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the original configuration applies.</p>
                     * @param _sample <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the original configuration applies.</p>
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
                     * 获取<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * @return LogFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * @param _logFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
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
                     * 获取<p>Configuration of the custom HTTP service. If left empty, the original configuration applies.</p>
                     * @return CustomEndpoint <p>Configuration of the custom HTTP service. If left empty, the original configuration applies.</p>
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>Configuration of the custom HTTP service. If left empty, the original configuration applies.</p>
                     * @param _customEndpoint <p>Configuration of the custom HTTP service. If left empty, the original configuration applies.</p>
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
                     * 获取<p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. If left empty, the original configuration applies.</p>
                     * @return S3 <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. If left empty, the original configuration applies.</p>
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. If left empty, the original configuration applies.</p>
                     * @param _s3 <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. If left empty, the original configuration applies.</p>
                     * 
                     */
                    void SetS3(const S3& _s3);

                    /**
                     * 判断参数 S3 是否已赋值
                     * @return S3 是否已赋值
                     * 
                     */
                    bool S3HasBeenSet() const;

                    /**
                     * 获取<p>Configuration of the AWS S3 object storage. If left empty, the original configuration applies.</p>
                     * @return AWSS3 <p>Configuration of the AWS S3 object storage. If left empty, the original configuration applies.</p>
                     * 
                     */
                    AWSS3 GetAWSS3() const;

                    /**
                     * 设置<p>Configuration of the AWS S3 object storage. If left empty, the original configuration applies.</p>
                     * @param _aWSS3 <p>Configuration of the AWS S3 object storage. If left empty, the original configuration applies.</p>
                     * 
                     */
                    void SetAWSS3(const AWSS3& _aWSS3);

                    /**
                     * 判断参数 AWSS3 是否已赋值
                     * @return AWSS3 是否已赋值
                     * 
                     */
                    bool AWSS3HasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>ID of the real-time log delivery task.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Name of the real-time log delivery task. It can contain digits, letters, hyphens (-), and underscores (_), with a maximum of 200 characters. If left empty, the original configuration applies.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Status of the real-time log delivery task. Valid values:</p><ul><li>`enabled`: enabled;</li><li>`disabled`: disabled.</li></ul>If left empty, the original configuration applies.
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>List of entities that the real-time log delivery task applies to (Layer 7 domain names or Layer 4 proxy instances). Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`;</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`.</li></ul>If left empty, the original configuration applies. For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>List of preset fields to deliver. If left empty, the original configuration applies. For valid values, see `DescribeLogFields`.</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>List of custom fields to deliver. You can extract specified content from HTTP request headers, response headers, cookies, and request bodies.</p><p>Custom field names must be unique. Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p>
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>List of custom expression fields to deliver. By defining the field name and value expression for log delivery, you can deliver personalized real-time log content. For details, see <a href="https://www.tencentcloud.com/document/product/1145/61302">Custom Log Field Expressions</a>.</p><p>Custom fields can be added only for Layer 7 access logs (`LogType` = `l7-access-logs` or `domain`).</p><p>The number of custom fields you can configure is subject to a quota. If the quota is insufficient, <a href="https://www.tencentcloud.com/contact-us">contact us</a>.</p><p><strong>Note</strong>: If a field in `CustomExpressionFields` has the same name as a field in `Fields` or `CustomFields`, the value in `CustomExpressionFields` takes precedence.</p>
                     */
                    std::vector<CustomExpressionField> m_customExpressionFields;
                    bool m_customExpressionFieldsHasBeenSet;

                    /**
                     * <p>Filter conditions for log delivery. If left empty, all logs are delivered.</p>
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the original configuration applies.</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>Configuration of the custom HTTP service. If left empty, the original configuration applies.</p>
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. If left empty, the original configuration applies.</p>
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                    /**
                     * <p>Configuration of the AWS S3 object storage. If left empty, the original configuration applies.</p>
                     */
                    AWSS3 m_aWSS3;
                    bool m_aWSS3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
