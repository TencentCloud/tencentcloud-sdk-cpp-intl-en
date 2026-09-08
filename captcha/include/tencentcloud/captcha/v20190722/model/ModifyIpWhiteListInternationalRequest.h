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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_MODIFYIPWHITELISTINTERNATIONALREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_MODIFYIPWHITELISTINTERNATIONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyIpWhiteListInternational request structure.
                */
                class ModifyIpWhiteListInternationalRequest : public AbstractModel
                {
                public:
                    ModifyIpWhiteListInternationalRequest();
                    ~ModifyIpWhiteListInternationalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ip allowlist name</p>
                     * @return Name <p>ip allowlist name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>ip allowlist name</p>
                     * @param _name <p>ip allowlist name</p>
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
                     * 获取<p>Record number</p>
                     * @return Id <p>Record number</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Record number</p>
                     * @param _id <p>Record number</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Captcha appid</p>
                     * @return CaptchaAppid <p>Captcha appid</p>
                     * 
                     */
                    int64_t GetCaptchaAppid() const;

                    /**
                     * 设置<p>Captcha appid</p>
                     * @param _captchaAppid <p>Captcha appid</p>
                     * 
                     */
                    void SetCaptchaAppid(const int64_t& _captchaAppid);

                    /**
                     * 判断参数 CaptchaAppid 是否已赋值
                     * @return CaptchaAppid 是否已赋值
                     * 
                     */
                    bool CaptchaAppidHasBeenSet() const;

                    /**
                     * 获取<p>IP whitelist status</p><p>Enumeration values:</p><ul><li>0: enable</li><li>1: disable</li></ul>
                     * @return Status <p>IP whitelist status</p><p>Enumeration values:</p><ul><li>0: enable</li><li>1: disable</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>IP whitelist status</p><p>Enumeration values:</p><ul><li>0: enable</li><li>1: disable</li></ul>
                     * @param _status <p>IP whitelist status</p><p>Enumeration values:</p><ul><li>0: enable</li><li>1: disable</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Remark information.</p>
                     * @return Comment <p>Remark information.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Remark information.</p>
                     * @param _comment <p>Remark information.</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * <p>ip allowlist name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Record number</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Captcha appid</p>
                     */
                    int64_t m_captchaAppid;
                    bool m_captchaAppidHasBeenSet;

                    /**
                     * <p>IP whitelist status</p><p>Enumeration values:</p><ul><li>0: enable</li><li>1: disable</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Remark information.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_MODIFYIPWHITELISTINTERNATIONALREQUEST_H_
