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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PublishCmqMsg request structure.
                */
                class PublishCmqMsgRequest : public AbstractModel
                {
                public:
                    PublishCmqMsgRequest();
                    ~PublishCmqMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param TopicName Topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Message content
                     * @return MsgContent Message content
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置Message content
                     * @param MsgContent Message content
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     */
                    bool MsgContentHasBeenSet() const;

                    /**
                     * 获取Message tag
                     * @return MsgTag Message tag
                     */
                    std::vector<std::string> GetMsgTag() const;

                    /**
                     * 设置Message tag
                     * @param MsgTag Message tag
                     */
                    void SetMsgTag(const std::vector<std::string>& _msgTag);

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     */
                    bool MsgTagHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Message content
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                    /**
                     * Message tag
                     */
                    std::vector<std::string> m_msgTag;
                    bool m_msgTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGREQUEST_H_
