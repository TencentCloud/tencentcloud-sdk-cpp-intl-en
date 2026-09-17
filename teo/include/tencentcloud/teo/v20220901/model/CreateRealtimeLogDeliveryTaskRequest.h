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
                     * 获取<p>Data shipping area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * @return Area <p>Data shipping area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data shipping area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * @param _area <p>Data shipping area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
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
                     * 获取<p>Data delivery type. Available values:</p><ul><li>l7-access-logs: Layer 7 Access Logs;</li><li>application: Layer 4 Proxy Logs;</li><li>function: Function Logs;</li><li>web-attack: Managed Rule Logs.</li></ul><p>The following types of logs are merged into l7-access-logs and no longer support adding:</p><ul><li>domain: Site Acceleration Logs;</li><li>web-rateLiming: Rate Limit and CC Attack Defense Logs;</li><li>web-rule: Custom Rule Logs;</li><li>web-bot: Bot Management Logs.</li></ul>
                     * @return LogType <p>Data delivery type. Available values:</p><ul><li>l7-access-logs: Layer 7 Access Logs;</li><li>application: Layer 4 Proxy Logs;</li><li>function: Function Logs;</li><li>web-attack: Managed Rule Logs.</li></ul><p>The following types of logs are merged into l7-access-logs and no longer support adding:</p><ul><li>domain: Site Acceleration Logs;</li><li>web-rateLiming: Rate Limit and CC Attack Defense Logs;</li><li>web-rule: Custom Rule Logs;</li><li>web-bot: Bot Management Logs.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Data delivery type. Available values:</p><ul><li>l7-access-logs: Layer 7 Access Logs;</li><li>application: Layer 4 Proxy Logs;</li><li>function: Function Logs;</li><li>web-attack: Managed Rule Logs.</li></ul><p>The following types of logs are merged into l7-access-logs and no longer support adding:</p><ul><li>domain: Site Acceleration Logs;</li><li>web-rateLiming: Rate Limit and CC Attack Defense Logs;</li><li>web-rule: Custom Rule Logs;</li><li>web-bot: Bot Management Logs.</li></ul>
                     * @param _logType <p>Data delivery type. Available values:</p><ul><li>l7-access-logs: Layer 7 Access Logs;</li><li>application: Layer 4 Proxy Logs;</li><li>function: Function Logs;</li><li>web-attack: Managed Rule Logs.</li></ul><p>The following types of logs are merged into l7-access-logs and no longer support adding:</p><ul><li>domain: Site Acceleration Logs;</li><li>web-rateLiming: Rate Limit and CC Attack Defense Logs;</li><li>web-rule: Custom Rule Logs;</li><li>web-bot: Bot Management Logs.</li></ul>
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
                     * 获取<p>Type of a real-time log shipping task. Valid values:<ul><li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address;</li><li>log_analysis: push to EdgeOne log analytics. This is supported only when LogType = l7-access-logs or web-attack.</li></ul></p>
                     * @return TaskType <p>Type of a real-time log shipping task. Valid values:<ul><li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address;</li><li>log_analysis: push to EdgeOne log analytics. This is supported only when LogType = l7-access-logs or web-attack.</li></ul></p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Type of a real-time log shipping task. Valid values:<ul><li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address;</li><li>log_analysis: push to EdgeOne log analytics. This is supported only when LogType = l7-access-logs or web-attack.</li></ul></p>
                     * @param _taskType <p>Type of a real-time log shipping task. Valid values:<ul><li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address;</li><li>log_analysis: push to EdgeOne log analytics. This is supported only when LogType = l7-access-logs or web-attack.</li></ul></p>
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
                     * 获取<p>List of entities corresponding to real-time log delivery tasks. Example values:</p><ul><li>Layer 7 domain: domain.example.com</li><li>Layer 4 proxy instance: sid-2s69eb5wcms7</li><li>Edge function instance: test-zone-2mxigizoh9l9-1257626257</li></ul><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1">DescribeL4Proxy</a></p>
                     * @return EntityList <p>List of entities corresponding to real-time log delivery tasks. Example values:</p><ul><li>Layer 7 domain: domain.example.com</li><li>Layer 4 proxy instance: sid-2s69eb5wcms7</li><li>Edge function instance: test-zone-2mxigizoh9l9-1257626257</li></ul><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1">DescribeL4Proxy</a></p>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>List of entities corresponding to real-time log delivery tasks. Example values:</p><ul><li>Layer 7 domain: domain.example.com</li><li>Layer 4 proxy instance: sid-2s69eb5wcms7</li><li>Edge function instance: test-zone-2mxigizoh9l9-1257626257</li></ul><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1">DescribeL4Proxy</a></p>
                     * @param _entityList <p>List of entities corresponding to real-time log delivery tasks. Example values:</p><ul><li>Layer 7 domain: domain.example.com</li><li>Layer 4 proxy instance: sid-2s69eb5wcms7</li><li>Edge function instance: test-zone-2mxigizoh9l9-1257626257</li></ul><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1">DescribeL4Proxy</a></p>
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
                     * 获取<p>Predefined fields for delivery. For reference: <ul><li><a href="https://www.tencentcloud.com/document/product/1552/105791?from_cn_redirect=1">Layer 7 Access Logs (site acceleration log)</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/105792?from_cn_redirect=1">four-layer proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/115585?from_cn_redirect=1">edge function logs</a></li></ul></p><p>For reference: DescribeLogFields</p>
                     * @return Fields <p>Predefined fields for delivery. For reference: <ul><li><a href="https://www.tencentcloud.com/document/product/1552/105791?from_cn_redirect=1">Layer 7 Access Logs (site acceleration log)</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/105792?from_cn_redirect=1">four-layer proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/115585?from_cn_redirect=1">edge function logs</a></li></ul></p><p>For reference: DescribeLogFields</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>Predefined fields for delivery. For reference: <ul><li><a href="https://www.tencentcloud.com/document/product/1552/105791?from_cn_redirect=1">Layer 7 Access Logs (site acceleration log)</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/105792?from_cn_redirect=1">four-layer proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/115585?from_cn_redirect=1">edge function logs</a></li></ul></p><p>For reference: DescribeLogFields</p>
                     * @param _fields <p>Predefined fields for delivery. For reference: <ul><li><a href="https://www.tencentcloud.com/document/product/1552/105791?from_cn_redirect=1">Layer 7 Access Logs (site acceleration log)</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/105792?from_cn_redirect=1">four-layer proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/115585?from_cn_redirect=1">edge function logs</a></li></ul></p><p>For reference: DescribeLogFields</p>
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
                     * 获取<p>Custom fields for delivery support extracting specified content from HTTP request headers, response headers, cookies, and request bodies.<br>Custom field name must be unique. Only Layer 7 access logs (LogType= l7-access-logs or domain) support adding custom fields.<br>The count of custom fields allowed to be configured has a quota limit. If the quota is insufficient, please contact us (https://www.tencentcloud.com/contact-us).</p>
                     * @return CustomFields <p>Custom fields for delivery support extracting specified content from HTTP request headers, response headers, cookies, and request bodies.<br>Custom field name must be unique. Only Layer 7 access logs (LogType= l7-access-logs or domain) support adding custom fields.<br>The count of custom fields allowed to be configured has a quota limit. If the quota is insufficient, please contact us (https://www.tencentcloud.com/contact-us).</p>
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置<p>Custom fields for delivery support extracting specified content from HTTP request headers, response headers, cookies, and request bodies.<br>Custom field name must be unique. Only Layer 7 access logs (LogType= l7-access-logs or domain) support adding custom fields.<br>The count of custom fields allowed to be configured has a quota limit. If the quota is insufficient, please contact us (https://www.tencentcloud.com/contact-us).</p>
                     * @param _customFields <p>Custom fields for delivery support extracting specified content from HTTP request headers, response headers, cookies, and request bodies.<br>Custom field name must be unique. Only Layer 7 access logs (LogType= l7-access-logs or domain) support adding custom fields.<br>The count of custom fields allowed to be configured has a quota limit. If the quota is insufficient, please contact us (https://www.tencentcloud.com/contact-us).</p>
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
                     * 获取<p>The list of custom expression fields for submission can be used to implement personalized real-time log content push through custom log push field names and value expressions. For usage details, refer to [Custom Log Field Expressions]().<br>Only Layer 7 Access Logs (LogType= l7-access-logs or domain) support  adding custom fields.<br>There is a quota limit on the count of custom fields that can be configured. If the quota is insufficient, please [contact us](https://www.tencentcloud.com/contact-us).<br>**Note**: If a field named in CustomExpressionFields has the same name as a field in Fields and CustomFields, the value in CustomExpressionFields takes precedence.</p>
                     * @return CustomExpressionFields <p>The list of custom expression fields for submission can be used to implement personalized real-time log content push through custom log push field names and value expressions. For usage details, refer to [Custom Log Field Expressions]().<br>Only Layer 7 Access Logs (LogType= l7-access-logs or domain) support  adding custom fields.<br>There is a quota limit on the count of custom fields that can be configured. If the quota is insufficient, please [contact us](https://www.tencentcloud.com/contact-us).<br>**Note**: If a field named in CustomExpressionFields has the same name as a field in Fields and CustomFields, the value in CustomExpressionFields takes precedence.</p>
                     * 
                     */
                    std::vector<CustomExpressionField> GetCustomExpressionFields() const;

                    /**
                     * 设置<p>The list of custom expression fields for submission can be used to implement personalized real-time log content push through custom log push field names and value expressions. For usage details, refer to [Custom Log Field Expressions]().<br>Only Layer 7 Access Logs (LogType= l7-access-logs or domain) support  adding custom fields.<br>There is a quota limit on the count of custom fields that can be configured. If the quota is insufficient, please [contact us](https://www.tencentcloud.com/contact-us).<br>**Note**: If a field named in CustomExpressionFields has the same name as a field in Fields and CustomFields, the value in CustomExpressionFields takes precedence.</p>
                     * @param _customExpressionFields <p>The list of custom expression fields for submission can be used to implement personalized real-time log content push through custom log push field names and value expressions. For usage details, refer to [Custom Log Field Expressions]().<br>Only Layer 7 Access Logs (LogType= l7-access-logs or domain) support  adding custom fields.<br>There is a quota limit on the count of custom fields that can be configured. If the quota is insufficient, please [contact us](https://www.tencentcloud.com/contact-us).<br>**Note**: If a field named in CustomExpressionFields has the same name as a field in Fields and CustomFields, the value in CustomExpressionFields takes precedence.</p>
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
                     * 获取<p>Filter criteria of log shipping. If this parameter is not input, all logs will be shipped.</p>
                     * @return DeliveryConditions <p>Filter criteria of log shipping. If this parameter is not input, all logs will be shipped.</p>
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置<p>Filter criteria of log shipping. If this parameter is not input, all logs will be shipped.</p>
                     * @param _deliveryConditions <p>Filter criteria of log shipping. If this parameter is not input, all logs will be shipped.</p>
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
                     * 获取<p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not input, the sampling ratio is 100%.</p>
                     * @return Sample <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not input, the sampling ratio is 100%.</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not input, the sampling ratio is 100%.</p>
                     * @param _sample <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not input, the sampling ratio is 100%.</p>
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
                     * 获取<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:<ul><li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When TaskType is 's3', the default format is JSON Lines;</li></ul>Particularly, when TaskType is 'cls' or 'log_analysis', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.</p>
                     * @return LogFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:<ul><li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When TaskType is 's3', the default format is JSON Lines;</li></ul>Particularly, when TaskType is 'cls' or 'log_analysis', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.</p>
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:<ul><li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When TaskType is 's3', the default format is JSON Lines;</li></ul>Particularly, when TaskType is 'cls' or 'log_analysis', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.</p>
                     * @param _logFormat <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:<ul><li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When TaskType is 's3', the default format is JSON Lines;</li></ul>Particularly, when TaskType is 'cls' or 'log_analysis', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.</p>
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
                     * 获取<p>Configuration information of CLS. This parameter is required when TaskType is cls.</p>
                     * @return CLS <p>Configuration information of CLS. This parameter is required when TaskType is cls.</p>
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置<p>Configuration information of CLS. This parameter is required when TaskType is cls.</p>
                     * @param _cLS <p>Configuration information of CLS. This parameter is required when TaskType is cls.</p>
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
                     * 获取<p>Configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.</p>
                     * @return CustomEndpoint <p>Configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.</p>
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>Configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.</p>
                     * @param _customEndpoint <p>Configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.</p>
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
                     * 获取<p>Configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.</p>
                     * @return S3 <p>Configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.</p>
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>Configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.</p>
                     * @param _s3 <p>Configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.</p>
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
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Data shipping area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Data delivery type. Available values:</p><ul><li>l7-access-logs: Layer 7 Access Logs;</li><li>application: Layer 4 Proxy Logs;</li><li>function: Function Logs;</li><li>web-attack: Managed Rule Logs.</li></ul><p>The following types of logs are merged into l7-access-logs and no longer support adding:</p><ul><li>domain: Site Acceleration Logs;</li><li>web-rateLiming: Rate Limit and CC Attack Defense Logs;</li><li>web-rule: Custom Rule Logs;</li><li>web-bot: Bot Management Logs.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Name of a real-time log delivery task, which can contain up to 200 characters, including digits, English letters, hyphens (-) and underscores (_).</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Type of a real-time log shipping task. Valid values:<ul><li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address;</li><li>log_analysis: push to EdgeOne log analytics. This is supported only when LogType = l7-access-logs or web-attack.</li></ul></p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>List of entities corresponding to real-time log delivery tasks. Example values:</p><ul><li>Layer 7 domain: domain.example.com</li><li>Layer 4 proxy instance: sid-2s69eb5wcms7</li><li>Edge function instance: test-zone-2mxigizoh9l9-1257626257</li></ul><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1">DescribeL4Proxy</a></p>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>Predefined fields for delivery. For reference: <ul><li><a href="https://www.tencentcloud.com/document/product/1552/105791?from_cn_redirect=1">Layer 7 Access Logs (site acceleration log)</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/105792?from_cn_redirect=1">four-layer proxy logs</a></li><li><a href="https://www.tencentcloud.com/document/product/1552/115585?from_cn_redirect=1">edge function logs</a></li></ul></p><p>For reference: DescribeLogFields</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>Custom fields for delivery support extracting specified content from HTTP request headers, response headers, cookies, and request bodies.<br>Custom field name must be unique. Only Layer 7 access logs (LogType= l7-access-logs or domain) support adding custom fields.<br>The count of custom fields allowed to be configured has a quota limit. If the quota is insufficient, please contact us (https://www.tencentcloud.com/contact-us).</p>
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>The list of custom expression fields for submission can be used to implement personalized real-time log content push through custom log push field names and value expressions. For usage details, refer to [Custom Log Field Expressions]().<br>Only Layer 7 Access Logs (LogType= l7-access-logs or domain) support  adding custom fields.<br>There is a quota limit on the count of custom fields that can be configured. If the quota is insufficient, please [contact us](https://www.tencentcloud.com/contact-us).<br>**Note**: If a field named in CustomExpressionFields has the same name as a field in Fields and CustomFields, the value in CustomExpressionFields takes precedence.</p>
                     */
                    std::vector<CustomExpressionField> m_customExpressionFields;
                    bool m_customExpressionFieldsHasBeenSet;

                    /**
                     * <p>Filter criteria of log shipping. If this parameter is not input, all logs will be shipped.</p>
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%. If this parameter is not input, the sampling ratio is 100%.</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>Output format for log delivery. For usage details, see <a href="https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1">Custom Log Output Format</a>. If left blank, the default format applies. The default format logic is as follows:<ul><li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, each JSON object represents a log entry;</li><li>When TaskType is 's3', the default format is JSON Lines;</li></ul>Particularly, when TaskType is 'cls' or 'log_analysis', the only allowed value for LogFormat.FormatType is 'json', and other parameters in LogFormat will be ignored. It is recommended not to transfer LogFormat.</p>
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>Configuration information of CLS. This parameter is required when TaskType is cls.</p>
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * <p>Configuration information of the custom HTTP service. This parameter is required when TaskType is custom_endpoint.</p>
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>Configuration information of the AWS S3-compatible bucket. This parameter is required when TaskType is s3.</p>
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
