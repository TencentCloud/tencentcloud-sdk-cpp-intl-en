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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Real-time log delivery task.
                */
                class RealtimeLogDeliveryTask : public AbstractModel
                {
                public:
                    RealtimeLogDeliveryTask();
                    ~RealtimeLogDeliveryTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Real-time log delivery task ID.</p>
                     * @return TaskId <p>Real-time log delivery task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Real-time log delivery task ID.</p>
                     * @param _taskId <p>Real-time log delivery task ID.</p>
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
                     * 获取<p>Name of the real-time log delivery task.</p>
                     * @return TaskName <p>Name of the real-time log delivery task.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Name of the real-time log delivery task.</p>
                     * @param _taskName <p>Name of the real-time log delivery task.</p>
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
                     * 获取<p>Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li></p>
                     * @return DeliveryStatus <p>Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li></p>
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置<p>Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li></p>
                     * @param _deliveryStatus <p>Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li></p>
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
                     * 获取<p>Type of a real-time log shipping task. Valid values: <ul><li>cls: push to Tencent Cloud CLS;</li> <li>custom_endpoint: push to a custom HTTP(S) address;</li> <li>s3: push to an S3-compatible (compatible with the SigV4 authentication algorithm) object storage address;</li><li>aws_s3: push to an AWS S3 bucket address;</li><li>log_analysis: push to EdgeOne log analytics.</li></ul></p>
                     * @return TaskType <p>Type of a real-time log shipping task. Valid values: <ul><li>cls: push to Tencent Cloud CLS;</li> <li>custom_endpoint: push to a custom HTTP(S) address;</li> <li>s3: push to an S3-compatible (compatible with the SigV4 authentication algorithm) object storage address;</li><li>aws_s3: push to an AWS S3 bucket address;</li><li>log_analysis: push to EdgeOne log analytics.</li></ul></p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Type of a real-time log shipping task. Valid values: <ul><li>cls: push to Tencent Cloud CLS;</li> <li>custom_endpoint: push to a custom HTTP(S) address;</li> <li>s3: push to an S3-compatible (compatible with the SigV4 authentication algorithm) object storage address;</li><li>aws_s3: push to an AWS S3 bucket address;</li><li>log_analysis: push to EdgeOne log analytics.</li></ul></p>
                     * @param _taskType <p>Type of a real-time log shipping task. Valid values: <ul><li>cls: push to Tencent Cloud CLS;</li> <li>custom_endpoint: push to a custom HTTP(S) address;</li> <li>s3: push to an S3-compatible (compatible with the SigV4 authentication algorithm) object storage address;</li><li>aws_s3: push to an AWS S3 bucket address;</li><li>log_analysis: push to EdgeOne log analytics.</li></ul></p>
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
                     * 获取<p>List of entities corresponding to the real-time log delivery task (Layer 7 domain or L4 proxy instance). Example values: <li>Layer 7 domain: domain.example.com;</li> <li>L4 proxy instance: sid-2s69eb5wcms7.</li></p>
                     * @return EntityList <p>List of entities corresponding to the real-time log delivery task (Layer 7 domain or L4 proxy instance). Example values: <li>Layer 7 domain: domain.example.com;</li> <li>L4 proxy instance: sid-2s69eb5wcms7.</li></p>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>List of entities corresponding to the real-time log delivery task (Layer 7 domain or L4 proxy instance). Example values: <li>Layer 7 domain: domain.example.com;</li> <li>L4 proxy instance: sid-2s69eb5wcms7.</li></p>
                     * @param _entityList <p>List of entities corresponding to the real-time log delivery task (Layer 7 domain or L4 proxy instance). Example values: <li>Layer 7 domain: domain.example.com;</li> <li>L4 proxy instance: sid-2s69eb5wcms7.</li></p>
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
                     * 获取<p>Data delivery type. Valid values: <li>l7-access-logs: L7 access log</li><li>application: four-layer proxy logs</li> <li>function: edge function logs</li> <li>web-attack: managed rule log</li> <li>domain: site acceleration log</li> <li>web-rateLiming: rate limit and CC attack defense log</li><li>web-rule: custom rule log</li> <li>web-bot: Bot Management Log.</li></p>
                     * @return LogType <p>Data delivery type. Valid values: <li>l7-access-logs: L7 access log</li><li>application: four-layer proxy logs</li> <li>function: edge function logs</li> <li>web-attack: managed rule log</li> <li>domain: site acceleration log</li> <li>web-rateLiming: rate limit and CC attack defense log</li><li>web-rule: custom rule log</li> <li>web-bot: Bot Management Log.</li></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Data delivery type. Valid values: <li>l7-access-logs: L7 access log</li><li>application: four-layer proxy logs</li> <li>function: edge function logs</li> <li>web-attack: managed rule log</li> <li>domain: site acceleration log</li> <li>web-rateLiming: rate limit and CC attack defense log</li><li>web-rule: custom rule log</li> <li>web-bot: Bot Management Log.</li></p>
                     * @param _logType <p>Data delivery type. Valid values: <li>l7-access-logs: L7 access log</li><li>application: four-layer proxy logs</li> <li>function: edge function logs</li> <li>web-attack: managed rule log</li> <li>domain: site acceleration log</li> <li>web-rateLiming: rate limit and CC attack defense log</li><li>web-rule: custom rule log</li> <li>web-bot: Bot Management Log.</li></p>
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
                     * 获取<p>Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></p>
                     * @return Area <p>Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></p>
                     * @param _area <p>Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></p>
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
                     * 获取<p>List of predefined fields for delivery.</p>
                     * @return Fields <p>List of predefined fields for delivery.</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>List of predefined fields for delivery.</p>
                     * @param _fields <p>List of predefined fields for delivery.</p>
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
                     * 获取<p>Custom fields for delivery.</p>
                     * @return CustomFields <p>Custom fields for delivery.</p>
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置<p>Custom fields for delivery.</p>
                     * @param _customFields <p>Custom fields for delivery.</p>
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
                     * 获取<p>List of custom expression fields for shipping.</p>
                     * @return CustomExpressionFields <p>List of custom expression fields for shipping.</p>
                     * 
                     */
                    std::vector<CustomExpressionField> GetCustomExpressionFields() const;

                    /**
                     * 设置<p>List of custom expression fields for shipping.</p>
                     * @param _customExpressionFields <p>List of custom expression fields for shipping.</p>
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
                     * 获取<p>Filter criteria of log shipping.</p>
                     * @return DeliveryConditions <p>Filter criteria of log shipping.</p>
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置<p>Filter criteria of log shipping.</p>
                     * @param _deliveryConditions <p>Filter criteria of log shipping.</p>
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
                     * 获取<p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.</p>
                     * @return Sample <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.</p>
                     * @param _sample <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.</p>
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
                     * 获取<p>Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:</p><li>When TaskType is custom_endpoint, the default format is an array of JSON objects, where each JSON object represents a log entry;</li><li>When TaskType is s3, the default format is JSON Lines.</li>
                     * @return LogFormat <p>Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:</p><li>When TaskType is custom_endpoint, the default format is an array of JSON objects, where each JSON object represents a log entry;</li><li>When TaskType is s3, the default format is JSON Lines.</li>
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:</p><li>When TaskType is custom_endpoint, the default format is an array of JSON objects, where each JSON object represents a log entry;</li><li>When TaskType is s3, the default format is JSON Lines.</li>
                     * @param _logFormat <p>Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:</p><li>When TaskType is custom_endpoint, the default format is an array of JSON objects, where each JSON object represents a log entry;</li><li>When TaskType is s3, the default format is JSON Lines.</li>
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
                     * 获取<p>Configuration information of the CLS.</p>
                     * @return CLS <p>Configuration information of the CLS.</p>
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置<p>Configuration information of the CLS.</p>
                     * @param _cLS <p>Configuration information of the CLS.</p>
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
                     * 获取<p>Configuration information of the custom HTTP service.</p>
                     * @return CustomEndpoint <p>Configuration information of the custom HTTP service.</p>
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>Configuration information of the custom HTTP service.</p>
                     * @param _customEndpoint <p>Configuration information of the custom HTTP service.</p>
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
                     * 获取<p>Configuration message of S3-compatible (compatible with SigV4 authentication algorithm) object storage.</p>
                     * @return S3 <p>Configuration message of S3-compatible (compatible with SigV4 authentication algorithm) object storage.</p>
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>Configuration message of S3-compatible (compatible with SigV4 authentication algorithm) object storage.</p>
                     * @param _s3 <p>Configuration message of S3-compatible (compatible with SigV4 authentication algorithm) object storage.</p>
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
                     * 获取<p>Configuration information of the AWS S3 object storage. It uses IAM role authorization, eliminating the need for persistent keys, and is applicable only to AWS native S3.</p>
                     * @return AWSS3 <p>Configuration information of the AWS S3 object storage. It uses IAM role authorization, eliminating the need for persistent keys, and is applicable only to AWS native S3.</p>
                     * 
                     */
                    AWSS3 GetAWSS3() const;

                    /**
                     * 设置<p>Configuration information of the AWS S3 object storage. It uses IAM role authorization, eliminating the need for persistent keys, and is applicable only to AWS native S3.</p>
                     * @param _aWSS3 <p>Configuration information of the AWS S3 object storage. It uses IAM role authorization, eliminating the need for persistent keys, and is applicable only to AWS native S3.</p>
                     * 
                     */
                    void SetAWSS3(const AWSS3& _aWSS3);

                    /**
                     * 判断参数 AWSS3 是否已赋值
                     * @return AWSS3 是否已赋值
                     * 
                     */
                    bool AWSS3HasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Real-time log delivery task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Name of the real-time log delivery task.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li></p>
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>Type of a real-time log shipping task. Valid values: <ul><li>cls: push to Tencent Cloud CLS;</li> <li>custom_endpoint: push to a custom HTTP(S) address;</li> <li>s3: push to an S3-compatible (compatible with the SigV4 authentication algorithm) object storage address;</li><li>aws_s3: push to an AWS S3 bucket address;</li><li>log_analysis: push to EdgeOne log analytics.</li></ul></p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>List of entities corresponding to the real-time log delivery task (Layer 7 domain or L4 proxy instance). Example values: <li>Layer 7 domain: domain.example.com;</li> <li>L4 proxy instance: sid-2s69eb5wcms7.</li></p>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>Data delivery type. Valid values: <li>l7-access-logs: L7 access log</li><li>application: four-layer proxy logs</li> <li>function: edge function logs</li> <li>web-attack: managed rule log</li> <li>domain: site acceleration log</li> <li>web-rateLiming: rate limit and CC attack defense log</li><li>web-rule: custom rule log</li> <li>web-bot: Bot Management Log.</li></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>List of predefined fields for delivery.</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>Custom fields for delivery.</p>
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>List of custom expression fields for shipping.</p>
                     */
                    std::vector<CustomExpressionField> m_customExpressionFields;
                    bool m_customExpressionFieldsHasBeenSet;

                    /**
                     * <p>Filter criteria of log shipping.</p>
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * <p>Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:</p><li>When TaskType is custom_endpoint, the default format is an array of JSON objects, where each JSON object represents a log entry;</li><li>When TaskType is s3, the default format is JSON Lines.</li>
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>Configuration information of the CLS.</p>
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * <p>Configuration information of the custom HTTP service.</p>
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>Configuration message of S3-compatible (compatible with SigV4 authentication algorithm) object storage.</p>
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                    /**
                     * <p>Configuration information of the AWS S3 object storage. It uses IAM role authorization, eliminating the need for persistent keys, and is applicable only to AWS native S3.</p>
                     */
                    AWSS3 m_aWSS3;
                    bool m_aWSS3HasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_
