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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ReplyMessage.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow run instance output information
                */
                class WorkflowRunOutput : public AbstractModel
                {
                public:
                    WorkflowRunOutput();
                    ~WorkflowRunOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow output
                     * @return Output Workflow output
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Workflow output
                     * @param _output Workflow output
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Current reply message
                     * @return LatestMessage Current reply message
                     * 
                     */
                    ReplyMessage GetLatestMessage() const;

                    /**
                     * 设置Current reply message
                     * @param _latestMessage Current reply message
                     * 
                     */
                    void SetLatestMessage(const ReplyMessage& _latestMessage);

                    /**
                     * 判断参数 LatestMessage 是否已赋值
                     * @return LatestMessage 是否已赋值
                     * 
                     */
                    bool LatestMessageHasBeenSet() const;

                private:

                    /**
                     * Workflow output
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Current reply message
                     */
                    ReplyMessage m_latestMessage;
                    bool m_latestMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNOUTPUT_H_
