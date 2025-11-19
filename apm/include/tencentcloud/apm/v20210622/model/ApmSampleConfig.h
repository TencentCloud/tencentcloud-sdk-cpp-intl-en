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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/APMKVItem.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Sampling configuration
                */
                class ApmSampleConfig : public AbstractModel
                {
                public:
                    ApmSampleConfig();
                    ~ApmSampleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceKey Instance ID.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceKey Instance ID.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Service name.
                     * @return ServiceName Service name.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name.
                     * @param _serviceName Service name.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Sampling name
                     * @return SampleName Sampling name
                     * 
                     */
                    std::string GetSampleName() const;

                    /**
                     * 设置Sampling name
                     * @param _sampleName Sampling name
                     * 
                     */
                    void SetSampleName(const std::string& _sampleName);

                    /**
                     * 判断参数 SampleName 是否已赋值
                     * @return SampleName 是否已赋值
                     * 
                     */
                    bool SampleNameHasBeenSet() const;

                    /**
                     * 获取API name.
                     * @return OperationName API name.
                     * 
                     */
                    std::string GetOperationName() const;

                    /**
                     * 设置API name.
                     * @param _operationName API name.
                     * 
                     */
                    void SetOperationName(const std::string& _operationName);

                    /**
                     * 判断参数 OperationName 是否已赋值
                     * @return OperationName 是否已赋值
                     * 
                     */
                    bool OperationNameHasBeenSet() const;

                    /**
                     * 获取Number of spans sampled
                     * @return SpanNum Number of spans sampled
                     * 
                     */
                    int64_t GetSpanNum() const;

                    /**
                     * 设置Number of spans sampled
                     * @param _spanNum Number of spans sampled
                     * 
                     */
                    void SetSpanNum(const int64_t& _spanNum);

                    /**
                     * 判断参数 SpanNum 是否已赋值
                     * @return SpanNum 是否已赋值
                     * 
                     */
                    bool SpanNumHasBeenSet() const;

                    /**
                     * 获取Sampling configuration switch. 0: Off; 1: On
                     * @return Status Sampling configuration switch. 0: Off; 1: On
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Sampling configuration switch. 0: Off; 1: On
                     * @param _status Sampling configuration switch. 0: Off; 1: On
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<APMKVItem> GetTags() const;

                    /**
                     * 设置Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<APMKVItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Sampling rate.
                     * @return SampleRate Sampling rate.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate.
                     * @param _sampleRate Sampling rate.
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Specifies the matching method. 0: exact match (default); 1: prefix match; 2: suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationType Specifies the matching method. 0: exact match (default); 1: prefix match; 2: suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置Specifies the matching method. 0: exact match (default); 1: prefix match; 2: suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operationType Specifies the matching method. 0: exact match (default); 1: prefix match; 2: suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Service name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Sampling name
                     */
                    std::string m_sampleName;
                    bool m_sampleNameHasBeenSet;

                    /**
                     * API name.
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * Number of spans sampled
                     */
                    int64_t m_spanNum;
                    bool m_spanNumHasBeenSet;

                    /**
                     * Sampling configuration switch. 0: Off; 1: On
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag array
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<APMKVItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Sampling rate.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Specifies the matching method. 0: exact match (default); 1: prefix match; 2: suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_
