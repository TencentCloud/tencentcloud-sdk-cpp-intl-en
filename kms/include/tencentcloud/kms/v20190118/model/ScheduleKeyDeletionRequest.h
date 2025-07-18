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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEKEYDELETIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEKEYDELETIONREQUEST_H_

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
                * ScheduleKeyDeletion request structure.
                */
                class ScheduleKeyDeletionRequest : public AbstractModel
                {
                public:
                    ScheduleKeyDeletionRequest();
                    ~ScheduleKeyDeletionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique CMK ID
                     * @return KeyId Unique CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique CMK ID
                     * @param _keyId Unique CMK ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Schedule deletion time range. Value range: [7,30]
                     * @return PendingWindowInDays Schedule deletion time range. Value range: [7,30]
                     * 
                     */
                    uint64_t GetPendingWindowInDays() const;

                    /**
                     * 设置Schedule deletion time range. Value range: [7,30]
                     * @param _pendingWindowInDays Schedule deletion time range. Value range: [7,30]
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
                     * Unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Schedule deletion time range. Value range: [7,30]
                     */
                    uint64_t m_pendingWindowInDays;
                    bool m_pendingWindowInDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEKEYDELETIONREQUEST_H_
