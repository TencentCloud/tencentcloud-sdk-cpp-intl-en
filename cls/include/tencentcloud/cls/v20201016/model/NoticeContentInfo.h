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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Notification template content.
                */
                class NoticeContentInfo : public AbstractModel
                {
                public:
                    NoticeContentInfo();
                    ~NoticeContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification content template title information.
Some notification channel types do not support "title". See the Tencent Cloud Console page (https://console.cloud.tencent.com/cls/alarm/notice-template).
                     * @return Title Notification content template title information.
Some notification channel types do not support "title". See the Tencent Cloud Console page (https://console.cloud.tencent.com/cls/alarm/notice-template).
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Notification content template title information.
Some notification channel types do not support "title". See the Tencent Cloud Console page (https://console.cloud.tencent.com/cls/alarm/notice-template).
                     * @param _title Notification content template title information.
Some notification channel types do not support "title". See the Tencent Cloud Console page (https://console.cloud.tencent.com/cls/alarm/notice-template).
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Body information of a notification content template.
                     * @return Content Body information of a notification content template.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Body information of a notification content template.
                     * @param _content Body information of a notification content template.
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
                     * 获取Request Headers: The Request header in an HTTP Request contains additional information sent to server, such as user agent, authorization credentials, expected response format.
Only "Custom Callback" supports this configuration.
                     * @return Headers Request Headers: The Request header in an HTTP Request contains additional information sent to server, such as user agent, authorization credentials, expected response format.
Only "Custom Callback" supports this configuration.
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置Request Headers: The Request header in an HTTP Request contains additional information sent to server, such as user agent, authorization credentials, expected response format.
Only "Custom Callback" supports this configuration.
                     * @param _headers Request Headers: The Request header in an HTTP Request contains additional information sent to server, such as user agent, authorization credentials, expected response format.
Only "Custom Callback" supports this configuration.
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * Notification content template title information.
Some notification channel types do not support "title". See the Tencent Cloud Console page (https://console.cloud.tencent.com/cls/alarm/notice-template).
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Body information of a notification content template.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Request Headers: The Request header in an HTTP Request contains additional information sent to server, such as user agent, authorization credentials, expected response format.
Only "Custom Callback" supports this configuration.
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_
