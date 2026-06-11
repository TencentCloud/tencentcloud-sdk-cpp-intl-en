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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_

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
                * Dashboard subscription notification method
                */
                class DashboardNoticeMode : public AbstractModel
                {
                public:
                    DashboardNoticeMode();
                    ~DashboardNoticeMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dashboard notification method.

-Uin: Tencent Cloud user
-Group: Tencent Cloud user group
-WeCom: wecom callback
-Email: Custom email
-DingTalk
-Lark
                     * @return ReceiverType Dashboard notification method.

-Uin: Tencent Cloud user
-Group: Tencent Cloud user group
-WeCom: wecom callback
-Email: Custom email
-DingTalk
-Lark
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Dashboard notification method.

-Uin: Tencent Cloud user
-Group: Tencent Cloud user group
-WeCom: wecom callback
-Email: Custom email
-DingTalk
-Lark
                     * @param _receiverType Dashboard notification method.

-Uin: Tencent Cloud user
-Group: Tencent Cloud user group
-WeCom: wecom callback
-Email: Custom email
-DingTalk
-Lark
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Value of the known method.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, Values must be empty and the Url field is required.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Values field is required and the Url field must be empty.
-When ReceiverType is `Uin`, Values is the user id. Obtain the sub-user UID by [querying sub-users](https://www.tencentcloud.com/document/product/598/34587?from_cn_redirect=1).
-When ReceiverType is `Group`, Values is the user Group id. Obtain user Group id by querying the user Group list (https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1).
-When ReceiverType is `Email`, Values is the user email info.
                     * @return Values Value of the known method.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, Values must be empty and the Url field is required.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Values field is required and the Url field must be empty.
-When ReceiverType is `Uin`, Values is the user id. Obtain the sub-user UID by [querying sub-users](https://www.tencentcloud.com/document/product/598/34587?from_cn_redirect=1).
-When ReceiverType is `Group`, Values is the user Group id. Obtain user Group id by querying the user Group list (https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1).
-When ReceiverType is `Email`, Values is the user email info.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Value of the known method.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, Values must be empty and the Url field is required.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Values field is required and the Url field must be empty.
-When ReceiverType is `Uin`, Values is the user id. Obtain the sub-user UID by [querying sub-users](https://www.tencentcloud.com/document/product/598/34587?from_cn_redirect=1).
-When ReceiverType is `Group`, Values is the user Group id. Obtain user Group id by querying the user Group list (https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1).
-When ReceiverType is `Email`, Values is the user email info.
                     * @param _values Value of the known method.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, Values must be empty and the Url field is required.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Values field is required and the Url field must be empty.
-When ReceiverType is `Uin`, Values is the user id. Obtain the sub-user UID by [querying sub-users](https://www.tencentcloud.com/document/product/598/34587?from_cn_redirect=1).
-When ReceiverType is `Group`, Values is the user Group id. Obtain user Group id by querying the user Group list (https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1).
-When ReceiverType is `Email`, Values is the user email info.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Dashboard notification channel.

-Support: ["Email","Sms","WeChat","Phone"].
-When ReceiverType is `Email` or `WeCom`, ReceiverChannels is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverChannels Dashboard notification channel.

-Support: ["Email","Sms","WeChat","Phone"].
-When ReceiverType is `Email` or `WeCom`, ReceiverChannels is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置Dashboard notification channel.

-Support: ["Email","Sms","WeChat","Phone"].
-When ReceiverType is `Email` or `WeCom`, ReceiverChannels is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverChannels Dashboard notification channel.

-Support: ["Email","Sms","WeChat","Phone"].
-When ReceiverType is `Email` or `WeCom`, ReceiverChannels is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     * 
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取Subscription method - Callback URL.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, the Url field is required as the callback URL of each channel.
-When the value is `WeCom`, the Url is the enterprise wechat callback address.
-When the value is `DingTalk`, Url is the chatbot Webhook address.
-When `Lark`, Url is the chatbot Webhook address.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Url field must be empty.
                     * @return Url Subscription method - Callback URL.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, the Url field is required as the callback URL of each channel.
-When the value is `WeCom`, the Url is the enterprise wechat callback address.
-When the value is `DingTalk`, Url is the chatbot Webhook address.
-When `Lark`, Url is the chatbot Webhook address.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Url field must be empty.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Subscription method - Callback URL.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, the Url field is required as the callback URL of each channel.
-When the value is `WeCom`, the Url is the enterprise wechat callback address.
-When the value is `DingTalk`, Url is the chatbot Webhook address.
-When `Lark`, Url is the chatbot Webhook address.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Url field must be empty.
                     * @param _url Subscription method - Callback URL.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, the Url field is required as the callback URL of each channel.
-When the value is `WeCom`, the Url is the enterprise wechat callback address.
-When the value is `DingTalk`, Url is the chatbot Webhook address.
-When `Lark`, Url is the chatbot Webhook address.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Url field must be empty.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Dashboard notification method.

-Uin: Tencent Cloud user
-Group: Tencent Cloud user group
-WeCom: wecom callback
-Email: Custom email
-DingTalk
-Lark
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Value of the known method.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, Values must be empty and the Url field is required.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Values field is required and the Url field must be empty.
-When ReceiverType is `Uin`, Values is the user id. Obtain the sub-user UID by [querying sub-users](https://www.tencentcloud.com/document/product/598/34587?from_cn_redirect=1).
-When ReceiverType is `Group`, Values is the user Group id. Obtain user Group id by querying the user Group list (https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1).
-When ReceiverType is `Email`, Values is the user email info.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Dashboard notification channel.

-Support: ["Email","Sms","WeChat","Phone"].
-When ReceiverType is `Email` or `WeCom`, ReceiverChannels is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * Subscription method - Callback URL.
-When ReceiverType is `WeCom`, `DingTalk`, or `Lark`, the Url field is required as the callback URL of each channel.
-When the value is `WeCom`, the Url is the enterprise wechat callback address.
-When the value is `DingTalk`, Url is the chatbot Webhook address.
-When `Lark`, Url is the chatbot Webhook address.
-When ReceiverType is `Uin`, `Group`, or `Email`, the Url field must be empty.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
