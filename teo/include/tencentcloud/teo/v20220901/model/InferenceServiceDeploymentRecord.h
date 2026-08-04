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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceServiceConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Service deployment history record for reasoning.
                */
                class InferenceServiceDeploymentRecord : public AbstractModel
                {
                public:
                    InferenceServiceDeploymentRecord();
                    ~InferenceServiceDeploymentRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployment record ID.
                     * @return RecordId Deployment record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Deployment record ID.
                     * @param _recordId Deployment record ID.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Deployment operation type, value:
<li>create: creation</li>
<li>update: refresh;</li>
<li>resume: enabled;</li>
<li>stop: disable.</li>
                     * @return Operation Deployment operation type, value:
<li>create: creation</li>
<li>update: refresh;</li>
<li>resume: enabled;</li>
<li>stop: disable.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Deployment operation type, value:
<li>create: creation</li>
<li>update: refresh;</li>
<li>resume: enabled;</li>
<li>stop: disable.</li>
                     * @param _operation Deployment operation type, value:
<li>create: creation</li>
<li>update: refresh;</li>
<li>resume: enabled;</li>
<li>stop: disable.</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Deployment state. Valid values:
<li>processing: deployment in progress;</li>
<li>succeeded: Deployment successful;</li>
<li>failed: Deployment failed.</li>
                     * @return Status Deployment state. Valid values:
<li>processing: deployment in progress;</li>
<li>succeeded: Deployment successful;</li>
<li>failed: Deployment failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Deployment state. Valid values:
<li>processing: deployment in progress;</li>
<li>succeeded: Deployment successful;</li>
<li>failed: Deployment failed.</li>
                     * @param _status Deployment state. Valid values:
<li>processing: deployment in progress;</li>
<li>succeeded: Deployment successful;</li>
<li>failed: Deployment failed.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Deployment duration, unit: second.
                     * @return Duration Deployment duration, unit: second.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Deployment duration, unit: second.
                     * @param _duration Deployment duration, unit: second.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Configuration for this service deployment.
                     * @return InferenceServiceConfig Configuration for this service deployment.
                     * 
                     */
                    InferenceServiceConfig GetInferenceServiceConfig() const;

                    /**
                     * 设置Configuration for this service deployment.
                     * @param _inferenceServiceConfig Configuration for this service deployment.
                     * 
                     */
                    void SetInferenceServiceConfig(const InferenceServiceConfig& _inferenceServiceConfig);

                    /**
                     * 判断参数 InferenceServiceConfig 是否已赋值
                     * @return InferenceServiceConfig 是否已赋值
                     * 
                     */
                    bool InferenceServiceConfigHasBeenSet() const;

                    /**
                     * 获取Deployment initiation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Deployment initiation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Deployment initiation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Deployment initiation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Whether the deployment configuration is the effective configuration. Value:
<li> active: effective configuration;</li>
<li> inactive: earlier version or abnormal version configuration.</li>
                     * @return ActiveStatus Whether the deployment configuration is the effective configuration. Value:
<li> active: effective configuration;</li>
<li> inactive: earlier version or abnormal version configuration.</li>
                     * 
                     */
                    std::string GetActiveStatus() const;

                    /**
                     * 设置Whether the deployment configuration is the effective configuration. Value:
<li> active: effective configuration;</li>
<li> inactive: earlier version or abnormal version configuration.</li>
                     * @param _activeStatus Whether the deployment configuration is the effective configuration. Value:
<li> active: effective configuration;</li>
<li> inactive: earlier version or abnormal version configuration.</li>
                     * 
                     */
                    void SetActiveStatus(const std::string& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                private:

                    /**
                     * Deployment record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Deployment operation type, value:
<li>create: creation</li>
<li>update: refresh;</li>
<li>resume: enabled;</li>
<li>stop: disable.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Deployment state. Valid values:
<li>processing: deployment in progress;</li>
<li>succeeded: Deployment successful;</li>
<li>failed: Deployment failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deployment duration, unit: second.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Configuration for this service deployment.
                     */
                    InferenceServiceConfig m_inferenceServiceConfig;
                    bool m_inferenceServiceConfigHasBeenSet;

                    /**
                     * Deployment initiation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the deployment configuration is the effective configuration. Value:
<li> active: effective configuration;</li>
<li> inactive: earlier version or abnormal version configuration.</li>
                     */
                    std::string m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_
