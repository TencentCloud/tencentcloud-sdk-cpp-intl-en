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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScheduleDataKeyDeletion request structure.
                */
                class ScheduleDataKeyDeletionRequest : public AbstractModel
                {
                public:
                    ScheduleDataKeyDeletionRequest();
                    ~ScheduleDataKeyDeletionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique id of a data key.
                     * @return DataKeyId Unique id of a data key.
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置Unique id of a data key.
                     * @param _dataKeyId Unique id of a data key.
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                    /**
                     * 获取Schedule deletion time range: [7,30].
                     * @return PendingWindowInDays Schedule deletion time range: [7,30].
                     * 
                     */
                    uint64_t GetPendingWindowInDays() const;

                    /**
                     * 设置Schedule deletion time range: [7,30].
                     * @param _pendingWindowInDays Schedule deletion time range: [7,30].
                     * 
                     */
                    void SetPendingWindowInDays(const uint64_t& _pendingWindowInDays);

                    /**
                     * 判断参数 PendingWindowInDays 是否已赋值
                     * @return PendingWindowInDays 是否已赋值
                     * 
                     */
                    bool PendingWindowInDaysHasBeenSet() const;

                private:

                    /**
                     * Unique id of a data key.
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * Schedule deletion time range: [7,30].
                     */
                    uint64_t m_pendingWindowInDays;
                    bool m_pendingWindowInDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONREQUEST_H_
