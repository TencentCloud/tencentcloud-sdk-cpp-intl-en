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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKARECHARGESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKARECHARGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeKafkaRecharges request structure.
                */
                class DescribeKafkaRechargesRequest : public AbstractModel
                {
                public:
                    DescribeKafkaRechargesRequest();
                    ~DescribeKafkaRechargesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Import configuration ID
                     * @return Id Import configuration ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Import configuration ID
                     * @param _id Import configuration ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: 1 (running) and 2 (suspended).
                     * @return Status Status. Valid values: 1 (running) and 2 (suspended).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. Valid values: 1 (running) and 2 (suspended).
                     * @param _status Status. Valid values: 1 (running) and 2 (suspended).
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Import configuration ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Status. Valid values: 1 (running) and 2 (suspended).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKARECHARGESREQUEST_H_
