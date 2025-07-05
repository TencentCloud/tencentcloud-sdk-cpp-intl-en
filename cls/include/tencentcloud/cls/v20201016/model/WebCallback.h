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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_

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
                * Callback address
                */
                class WebCallback : public AbstractModel
                {
                public:
                    WebCallback();
                    ~WebCallback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Callback address
                     * @return Url Callback address
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Callback address
                     * @param _url Callback address
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Callback type. Valid values:
<li> WeCom
<li> Http
                     * @return CallbackType Callback type. Valid values:
<li> WeCom
<li> Http
                     * 
                     */
                    std::string GetCallbackType() const;

                    /**
                     * 设置Callback type. Valid values:
<li> WeCom
<li> Http
                     * @param _callbackType Callback type. Valid values:
<li> WeCom
<li> Http
                     * 
                     */
                    void SetCallbackType(const std::string& _callbackType);

                    /**
                     * 判断参数 CallbackType 是否已赋值
                     * @return CallbackType 是否已赋值
                     * 
                     */
                    bool CallbackTypeHasBeenSet() const;

                    /**
                     * 获取Callback method. Valid values:
<li> POST
<li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Method Callback method. Valid values:
<li> POST
<li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Callback method. Valid values:
<li> POST
<li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _method Callback method. Valid values:
<li> POST
<li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Request header
Note: This parameter is disused. To specify request headers, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Headers Request header
Note: This parameter is disused. To specify request headers, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置Request header
Note: This parameter is disused. To specify request headers, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _headers Request header
Note: This parameter is disused. To specify request headers, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Request content
Note: This parameter is disused. To specify request content, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Body Request content
Note: This parameter is disused. To specify request content, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Request content
Note: This parameter is disused. To specify request content, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _body Request content
Note: This parameter is disused. To specify request content, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Number
                     * @return Index Number
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Number
                     * @param _index Number
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Callback address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Callback type. Valid values:
<li> WeCom
<li> Http
                     */
                    std::string m_callbackType;
                    bool m_callbackTypeHasBeenSet;

                    /**
                     * Callback method. Valid values:
<li> POST
<li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Request header
Note: This parameter is disused. To specify request headers, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Request content
Note: This parameter is disused. To specify request content, see `CallBack` in <a href="https://intl.cloud.tencent.com/document/product/614/56466?from_cn_redirect=1">CreateAlarmNotice</a>.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Number
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
