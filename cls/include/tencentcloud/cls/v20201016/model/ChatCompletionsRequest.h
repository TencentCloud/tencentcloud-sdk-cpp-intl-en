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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Message.h>
#include <tencentcloud/cls/v20201016/model/MetadataItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ChatCompletions request structure.
                */
                class ChatCompletionsRequest : public AbstractModel
                {
                public:
                    ChatCompletionsRequest();
                    ~ChatCompletionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * @return Model <p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * @param _model <p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Chat context information.<br>Description:</p><ol><li>The maximum length is 11 (5 historical sessions + new user question), arranged in the array in chronological order from old to new. Session data beyond this length will be discarded.</li><li>Message.Role available values: user, assistant.<br>user and assistant must alternate, starting with a user question and ending with a user question. Content cannot be empty. Example of Role order: [user assistant user assistant user ...].</li></ol>
                     * @return Messages <p>Chat context information.<br>Description:</p><ol><li>The maximum length is 11 (5 historical sessions + new user question), arranged in the array in chronological order from old to new. Session data beyond this length will be discarded.</li><li>Message.Role available values: user, assistant.<br>user and assistant must alternate, starting with a user question and ending with a user question. Content cannot be empty. Example of Role order: [user assistant user assistant user ...].</li></ol>
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置<p>Chat context information.<br>Description:</p><ol><li>The maximum length is 11 (5 historical sessions + new user question), arranged in the array in chronological order from old to new. Session data beyond this length will be discarded.</li><li>Message.Role available values: user, assistant.<br>user and assistant must alternate, starting with a user question and ending with a user question. Content cannot be empty. Example of Role order: [user assistant user assistant user ...].</li></ol>
                     * @param _messages <p>Chat context information.<br>Description:</p><ol><li>The maximum length is 11 (5 historical sessions + new user question), arranged in the array in chronological order from old to new. Session data beyond this length will be discarded.</li><li>Message.Role available values: user, assistant.<br>user and assistant must alternate, starting with a user question and ending with a user question. Content cannot be empty. Example of Role order: [user assistant user assistant user ...].</li></ol>
                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>Streaming call switch.<br>Description:</p><ol><li>Defaults to non-streaming call (false) when no value is passed.</li><li>In streaming calls, results are incrementally returned via SSE protocol (return value is taken from Choices[n].Delta, and incremental data needs to be concatenated to obtain the complete result).</li><li>In non-streaming calls:<br>The calling method is the same as a regular HTTP request.<br>API response is time-consuming. If reduced latency is needed, set it to true.<br>Only the final result is returned once (return value is taken from Choices[n].Message).</li></ol><p>Note:</p><ol><li>When calling via SDK, streaming and non-streaming calls require different ways to obtain return values. Refer to comments or examples in the SDK (in the examples/cls/v20201016/ directory of each language SDK code repository).</li><li>Partial content may have been output, but if the FinishReason value in an intermediate response is "sensitive", it indicates the security review was not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and customize a replacement reminder, such as "I can't answer this question. Let's try another topic", to ensure terminal experience.</li></ol>
                     * @return Stream <p>Streaming call switch.<br>Description:</p><ol><li>Defaults to non-streaming call (false) when no value is passed.</li><li>In streaming calls, results are incrementally returned via SSE protocol (return value is taken from Choices[n].Delta, and incremental data needs to be concatenated to obtain the complete result).</li><li>In non-streaming calls:<br>The calling method is the same as a regular HTTP request.<br>API response is time-consuming. If reduced latency is needed, set it to true.<br>Only the final result is returned once (return value is taken from Choices[n].Message).</li></ol><p>Note:</p><ol><li>When calling via SDK, streaming and non-streaming calls require different ways to obtain return values. Refer to comments or examples in the SDK (in the examples/cls/v20201016/ directory of each language SDK code repository).</li><li>Partial content may have been output, but if the FinishReason value in an intermediate response is "sensitive", it indicates the security review was not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and customize a replacement reminder, such as "I can't answer this question. Let's try another topic", to ensure terminal experience.</li></ol>
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置<p>Streaming call switch.<br>Description:</p><ol><li>Defaults to non-streaming call (false) when no value is passed.</li><li>In streaming calls, results are incrementally returned via SSE protocol (return value is taken from Choices[n].Delta, and incremental data needs to be concatenated to obtain the complete result).</li><li>In non-streaming calls:<br>The calling method is the same as a regular HTTP request.<br>API response is time-consuming. If reduced latency is needed, set it to true.<br>Only the final result is returned once (return value is taken from Choices[n].Message).</li></ol><p>Note:</p><ol><li>When calling via SDK, streaming and non-streaming calls require different ways to obtain return values. Refer to comments or examples in the SDK (in the examples/cls/v20201016/ directory of each language SDK code repository).</li><li>Partial content may have been output, but if the FinishReason value in an intermediate response is "sensitive", it indicates the security review was not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and customize a replacement reminder, such as "I can't answer this question. Let's try another topic", to ensure terminal experience.</li></ol>
                     * @param _stream <p>Streaming call switch.<br>Description:</p><ol><li>Defaults to non-streaming call (false) when no value is passed.</li><li>In streaming calls, results are incrementally returned via SSE protocol (return value is taken from Choices[n].Delta, and incremental data needs to be concatenated to obtain the complete result).</li><li>In non-streaming calls:<br>The calling method is the same as a regular HTTP request.<br>API response is time-consuming. If reduced latency is needed, set it to true.<br>Only the final result is returned once (return value is taken from Choices[n].Message).</li></ol><p>Note:</p><ol><li>When calling via SDK, streaming and non-streaming calls require different ways to obtain return values. Refer to comments or examples in the SDK (in the examples/cls/v20201016/ directory of each language SDK code repository).</li><li>Partial content may have been output, but if the FinishReason value in an intermediate response is "sensitive", it indicates the security review was not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and customize a replacement reminder, such as "I can't answer this question. Let's try another topic", to ensure terminal experience.</li></ol>
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取<p>Additional metadata information. For example: [{"Key":"topic_id","Value":"xxxxxxxx-xxxx"},{"Key":"topic_region","Value":"ap-guangzhou"}]</p><p>It is recommended to transmit metadata information as per the example, otherwise it may cause inaccurate results. For example, in text2sql, not passing topic_id or topic_region will lead to unable to generate accurate query statements based on the log topic index.</p>
                     * @return Metadata <p>Additional metadata information. For example: [{"Key":"topic_id","Value":"xxxxxxxx-xxxx"},{"Key":"topic_region","Value":"ap-guangzhou"}]</p><p>It is recommended to transmit metadata information as per the example, otherwise it may cause inaccurate results. For example, in text2sql, not passing topic_id or topic_region will lead to unable to generate accurate query statements based on the log topic index.</p>
                     * 
                     */
                    std::vector<MetadataItem> GetMetadata() const;

                    /**
                     * 设置<p>Additional metadata information. For example: [{"Key":"topic_id","Value":"xxxxxxxx-xxxx"},{"Key":"topic_region","Value":"ap-guangzhou"}]</p><p>It is recommended to transmit metadata information as per the example, otherwise it may cause inaccurate results. For example, in text2sql, not passing topic_id or topic_region will lead to unable to generate accurate query statements based on the log topic index.</p>
                     * @param _metadata <p>Additional metadata information. For example: [{"Key":"topic_id","Value":"xxxxxxxx-xxxx"},{"Key":"topic_region","Value":"ap-guangzhou"}]</p><p>It is recommended to transmit metadata information as per the example, otherwise it may cause inaccurate results. For example, in text2sql, not passing topic_id or topic_region will lead to unable to generate accurate query statements based on the log topic index.</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataItem>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Chat context information.<br>Description:</p><ol><li>The maximum length is 11 (5 historical sessions + new user question), arranged in the array in chronological order from old to new. Session data beyond this length will be discarded.</li><li>Message.Role available values: user, assistant.<br>user and assistant must alternate, starting with a user question and ending with a user question. Content cannot be empty. Example of Role order: [user assistant user assistant user ...].</li></ol>
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>Streaming call switch.<br>Description:</p><ol><li>Defaults to non-streaming call (false) when no value is passed.</li><li>In streaming calls, results are incrementally returned via SSE protocol (return value is taken from Choices[n].Delta, and incremental data needs to be concatenated to obtain the complete result).</li><li>In non-streaming calls:<br>The calling method is the same as a regular HTTP request.<br>API response is time-consuming. If reduced latency is needed, set it to true.<br>Only the final result is returned once (return value is taken from Choices[n].Message).</li></ol><p>Note:</p><ol><li>When calling via SDK, streaming and non-streaming calls require different ways to obtain return values. Refer to comments or examples in the SDK (in the examples/cls/v20201016/ directory of each language SDK code repository).</li><li>Partial content may have been output, but if the FinishReason value in an intermediate response is "sensitive", it indicates the security review was not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and customize a replacement reminder, such as "I can't answer this question. Let's try another topic", to ensure terminal experience.</li></ol>
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * <p>Additional metadata information. For example: [{"Key":"topic_id","Value":"xxxxxxxx-xxxx"},{"Key":"topic_region","Value":"ap-guangzhou"}]</p><p>It is recommended to transmit metadata information as per the example, otherwise it may cause inaccurate results. For example, in text2sql, not passing topic_id or topic_region will lead to unable to generate accurate query statements based on the log topic index.</p>
                     */
                    std::vector<MetadataItem> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSREQUEST_H_
