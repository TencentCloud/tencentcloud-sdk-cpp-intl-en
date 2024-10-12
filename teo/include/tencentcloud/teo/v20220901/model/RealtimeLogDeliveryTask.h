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
                * Real-time log delivery task
                */
                class RealtimeLogDeliveryTask : public AbstractModel
                {
                public:
                    RealtimeLogDeliveryTask();
                    ~RealtimeLogDeliveryTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a real-time log shipping task.
                     * @return TaskId ID of a real-time log shipping task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ID of a real-time log shipping task.
                     * @param _taskId ID of a real-time log shipping task.
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
                     * 获取Name of a real-time log shipping task.
                     * @return TaskName Name of a real-time log shipping task.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of a real-time log shipping task.
                     * @param _taskName Name of a real-time log shipping task.
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
                     * 获取Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li>
                     * @return DeliveryStatus Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li>
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li>
                     * @param _deliveryStatus Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li>
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
                     * 获取Type of a real-time log shipping task. Valid values:<li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address.</li>
                     * @return TaskType Type of a real-time log shipping task. Valid values:<li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Type of a real-time log shipping task. Valid values:<li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address.</li>
                     * @param _taskType Type of a real-time log shipping task. Valid values:<li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address.</li>
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
                     * 获取List of entities (L7 domain names or L4 proxy instances) corresponding to a real-time log shipping task. Valid value examples: <li>L7 domain name: domain.example.com;</li><li>L4 proxy instance: sid-2s69eb5wcms7.</li>	
                     * @return EntityList List of entities (L7 domain names or L4 proxy instances) corresponding to a real-time log shipping task. Valid value examples: <li>L7 domain name: domain.example.com;</li><li>L4 proxy instance: sid-2s69eb5wcms7.</li>	
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置List of entities (L7 domain names or L4 proxy instances) corresponding to a real-time log shipping task. Valid value examples: <li>L7 domain name: domain.example.com;</li><li>L4 proxy instance: sid-2s69eb5wcms7.</li>	
                     * @param _entityList List of entities (L7 domain names or L4 proxy instances) corresponding to a real-time log shipping task. Valid value examples: <li>L7 domain name: domain.example.com;</li><li>L4 proxy instance: sid-2s69eb5wcms7.</li>	
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
                     * 获取Data shipping type. Valid values: <li>domain: site acceleration logs;</li><li>application: L4 proxy logs;</li><li>web-rateLiming: rate limiting and CC attack defense logs;</li><li>web-attack: managed rule logs;</li><li>web-rule: custom rule logs;</li><li>web-bot: Bot management logs.</li>
                     * @return LogType Data shipping type. Valid values: <li>domain: site acceleration logs;</li><li>application: L4 proxy logs;</li><li>web-rateLiming: rate limiting and CC attack defense logs;</li><li>web-attack: managed rule logs;</li><li>web-rule: custom rule logs;</li><li>web-bot: Bot management logs.</li>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Data shipping type. Valid values: <li>domain: site acceleration logs;</li><li>application: L4 proxy logs;</li><li>web-rateLiming: rate limiting and CC attack defense logs;</li><li>web-attack: managed rule logs;</li><li>web-rule: custom rule logs;</li><li>web-bot: Bot management logs.</li>
                     * @param _logType Data shipping type. Valid values: <li>domain: site acceleration logs;</li><li>application: L4 proxy logs;</li><li>web-rateLiming: rate limiting and CC attack defense logs;</li><li>web-attack: managed rule logs;</li><li>web-rule: custom rule logs;</li><li>web-bot: Bot management logs.</li>
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
                     * 获取Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li>
                     * @return Area Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li>
                     * @param _area Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li>
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
                     * 获取List of predefined fields for shipping.
                     * @return Fields List of predefined fields for shipping.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置List of predefined fields for shipping.
                     * @param _fields List of predefined fields for shipping.
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
                     * 获取List of custom fields for shipping.
                     * @return CustomFields List of custom fields for shipping.
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置List of custom fields for shipping.
                     * @param _customFields List of custom fields for shipping.
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
                     * 获取Filter criteria of log shipping.
                     * @return DeliveryConditions Filter criteria of log shipping.
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置Filter criteria of log shipping.
                     * @param _deliveryConditions Filter criteria of log shipping.
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
                     * 获取Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.
                     * @return Sample Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.
                     * @param _sample Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.
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
                     * 获取Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines. </li>
Note: This field may return 'null', which indicates a failure to obtain a valid value.
                     * @return LogFormat Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines. </li>
Note: This field may return 'null', which indicates a failure to obtain a valid value.
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines. </li>
Note: This field may return 'null', which indicates a failure to obtain a valid value.
                     * @param _logFormat Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines. </li>
Note: This field may return 'null', which indicates a failure to obtain a valid value.
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
                     * 获取Configuration information of the CLS.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return CLS Configuration information of the CLS.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置Configuration information of the CLS.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _cLS Configuration information of the CLS.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Configuration information of the custom HTTP service.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return CustomEndpoint Configuration information of the custom HTTP service.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置Configuration information of the custom HTTP service.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _customEndpoint Configuration information of the custom HTTP service.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Configuration information of the AWS S3-compatible bucket.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return S3 Configuration information of the AWS S3-compatible bucket.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置Configuration information of the AWS S3-compatible bucket.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _s3 Configuration information of the AWS S3-compatible bucket.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
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
                     * ID of a real-time log shipping task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Name of a real-time log shipping task.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Status of a real-time log shipping task. Valid values: <li>enabled: enabled;</li><li>disabled: disabled;</li><li>deleted: deleted abnormally. Check whether the destination log set/log topic of Tencent Cloud CLS has been deleted.</li>
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * Type of a real-time log shipping task. Valid values:<li>cls: push to Tencent Cloud CLS;</li><li>custom_endpoint: push to a custom HTTP(S) address;</li><li>s3: push to an AWS S3-compatible bucket address.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * List of entities (L7 domain names or L4 proxy instances) corresponding to a real-time log shipping task. Valid value examples: <li>L7 domain name: domain.example.com;</li><li>L4 proxy instance: sid-2s69eb5wcms7.</li>	
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * Data shipping type. Valid values: <li>domain: site acceleration logs;</li><li>application: L4 proxy logs;</li><li>web-rateLiming: rate limiting and CC attack defense logs;</li><li>web-attack: managed rule logs;</li><li>web-rule: custom rule logs;</li><li>web-bot: Bot management logs.</li>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Data shipping area. Valid values:<li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * List of predefined fields for shipping.
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * List of custom fields for shipping.
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Filter criteria of log shipping.
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * Sampling ratio in permille. Value range: 1-1000. For example, 605 indicates a sampling ratio of 60.5%.
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * Output format for log delivery. When the output parameter is null, the default format is used, which works as follows:
<li>When TaskType is 'custom_endpoint', the default format is an array of JSON objects, with each JSON object representing a log entry;</li>
<li>When TaskType is 's3', the default format is JSON Lines. </li>
Note: This field may return 'null', which indicates a failure to obtain a valid value.
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * Configuration information of the CLS.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * Configuration information of the custom HTTP service.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * Configuration information of the AWS S3-compatible bucket.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_
