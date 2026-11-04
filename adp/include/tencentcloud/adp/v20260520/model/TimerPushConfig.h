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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_

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
                * TimerPushConfig
                */
                class TimerPushConfig : public AbstractModel
                {
                public:
                    TimerPushConfig();
                    ~TimerPushConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | Do not push |<br>| 2 | WeChat official account |<br>| 3 | WeCom AI chatbot |</p>
                     * @return PushChannel <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | Do not push |<br>| 2 | WeChat official account |<br>| 3 | WeCom AI chatbot |</p>
                     * 
                     */
                    int64_t GetPushChannel() const;

                    /**
                     * 设置<p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | Do not push |<br>| 2 | WeChat official account |<br>| 3 | WeCom AI chatbot |</p>
                     * @param _pushChannel <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | Do not push |<br>| 2 | WeChat official account |<br>| 3 | WeCom AI chatbot |</p>
                     * 
                     */
                    void SetPushChannel(const int64_t& _pushChannel);

                    /**
                     * 判断参数 PushChannel 是否已赋值
                     * @return PushChannel 是否已赋值
                     * 
                     */
                    bool PushChannelHasBeenSet() const;

                    /**
                     * 获取<p>Push session ID</p>
                     * @return PushTargetId <p>Push session ID</p>
                     * 
                     */
                    std::string GetPushTargetId() const;

                    /**
                     * 设置<p>Push session ID</p>
                     * @param _pushTargetId <p>Push session ID</p>
                     * 
                     */
                    void SetPushTargetId(const std::string& _pushTargetId);

                    /**
                     * 判断参数 PushTargetId 是否已赋值
                     * @return PushTargetId 是否已赋值
                     * 
                     */
                    bool PushTargetIdHasBeenSet() const;

                    /**
                     * 获取<p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | User (WeChat official account openid) |<br>| 2 | Group chat (WeCom chatbot chat_id) |</p>
                     * @return PushTargetType <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | User (WeChat official account openid) |<br>| 2 | Group chat (WeCom chatbot chat_id) |</p>
                     * 
                     */
                    int64_t GetPushTargetType() const;

                    /**
                     * 设置<p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | User (WeChat official account openid) |<br>| 2 | Group chat (WeCom chatbot chat_id) |</p>
                     * @param _pushTargetType <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | User (WeChat official account openid) |<br>| 2 | Group chat (WeCom chatbot chat_id) |</p>
                     * 
                     */
                    void SetPushTargetType(const int64_t& _pushTargetType);

                    /**
                     * 判断参数 PushTargetType 是否已赋值
                     * @return PushTargetType 是否已赋值
                     * 
                     */
                    bool PushTargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>url for pushing webhook</p>
                     * @return PushWebhookUrl <p>url for pushing webhook</p>
                     * 
                     */
                    std::string GetPushWebhookUrl() const;

                    /**
                     * 设置<p>url for pushing webhook</p>
                     * @param _pushWebhookUrl <p>url for pushing webhook</p>
                     * 
                     */
                    void SetPushWebhookUrl(const std::string& _pushWebhookUrl);

                    /**
                     * 判断参数 PushWebhookUrl 是否已赋值
                     * @return PushWebhookUrl 是否已赋值
                     * 
                     */
                    bool PushWebhookUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | Do not push |<br>| 2 | WeChat official account |<br>| 3 | WeCom AI chatbot |</p>
                     */
                    int64_t m_pushChannel;
                    bool m_pushChannelHasBeenSet;

                    /**
                     * <p>Push session ID</p>
                     */
                    std::string m_pushTargetId;
                    bool m_pushTargetIdHasBeenSet;

                    /**
                     * <p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 |  |<br>| 1 | User (WeChat official account openid) |<br>| 2 | Group chat (WeCom chatbot chat_id) |</p>
                     */
                    int64_t m_pushTargetType;
                    bool m_pushTargetTypeHasBeenSet;

                    /**
                     * <p>url for pushing webhook</p>
                     */
                    std::string m_pushWebhookUrl;
                    bool m_pushWebhookUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_
