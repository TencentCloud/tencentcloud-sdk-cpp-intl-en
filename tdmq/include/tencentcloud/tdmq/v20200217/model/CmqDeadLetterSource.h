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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Cmq DeadLetterSource
                */
                class CmqDeadLetterSource : public AbstractModel
                {
                public:
                    CmqDeadLetterSource();
                    ~CmqDeadLetterSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message queue ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return QueueId Message queue ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置Message queue ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _queueId Message queue ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取Message queue name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return QueueName Message queue name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Message queue name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _queueName Message queue name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * Message queue ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * Message queue name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERSOURCE_H_
