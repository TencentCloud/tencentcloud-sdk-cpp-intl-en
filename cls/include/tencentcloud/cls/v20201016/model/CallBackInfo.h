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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_

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
                * Callback configuration
                */
                class CallBackInfo : public AbstractModel
                {
                public:
                    CallBackInfo();
                    ~CallBackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Callback Body.
Place various alarm variables in the request content. For details, see the help documentation (https://www.tencentcloud.com/document/product/614/74718?from_cn_redirect=1).
in the following example:

```
{
"TopicId": "{{ .QueryLog[0][0].topicId }}",
"key": "{{.Alarm}}",
"time": "{{ .QueryLog[0][0].time }}",
"log": "{{ .QueryLog[0][0].content.__CONTENT__ }}",
"namespace": "{{ .QueryLog[0][0].content.__TAG__.namespace }}"
}
```
                     * @return Body Callback Body.
Place various alarm variables in the request content. For details, see the help documentation (https://www.tencentcloud.com/document/product/614/74718?from_cn_redirect=1).
in the following example:

```
{
"TopicId": "{{ .QueryLog[0][0].topicId }}",
"key": "{{.Alarm}}",
"time": "{{ .QueryLog[0][0].time }}",
"log": "{{ .QueryLog[0][0].content.__CONTENT__ }}",
"namespace": "{{ .QueryLog[0][0].content.__TAG__.namespace }}"
}
```
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Callback Body.
Place various alarm variables in the request content. For details, see the help documentation (https://www.tencentcloud.com/document/product/614/74718?from_cn_redirect=1).
in the following example:

```
{
"TopicId": "{{ .QueryLog[0][0].topicId }}",
"key": "{{.Alarm}}",
"time": "{{ .QueryLog[0][0].time }}",
"log": "{{ .QueryLog[0][0].content.__CONTENT__ }}",
"namespace": "{{ .QueryLog[0][0].content.__TAG__.namespace }}"
}
```
                     * @param _body Callback Body.
Place various alarm variables in the request content. For details, see the help documentation (https://www.tencentcloud.com/document/product/614/74718?from_cn_redirect=1).
in the following example:

```
{
"TopicId": "{{ .QueryLog[0][0].topicId }}",
"key": "{{.Alarm}}",
"time": "{{ .QueryLog[0][0].time }}",
"log": "{{ .QueryLog[0][0].content.__CONTENT__ }}",
"namespace": "{{ .QueryLog[0][0].content.__TAG__.namespace }}"
}
```
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取HTTP request header field for callbacks.
For example, the following request header field informs the server request content type is JSON.
```
"Content-Type: application/json"
```
                     * @return Headers HTTP request header field for callbacks.
For example, the following request header field informs the server request content type is JSON.
```
"Content-Type: application/json"
```
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置HTTP request header field for callbacks.
For example, the following request header field informs the server request content type is JSON.
```
"Content-Type: application/json"
```
                     * @param _headers HTTP request header field for callbacks.
For example, the following request header field informs the server request content type is JSON.
```
"Content-Type: application/json"
```
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
                     * Callback Body.
Place various alarm variables in the request content. For details, see the help documentation (https://www.tencentcloud.com/document/product/614/74718?from_cn_redirect=1).
in the following example:

```
{
"TopicId": "{{ .QueryLog[0][0].topicId }}",
"key": "{{.Alarm}}",
"time": "{{ .QueryLog[0][0].time }}",
"log": "{{ .QueryLog[0][0].content.__CONTENT__ }}",
"namespace": "{{ .QueryLog[0][0].content.__TAG__.namespace }}"
}
```
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * HTTP request header field for callbacks.
For example, the following request header field informs the server request content type is JSON.
```
"Content-Type: application/json"
```
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_
