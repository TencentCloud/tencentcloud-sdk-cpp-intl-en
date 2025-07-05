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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAGINTL_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAGINTL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Login and sensitive operation flag
                */
                class LoginActionFlagIntl : public AbstractModel
                {
                public:
                    LoginActionFlagIntl();
                    ~LoginActionFlagIntl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mobile number
                     * @return Phone Mobile number
                     * 
                     */
                    uint64_t GetPhone() const;

                    /**
                     * 设置Mobile number
                     * @param _phone Mobile number
                     * 
                     */
                    void SetPhone(const uint64_t& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Hard token
                     * @return Token Hard token
                     * 
                     */
                    uint64_t GetToken() const;

                    /**
                     * 设置Hard token
                     * @param _token Hard token
                     * 
                     */
                    void SetToken(const uint64_t& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Soft token
                     * @return Stoken Soft token
                     * 
                     */
                    uint64_t GetStoken() const;

                    /**
                     * 设置Soft token
                     * @param _stoken Soft token
                     * 
                     */
                    void SetStoken(const uint64_t& _stoken);

                    /**
                     * 判断参数 Stoken 是否已赋值
                     * @return Stoken 是否已赋值
                     * 
                     */
                    bool StokenHasBeenSet() const;

                    /**
                     * 获取WeChat
                     * @return Wechat WeChat
                     * 
                     */
                    uint64_t GetWechat() const;

                    /**
                     * 设置WeChat
                     * @param _wechat WeChat
                     * 
                     */
                    void SetWechat(const uint64_t& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取Custom
                     * @return Custom Custom
                     * 
                     */
                    uint64_t GetCustom() const;

                    /**
                     * 设置Custom
                     * @param _custom Custom
                     * 
                     */
                    void SetCustom(const uint64_t& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                    /**
                     * 获取Email
                     * @return Mail Email
                     * 
                     */
                    uint64_t GetMail() const;

                    /**
                     * 设置Email
                     * @param _mail Email
                     * 
                     */
                    void SetMail(const uint64_t& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                private:

                    /**
                     * Mobile number
                     */
                    uint64_t m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Hard token
                     */
                    uint64_t m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Soft token
                     */
                    uint64_t m_stoken;
                    bool m_stokenHasBeenSet;

                    /**
                     * WeChat
                     */
                    uint64_t m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * Custom
                     */
                    uint64_t m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * Email
                     */
                    uint64_t m_mail;
                    bool m_mailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAGINTL_H_
