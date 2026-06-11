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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_

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
                * Alarm channel callback configuration information.
                */
                class WebCallbackInfo : public AbstractModel
                {
                public:
                    WebCallbackInfo();
                    ~WebCallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm channel callback configuration ID.
                     * @return WebCallbackId Alarm channel callback configuration ID.
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置Alarm channel callback configuration ID.
                     * @param _webCallbackId Alarm channel callback configuration ID.
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
                     * 获取Alarm channel callback configuration name.
                     * @return Name Alarm channel callback configuration name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm channel callback configuration name.
                     * @param _name Alarm channel callback configuration name.
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
                     * @return Method Request method.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method.
                     * @param _method Request method.
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
                     * 获取Key information.
                     * @return Key Key information.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key information.
                     * @param _key Key information.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Root account.
                     * @return Uin Root account.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Root account.
                     * @param _uin Root account.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-account.
                     * @return SubUin Sub-account.
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account.
                     * @param _subUin Sub-account.
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Creation time. A timestamp in seconds.
                     * @return CreateTime Creation time. A timestamp in seconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time. A timestamp in seconds.
                     * @param _createTime Creation time. A timestamp in seconds.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time. A timestamp in seconds.
                     * @return UpdateTime Update time. A timestamp in seconds.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update time. A timestamp in seconds.
                     * @param _updateTime Update time. A timestamp in seconds.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Alarm channel callback configuration ID.
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                    /**
                     * Alarm channel callback configuration name.
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
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Key information.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Root account.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account.
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Creation time. A timestamp in seconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time. A timestamp in seconds.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_
