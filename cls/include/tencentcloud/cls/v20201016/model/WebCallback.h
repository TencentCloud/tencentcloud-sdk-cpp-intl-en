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
                     * 获取Callback type. Valid values:
-Http (custom webhook configuration)
-WeCom
-DingTalk
-Lark
                     * @return CallbackType Callback type. Valid values:
-Http (custom webhook configuration)
-WeCom
-DingTalk
-Lark
                     * 
                     */
                    std::string GetCallbackType() const;

                    /**
                     * 设置Callback type. Valid values:
-Http (custom webhook configuration)
-WeCom
-DingTalk
-Lark
                     * @param _callbackType Callback type. Valid values:
-Http (custom webhook configuration)
-WeCom
-DingTalk
-Lark
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
                     * 获取Callback URL, supports a maximum of 1024 bytes.
You can also use WebCallbackId to refer to the URL in the integration configuration. At this point, please enter an empty string for this field.
                     * @return Url Callback URL, supports a maximum of 1024 bytes.
You can also use WebCallbackId to refer to the URL in the integration configuration. At this point, please enter an empty string for this field.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Callback URL, supports a maximum of 1024 bytes.
You can also use WebCallbackId to refer to the URL in the integration configuration. At this point, please enter an empty string for this field.
                     * @param _url Callback URL, supports a maximum of 1024 bytes.
You can also use WebCallbackId to refer to the URL in the integration configuration. At this point, please enter an empty string for this field.
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
                     * 获取Integration configuration ID. Obtain the integration configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/product/614/115229?from_cn_redirect=1).
                     * @return WebCallbackId Integration configuration ID. Obtain the integration configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/product/614/115229?from_cn_redirect=1).
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置Integration configuration ID. Obtain the integration configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/product/614/115229?from_cn_redirect=1).
                     * @param _webCallbackId Integration configuration ID. Obtain the integration configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/product/614/115229?from_cn_redirect=1).
                     * 
                     */
                    void SetWebCallbackId(const std::string& _webCallbackId);

                    /**
                     * 判断参数 WebCallbackId 是否已赋值
                     * @return WebCallbackId 是否已赋值
                     * 
                     */
                    bool WebCallbackIdHasBeenSet() const;

                    /**
                     * 获取Callback method. Valid values:
-POST (default value)
- PUT

Note:
-Required when CallbackType is Http. No need to specify for other callback methods.
                     * @return Method Callback method. Valid values:
-POST (default value)
- PUT

Note:
-Required when CallbackType is Http. No need to specify for other callback methods.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Callback method. Valid values:
-POST (default value)
- PUT

Note:
-Required when CallbackType is Http. No need to specify for other callback methods.
                     * @param _method Callback method. Valid values:
-POST (default value)
- PUT

Note:
-Required when CallbackType is Http. No need to specify for other callback methods.
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
                     * 获取Notification content template ID. When Default-zh is used, DefaultTemplate (Chinese) is referenced. When Default-en is used, DefaultTemplate (English) is referenced.
                     * @return NoticeContentId Notification content template ID. When Default-zh is used, DefaultTemplate (Chinese) is referenced. When Default-en is used, DefaultTemplate (English) is referenced.
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置Notification content template ID. When Default-zh is used, DefaultTemplate (Chinese) is referenced. When Default-en is used, DefaultTemplate (English) is referenced.
                     * @param _noticeContentId Notification content template ID. When Default-zh is used, DefaultTemplate (Chinese) is referenced. When Default-en is used, DefaultTemplate (English) is referenced.
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取Reminder type.

0: No reminder; 1: Specified individual; 2: Everyone
                     * @return RemindType Reminder type.

0: No reminder; 1: Specified individual; 2: Everyone
                     * 
                     */
                    uint64_t GetRemindType() const;

                    /**
                     * 设置Reminder type.

0: No reminder; 1: Specified individual; 2: Everyone
                     * @param _remindType Reminder type.

0: No reminder; 1: Specified individual; 2: Everyone
                     * 
                     */
                    void SetRemindType(const uint64_t& _remindType);

                    /**
                     * 判断参数 RemindType 是否已赋值
                     * @return RemindType 是否已赋值
                     * 
                     */
                    bool RemindTypeHasBeenSet() const;

                    /**
                     * 获取Mobile phone list.
                     * @return Mobiles Mobile phone list.
                     * 
                     */
                    std::vector<std::string> GetMobiles() const;

                    /**
                     * 设置Mobile phone list.
                     * @param _mobiles Mobile phone list.
                     * 
                     */
                    void SetMobiles(const std::vector<std::string>& _mobiles);

                    /**
                     * 判断参数 Mobiles 是否已赋值
                     * @return Mobiles 是否已赋值
                     * 
                     */
                    bool MobilesHasBeenSet() const;

                    /**
                     * 获取User ID list.
                     * @return UserIds User ID list.
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置User ID list.
                     * @param _userIds User ID list.
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取This parameter is deprecated. Please use NoticeContentId.
                     * @return Headers This parameter is deprecated. Please use NoticeContentId.
                     * @deprecated
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置This parameter is deprecated. Please use NoticeContentId.
                     * @param _headers This parameter is deprecated. Please use NoticeContentId.
                     * @deprecated
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * @deprecated
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取This parameter is deprecated. Please use NoticeContentId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Body This parameter is deprecated. Please use NoticeContentId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetBody() const;

                    /**
                     * 设置This parameter is deprecated. Please use NoticeContentId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _body This parameter is deprecated. Please use NoticeContentId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * @deprecated
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取Serial number.
-Invalid input parameter.
-Output parameter is valid.
                     * @return Index Serial number.
-Invalid input parameter.
-Output parameter is valid.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Serial number.
-Invalid input parameter.
-Output parameter is valid.
                     * @param _index Serial number.
-Invalid input parameter.
-Output parameter is valid.
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
                     * Callback type. Valid values:
-Http (custom webhook configuration)
-WeCom
-DingTalk
-Lark
                     */
                    std::string m_callbackType;
                    bool m_callbackTypeHasBeenSet;

                    /**
                     * Callback URL, supports a maximum of 1024 bytes.
You can also use WebCallbackId to refer to the URL in the integration configuration. At this point, please enter an empty string for this field.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Integration configuration ID. Obtain the integration configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/product/614/115229?from_cn_redirect=1).
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                    /**
                     * Callback method. Valid values:
-POST (default value)
- PUT

Note:
-Required when CallbackType is Http. No need to specify for other callback methods.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Notification content template ID. When Default-zh is used, DefaultTemplate (Chinese) is referenced. When Default-en is used, DefaultTemplate (English) is referenced.
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * Reminder type.

0: No reminder; 1: Specified individual; 2: Everyone
                     */
                    uint64_t m_remindType;
                    bool m_remindTypeHasBeenSet;

                    /**
                     * Mobile phone list.
                     */
                    std::vector<std::string> m_mobiles;
                    bool m_mobilesHasBeenSet;

                    /**
                     * User ID list.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * This parameter is deprecated. Please use NoticeContentId.
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * This parameter is deprecated. Please use NoticeContentId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Serial number.
-Invalid input parameter.
-Output parameter is valid.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
