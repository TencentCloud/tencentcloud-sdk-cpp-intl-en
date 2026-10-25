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
#include <tencentcloud/teo/v20220901/model/CustomExpressionField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
#include <tencentcloud/teo/v20220901/model/CLSTopic.h>
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
                * CreateRealtimeLogDeliveryTask request structure.
                */
                class CreateRealtimeLogDeliveryTaskRequest : public AbstractModel
                {
                public:
                    CreateRealtimeLogDeliveryTaskRequest();
                    ~CreateRealtimeLogDeliveryTaskRequest() = default;
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
                     * 获取<p>Data delivery area. Valid values:</p><ul><li>`mainland`: Chinese mainland;</li><li>`overseas`: Global (excluding the Chinese mainland).</li></ul>
                     * @return Area <p>Data delivery area. Valid values:</p><ul><li>`mainland`: Chinese mainland;</li><li>`overseas`: Global (excluding the Chinese mainland).</li></ul>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data delivery area. Valid values:</p><ul><li>`mainland`: Chinese mainland;</li><li>`overseas`: Global (excluding the Chinese mainland).</li></ul>
                     * @param _area <p>Data delivery area. Valid values:</p><ul><li>`mainland`: Chinese mainland;</li><li>`overseas`: Global (excluding the Chinese mainland).</li></ul>
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
                     * 获取<p>Data delivery type. Valid values:</p><ul><li>`l7-access-logs`: Layer 7 access logs;</li><li>`application`: Layer 4 proxy logs;</li><li>`function`: Edge Function execution logs;</li><li>`web-attack`: managed rule logs.</li></ul><p>The following log types have been merged into `l7-access-logs`, and no new tasks can be added for them:</p><ul><li>`domain`: site acceleration logs;</li><li>`web-rateLiming`: rate limiting and CC attack defense logs;</li><li>`web-rule`: custom rule logs;</li><li>`web-bot`: Bot management logs.</li></ul>
                     * @return LogType <p>Data delivery type. Valid values:</p><ul><li>`l7-access-logs`: Layer 7 access logs;</li><li>`application`: Layer 4 proxy logs;</li><li>`function`: Edge Function execution logs;</li><li>`web-attack`: managed rule logs.</li></ul><p>The following log types have been merged into `l7-access-logs`, and no new tasks can be added for them:</p><ul><li>`domain`: site acceleration logs;</li><li>`web-rateLiming`: rate limiting and CC attack defense logs;</li><li>`web-rule`: custom rule logs;</li><li>`web-bot`: Bot management logs.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Data delivery type. Valid values:</p><ul><li>`l7-access-logs`: Layer 7 access logs;</li><li>`application`: Layer 4 proxy logs;</li><li>`function`: Edge Function execution logs;</li><li>`web-attack`: managed rule logs.</li></ul><p>The following log types have been merged into `l7-access-logs`, and no new tasks can be added for them:</p><ul><li>`domain`: site acceleration logs;</li><li>`web-rateLiming`: rate limiting and CC attack defense logs;</li><li>`web-rule`: custom rule logs;</li><li>`web-bot`: Bot management logs.</li></ul>
                     * @param _logType <p>Data delivery type. Valid values:</p><ul><li>`l7-access-logs`: Layer 7 access logs;</li><li>`application`: Layer 4 proxy logs;</li><li>`function`: Edge Function execution logs;</li><li>`web-attack`: managed rule logs.</li></ul><p>The following log types have been merged into `l7-access-logs`, and no new tasks can be added for them:</p><ul><li>`domain`: site acceleration logs;</li><li>`web-rateLiming`: rate limiting and CC attack defense logs;</li><li>`web-rule`: custom rule logs;</li><li>`web-bot`: Bot management logs.</li></ul>
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
                     * 获取<p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
                     * @return TaskName <p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
                     * @param _taskName <p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
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
                     * 获取<p>Type of the real-time log delivery task. Valid values:</p><ul><li>`cls`: deliver to Tencent Cloud CLS;</li><li>`custom_endpoint`: deliver to a custom HTTP(S) endpoint;</li><li>`s3`: deliver to an S3-compatible (SigV4 authentication algorithm compatible) object storage endpoint. This task type is not supported when `LogType` = `web-attack`;</li><li>`aws_s3`: deliver to an AWS S3 bucket. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3;</li><li>`log_analysis`: deliver to EdgeOne Log Analysis. This is supported only when `LogType` = `l7-access-logs` or `web-attack`.</li></ul>
                     * @return TaskType <p>Type of the real-time log delivery task. Valid values:</p><ul><li>`cls`: deliver to Tencent Cloud CLS;</li><li>`custom_endpoint`: deliver to a custom HTTP(S) endpoint;</li><li>`s3`: deliver to an S3-compatible (SigV4 authentication algorithm compatible) object storage endpoint. This task type is not supported when `LogType` = `web-attack`;</li><li>`aws_s3`: deliver to an AWS S3 bucket. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3;</li><li>`log_analysis`: deliver to EdgeOne Log Analysis. This is supported only when `LogType` = `l7-access-logs` or `web-attack`.</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Type of the real-time log delivery task. Valid values:</p><ul><li>`cls`: deliver to Tencent Cloud CLS;</li><li>`custom_endpoint`: deliver to a custom HTTP(S) endpoint;</li><li>`s3`: deliver to an S3-compatible (SigV4 authentication algorithm compatible) object storage endpoint. This task type is not supported when `LogType` = `web-attack`;</li><li>`aws_s3`: deliver to an AWS S3 bucket. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3;</li><li>`log_analysis`: deliver to EdgeOne Log Analysis. This is supported only when `LogType` = `l7-access-logs` or `web-attack`.</li></ul>
                     * @param _taskType <p>Type of the real-time log delivery task. Valid values:</p><ul><li>`cls`: deliver to Tencent Cloud CLS;</li><li>`custom_endpoint`: deliver to a custom HTTP(S) endpoint;</li><li>`s3`: deliver to an S3-compatible (SigV4 authentication algorithm compatible) object storage endpoint. This task type is not supported when `LogType` = `web-attack`;</li><li>`aws_s3`: deliver to an AWS S3 bucket. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3;</li><li>`log_analysis`: deliver to EdgeOne Log Analysis. This is supported only when `LogType` = `l7-access-logs` or `web-attack`.</li></ul>
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
                     * 获取<p>List of entities that the real-time log delivery task applies to. Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`</li><li>Edge Function instance: `test-zone-2mxigizoh9l9-1257626257`</li></ul>For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * @return EntityList <p>List of entities that the real-time log delivery task applies to. Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`</li><li>Edge Function instance: `test-zone-2mxigizoh9l9-1257626257`</li></ul>For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>List of entities that the real-time log delivery task applies to. Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`</li><li>Edge Function instance: `test-zone-2mxigizoh9l9-1257626257`</li></ul>For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     * @param _entityList <p>List of entities that the real-time log delivery task applies to. Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`</li><li>Edge Function instance: `test-zone-2mxigizoh9l9-1257626257`</li></ul>For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
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
                     * 获取<p>List of preset fields to deliver. For valid values, see:</p><ul><li><a href="https://www.tencentcloud.com/document/product/1145/61300">Layer 7 access logs (site acceleration logs)</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/61301">Layer 4 proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/67840">Edge Function execution logs</a></li></ul>For valid values, see also `DescribeLogFields`.
                     * @return Fields <p>List of preset fields to deliver. For valid values, see:</p><ul><li><a href="https://www.tencentcloud.com/document/product/1145/61300">Layer 7 access logs (site acceleration logs)</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/61301">Layer 4 proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/67840">Edge Function execution logs</a></li></ul>For valid values, see also `DescribeLogFields`.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>List of preset fields to deliver. For valid values, see:</p><ul><li><a href="https://www.tencentcloud.com/document/product/1145/61300">Layer 7 access logs (site acceleration logs)</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/61301">Layer 4 proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/67840">Edge Function execution logs</a></li></ul>For valid values, see also `DescribeLogFields`.
                     * @param _fields <p>List of preset fields to deliver. For valid values, see:</p><ul><li><a href="https://www.tencentcloud.com/document/product/1145/61300">Layer 7 access logs (site acceleration logs)</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/61301">Layer 4 proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/67840">Edge Function execution logs</a></li></ul>For valid values, see also `DescribeLogFields`.
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
                     * 获取<p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the sampling ratio is 100%.</p>
                     * @return Sample <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the sampling ratio is 100%.</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the sampling ratio is 100%.</p>
                     * @param _sample <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the sampling ratio is 100%.</p>
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
                     * 获取<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3` or `aws_s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * @return LogFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3` or `aws_s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3` or `aws_s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     * @param _logFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3` or `aws_s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
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
                     * 获取<p>CLS configuration. This parameter is required when `TaskType` is `cls`.</p>
                     * @return CLS <p>CLS configuration. This parameter is required when `TaskType` is `cls`.</p>
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置<p>CLS configuration. This parameter is required when `TaskType` is `cls`.</p>
                     * @param _cLS <p>CLS configuration. This parameter is required when `TaskType` is `cls`.</p>
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
                     * 获取<p>Configuration of the custom HTTP service. This parameter is required when `TaskType` is `custom_endpoint`.</p>
                     * @return CustomEndpoint <p>Configuration of the custom HTTP service. This parameter is required when `TaskType` is `custom_endpoint`.</p>
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>Configuration of the custom HTTP service. This parameter is required when `TaskType` is `custom_endpoint`.</p>
                     * @param _customEndpoint <p>Configuration of the custom HTTP service. This parameter is required when `TaskType` is `custom_endpoint`.</p>
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
                     * 获取<p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. This parameter is required when `TaskType` is `s3`.</p>
                     * @return S3 <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. This parameter is required when `TaskType` is `s3`.</p>
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. This parameter is required when `TaskType` is `s3`.</p>
                     * @param _s3 <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. This parameter is required when `TaskType` is `s3`.</p>
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
                     * 获取<p>Configuration of the AWS S3 object storage. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3. This parameter is required when `TaskType` is `aws_s3`.</p>
                     * @return AWSS3 <p>Configuration of the AWS S3 object storage. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3. This parameter is required when `TaskType` is `aws_s3`.</p>
                     * 
                     */
                    AWSS3 GetAWSS3() const;

                    /**
                     * 设置<p>Configuration of the AWS S3 object storage. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3. This parameter is required when `TaskType` is `aws_s3`.</p>
                     * @param _aWSS3 <p>Configuration of the AWS S3 object storage. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3. This parameter is required when `TaskType` is `aws_s3`.</p>
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
                     * <p>Data delivery area. Valid values:</p><ul><li>`mainland`: Chinese mainland;</li><li>`overseas`: Global (excluding the Chinese mainland).</li></ul>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Data delivery type. Valid values:</p><ul><li>`l7-access-logs`: Layer 7 access logs;</li><li>`application`: Layer 4 proxy logs;</li><li>`function`: Edge Function execution logs;</li><li>`web-attack`: managed rule logs.</li></ul><p>The following log types have been merged into `l7-access-logs`, and no new tasks can be added for them:</p><ul><li>`domain`: site acceleration logs;</li><li>`web-rateLiming`: rate limiting and CC attack defense logs;</li><li>`web-rule`: custom rule logs;</li><li>`web-bot`: Bot management logs.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Type of the real-time log delivery task. Valid values:</p><ul><li>`cls`: deliver to Tencent Cloud CLS;</li><li>`custom_endpoint`: deliver to a custom HTTP(S) endpoint;</li><li>`s3`: deliver to an S3-compatible (SigV4 authentication algorithm compatible) object storage endpoint. This task type is not supported when `LogType` = `web-attack`;</li><li>`aws_s3`: deliver to an AWS S3 bucket. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3;</li><li>`log_analysis`: deliver to EdgeOne Log Analysis. This is supported only when `LogType` = `l7-access-logs` or `web-attack`.</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>List of entities that the real-time log delivery task applies to. Examples:</p><ul><li>Layer 7 domain name: `domain.example.com`</li><li>Layer 4 proxy instance: `sid-2s69eb5wcms7`</li><li>Edge Function instance: `test-zone-2mxigizoh9l9-1257626257`</li></ul>For valid values, see <a href="https://www.tencentcloud.com/document/product/1145/59024">DescribeL4Proxy</a>.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>List of preset fields to deliver. For valid values, see:</p><ul><li><a href="https://www.tencentcloud.com/document/product/1145/61300">Layer 7 access logs (site acceleration logs)</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/61301">Layer 4 proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1145/67840">Edge Function execution logs</a></li></ul>For valid values, see also `DescribeLogFields`.
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
                     * <p>Sampling ratio, in per mille. Value range: 1-1000. For example, 605 means a sampling ratio of 60.5%. If left empty, the sampling ratio is 100%.</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1145/64485">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:</p><ul><li>When `TaskType` is `custom_endpoint`, the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When `TaskType` is `s3` or `aws_s3`, the default format is JSON Lines;</li></ul><p>Particularly, when `TaskType` is `cls` or `log_analysis`, the only allowed value for `LogFormat.FormatType` is `json`, and other parameters in `LogFormat` will be ignored. It is recommended not to transfer `LogFormat`.</p>
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>CLS configuration. This parameter is required when `TaskType` is `cls`.</p>
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * <p>Configuration of the custom HTTP service. This parameter is required when `TaskType` is `custom_endpoint`.</p>
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>Configuration of the S3-compatible (SigV4 authentication algorithm compatible) object storage. This parameter is required when `TaskType` is `s3`.</p>
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                    /**
                     * <p>Configuration of the AWS S3 object storage. It uses IAM role authorization, requires no long-term key, and applies only to AWS native S3. This parameter is required when `TaskType` is `aws_s3`.</p>
                     */
                    AWSS3 m_aWSS3;
                    bool m_aWSS3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
