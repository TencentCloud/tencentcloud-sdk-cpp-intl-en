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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * HTTP header setting rules.
                */
                class HttpHeaderRule : public AbstractModel
                {
                public:
                    HttpHeaderRule();
                    ~HttpHeaderRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP header setting method. Valid values: `add` (add header), `set` (set header) or `del` (delete header).
                     * @return HeaderMode HTTP header setting method. Valid values: `add` (add header), `set` (set header) or `del` (delete header).
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置HTTP header setting method. Valid values: `add` (add header), `set` (set header) or `del` (delete header).
                     * @param _headerMode HTTP header setting method. Valid values: `add` (add header), `set` (set header) or `del` (delete header).
                     * 
                     */
                    void SetHeaderMode(const std::string& _headerMode);

                    /**
                     * 判断参数 HeaderMode 是否已赋值
                     * @return HeaderMode 是否已赋值
                     * 
                     */
                    bool HeaderModeHasBeenSet() const;

                    /**
                     * 获取HTTP header name
                     * @return HeaderName HTTP header name
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置HTTP header name
                     * @param _headerName HTTP header name
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取HTTP header value
                     * @return HeaderValue HTTP header value
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置HTTP header value
                     * @param _headerValue HTTP header value
                     * 
                     */
                    void SetHeaderValue(const std::string& _headerValue);

                    /**
                     * 判断参数 HeaderValue 是否已赋值
                     * @return HeaderValue 是否已赋值
                     * 
                     */
                    bool HeaderValueHasBeenSet() const;

                private:

                    /**
                     * HTTP header setting method. Valid values: `add` (add header), `set` (set header) or `del` (delete header).
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * HTTP header name
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * HTTP header value
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERRULE_H_
