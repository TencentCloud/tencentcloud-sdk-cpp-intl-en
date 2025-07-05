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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute node statistical metrics
                */
                class ComputeNodeMetrics : public AbstractModel
                {
                public:
                    ComputeNodeMetrics();
                    ~ComputeNodeMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of compute nodes that have been submitted
                     * @return SubmittedCount Number of compute nodes that have been submitted
                     * 
                     */
                    uint64_t GetSubmittedCount() const;

                    /**
                     * 设置Number of compute nodes that have been submitted
                     * @param _submittedCount Number of compute nodes that have been submitted
                     * 
                     */
                    void SetSubmittedCount(const uint64_t& _submittedCount);

                    /**
                     * 判断参数 SubmittedCount 是否已赋值
                     * @return SubmittedCount 是否已赋值
                     * 
                     */
                    bool SubmittedCountHasBeenSet() const;

                    /**
                     * 获取Number of compute nodes that are being created
                     * @return CreatingCount Number of compute nodes that are being created
                     * 
                     */
                    uint64_t GetCreatingCount() const;

                    /**
                     * 设置Number of compute nodes that are being created
                     * @param _creatingCount Number of compute nodes that are being created
                     * 
                     */
                    void SetCreatingCount(const uint64_t& _creatingCount);

                    /**
                     * 判断参数 CreatingCount 是否已赋值
                     * @return CreatingCount 是否已赋值
                     * 
                     */
                    bool CreatingCountHasBeenSet() const;

                    /**
                     * 获取Number of compute nodes that failed to be created
                     * @return CreationFailedCount Number of compute nodes that failed to be created
                     * 
                     */
                    uint64_t GetCreationFailedCount() const;

                    /**
                     * 设置Number of compute nodes that failed to be created
                     * @param _creationFailedCount Number of compute nodes that failed to be created
                     * 
                     */
                    void SetCreationFailedCount(const uint64_t& _creationFailedCount);

                    /**
                     * 判断参数 CreationFailedCount 是否已赋值
                     * @return CreationFailedCount 是否已赋值
                     * 
                     */
                    bool CreationFailedCountHasBeenSet() const;

                    /**
                     * 获取Number of compute nodes that have been created
                     * @return CreatedCount Number of compute nodes that have been created
                     * 
                     */
                    uint64_t GetCreatedCount() const;

                    /**
                     * 设置Number of compute nodes that have been created
                     * @param _createdCount Number of compute nodes that have been created
                     * 
                     */
                    void SetCreatedCount(const uint64_t& _createdCount);

                    /**
                     * 判断参数 CreatedCount 是否已赋值
                     * @return CreatedCount 是否已赋值
                     * 
                     */
                    bool CreatedCountHasBeenSet() const;

                    /**
                     * 获取Number of running compute nodes
                     * @return RunningCount Number of running compute nodes
                     * 
                     */
                    uint64_t GetRunningCount() const;

                    /**
                     * 设置Number of running compute nodes
                     * @param _runningCount Number of running compute nodes
                     * 
                     */
                    void SetRunningCount(const uint64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取Number of compute nodes that are being terminated
                     * @return DeletingCount Number of compute nodes that are being terminated
                     * 
                     */
                    uint64_t GetDeletingCount() const;

                    /**
                     * 设置Number of compute nodes that are being terminated
                     * @param _deletingCount Number of compute nodes that are being terminated
                     * 
                     */
                    void SetDeletingCount(const uint64_t& _deletingCount);

                    /**
                     * 判断参数 DeletingCount 是否已赋值
                     * @return DeletingCount 是否已赋值
                     * 
                     */
                    bool DeletingCountHasBeenSet() const;

                    /**
                     * 获取Number of exceptional compute nodes
                     * @return AbnormalCount Number of exceptional compute nodes
                     * 
                     */
                    uint64_t GetAbnormalCount() const;

                    /**
                     * 设置Number of exceptional compute nodes
                     * @param _abnormalCount Number of exceptional compute nodes
                     * 
                     */
                    void SetAbnormalCount(const uint64_t& _abnormalCount);

                    /**
                     * 判断参数 AbnormalCount 是否已赋值
                     * @return AbnormalCount 是否已赋值
                     * 
                     */
                    bool AbnormalCountHasBeenSet() const;

                private:

                    /**
                     * Number of compute nodes that have been submitted
                     */
                    uint64_t m_submittedCount;
                    bool m_submittedCountHasBeenSet;

                    /**
                     * Number of compute nodes that are being created
                     */
                    uint64_t m_creatingCount;
                    bool m_creatingCountHasBeenSet;

                    /**
                     * Number of compute nodes that failed to be created
                     */
                    uint64_t m_creationFailedCount;
                    bool m_creationFailedCountHasBeenSet;

                    /**
                     * Number of compute nodes that have been created
                     */
                    uint64_t m_createdCount;
                    bool m_createdCountHasBeenSet;

                    /**
                     * Number of running compute nodes
                     */
                    uint64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * Number of compute nodes that are being terminated
                     */
                    uint64_t m_deletingCount;
                    bool m_deletingCountHasBeenSet;

                    /**
                     * Number of exceptional compute nodes
                     */
                    uint64_t m_abnormalCount;
                    bool m_abnormalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_
