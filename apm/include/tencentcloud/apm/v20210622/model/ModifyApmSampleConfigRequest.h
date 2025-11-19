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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMSAMPLECONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMSAMPLECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyApmSampleConfig request structure.
                */
                class ModifyApmSampleConfigRequest : public AbstractModel
                {
                public:
                    ModifyApmSampleConfigRequest();
                    ~ModifyApmSampleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system ID
                     * @return InstanceId Business system ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceId Business system ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Sampling rule name.
                     * @return SampleName Sampling rule name.
                     * 
                     */
                    std::string GetSampleName() const;

                    /**
                     * 设置Sampling rule name.
                     * @param _sampleName Sampling rule name.
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
                     * 获取Application name. specifies the application name. fill in the blank to take effect on all applications.
                     * @return ServiceName Application name. specifies the application name. fill in the blank to take effect on all applications.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name. specifies the application name. fill in the blank to take effect on all applications.
                     * @param _serviceName Application name. specifies the application name. fill in the blank to take effect on all applications.
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
                     * 获取Sampling tag
                     * @return Tags Sampling tag
                     * 
                     */
                    std::vector<APMKVItem> GetTags() const;

                    /**
                     * 设置Sampling tag
                     * @param _tags Sampling tag
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
                     * 获取Sampling switch. 0: Off; 1: On; 2: Delete
                     * @return Status Sampling switch. 0: Off; 1: On; 2: Delete
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Sampling switch. 0: Off; 1: On; 2: Delete
                     * @param _status Sampling switch. 0: Off; 1: On; 2: Delete
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
                     * 获取Configuration ID.
                     * @return Id Configuration ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Configuration ID.
                     * @param _id Configuration ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取0: exact match (default); 1: prefix match; 2: suffix match.
                     * @return OperationType 0: exact match (default); 1: prefix match; 2: suffix match.
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置0: exact match (default); 1: prefix match; 2: suffix match.
                     * @param _operationType 0: exact match (default); 1: prefix match; 2: suffix match.
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * Business system ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Sampling rule name.
                     */
                    std::string m_sampleName;
                    bool m_sampleNameHasBeenSet;

                    /**
                     * Sampling rate.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Application name. specifies the application name. fill in the blank to take effect on all applications.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * API name.
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * Sampling tag
                     */
                    std::vector<APMKVItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Sampling switch. 0: Off; 1: On; 2: Delete
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Configuration ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 0: exact match (default); 1: prefix match; 2: suffix match.
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMSAMPLECONFIGREQUEST_H_
