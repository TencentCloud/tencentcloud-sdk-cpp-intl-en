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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * information
                */
                class FixedResponseInfo : public AbstractModel
                {
                public:
                    FixedResponseInfo();
                    ~FixedResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP response code returned. 2xx, 4xx, and 5xx are supported.
                     * @return HttpCode HTTP response code returned. 2xx, 4xx, and 5xx are supported.
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置HTTP response code returned. 2xx, 4xx, and 5xx are supported.
                     * @param _httpCode HTTP response code returned. 2xx, 4xx, and 5xx are supported.
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取Fixed content returned. Supports only ASCII characters, up to 1 KB.
                     * @return Content Fixed content returned. Supports only ASCII characters, up to 1 KB.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Fixed content returned. Supports only ASCII characters, up to 1 KB.
                     * @param _content Fixed content returned. Supports only ASCII characters, up to 1 KB.
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
                     * 获取Format of the returned fixed content.
Value: text/plain, text/css, text/html, application/javascript, or application/json.
                     * @return ContentType Format of the returned fixed content.
Value: text/plain, text/css, text/html, application/javascript, or application/json.
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置Format of the returned fixed content.
Value: text/plain, text/css, text/html, application/javascript, or application/json.
                     * @param _contentType Format of the returned fixed content.
Value: text/plain, text/css, text/html, application/javascript, or application/json.
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * HTTP response code returned. 2xx, 4xx, and 5xx are supported.
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Fixed content returned. Supports only ASCII characters, up to 1 KB.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Format of the returned fixed content.
Value: text/plain, text/css, text/html, application/javascript, or application/json.
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_
