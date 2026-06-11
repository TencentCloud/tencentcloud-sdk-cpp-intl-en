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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWebCallback request structure.
                */
                class ModifyWebCallbackRequest : public AbstractModel
                {
                public:
                    ModifyWebCallbackRequest();
                    ~ModifyWebCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm channel callback configuration ID. Obtain the alarm channel callback configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1).
                     * @return WebCallbackId Alarm channel callback configuration ID. Obtain the alarm channel callback configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1).
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置Alarm channel callback configuration ID. Obtain the alarm channel callback configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1).
                     * @param _webCallbackId Alarm channel callback configuration ID. Obtain the alarm channel callback configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1).
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
                     * 获取Alarm channel callback configuration name. Supports a maximum of 255 bytes.
                     * @return Name Alarm channel callback configuration name. Supports a maximum of 255 bytes.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm channel callback configuration name. Supports a maximum of 255 bytes.
                     * @param _name Alarm channel callback configuration name. Supports a maximum of 255 bytes.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Channel type

WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback;
                     * @return Type Channel type

WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback;
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Channel type

WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback;
                     * @param _type Channel type

WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback;
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Callback URL.
                     * @return Webhook Callback URL.
                     * 
                     */
                    std::string GetWebhook() const;

                    /**
                     * 设置Callback URL.
                     * @param _webhook Callback URL.
                     * 
                     */
                    void SetWebhook(const std::string& _webhook);

                    /**
                     * 判断参数 Webhook 是否已赋值
                     * @return Webhook 是否已赋值
                     * 
                     */
                    bool WebhookHasBeenSet() const;

                    /**
                     * 获取Request method.

Support POST, PUT.

Note: This parameter is required when Type is set to Http.
                     * @return Method Request method.

Support POST, PUT.

Note: This parameter is required when Type is set to Http.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method.

Support POST, PUT.

Note: This parameter is required when Type is set to Http.
                     * @param _method Request method.

Support POST, PUT.

Note: This parameter is required when Type is set to Http.
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
                     * 获取Secret key information. Supports a maximum of 1024 bytes.
                     * @return Key Secret key information. Supports a maximum of 1024 bytes.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Secret key information. Supports a maximum of 1024 bytes.
                     * @param _key Secret key information. Supports a maximum of 1024 bytes.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * Alarm channel callback configuration ID. Obtain the alarm channel callback configuration ID by searching the alarm channel callback configuration list (https://www.tencentcloud.com/document/api/614/115229?from_cn_redirect=1).
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                    /**
                     * Alarm channel callback configuration name. Supports a maximum of 255 bytes.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Channel type

WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback;
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Callback URL.
                     */
                    std::string m_webhook;
                    bool m_webhookHasBeenSet;

                    /**
                     * Request method.

Support POST, PUT.

Note: This parameter is required when Type is set to Http.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Secret key information. Supports a maximum of 1024 bytes.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_
