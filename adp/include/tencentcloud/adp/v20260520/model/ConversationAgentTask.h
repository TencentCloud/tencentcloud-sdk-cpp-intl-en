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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AgentTask Intelligent Agent task information
                */
                class ConversationAgentTask : public AbstractModel
                {
                public:
                    ConversationAgentTask();
                    ~ConversationAgentTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task content</p>
                     * @return Content <p>Task content</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Task content</p>
                     * @param _content <p>Task content</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Task number</p>
                     * @return Index <p>Task number</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>Task number</p>
                     * @param _index <p>Task number</p>
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>Task status. pending: to be executed, processing: processing, success: completed, failed: processing failure, stop: canceled</p>
                     * @return Status <p>Task status. pending: to be executed, processing: processing, success: completed, failed: processing failure, stop: canceled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status. pending: to be executed, processing: processing, success: completed, failed: processing failure, stop: canceled</p>
                     * @param _status <p>Task status. pending: to be executed, processing: processing, success: completed, failed: processing failure, stop: canceled</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Task content</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Task number</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Task status. pending: to be executed, processing: processing, success: completed, failed: processing failure, stop: canceled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONAGENTTASK_H_
