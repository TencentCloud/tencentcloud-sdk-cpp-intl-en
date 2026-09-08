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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DELETEIPWHITELISTINTERNATIONALREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DELETEIPWHITELISTINTERNATIONALREQUEST_H_

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
                * DeleteIpWhiteListInternational request structure.
                */
                class DeleteIpWhiteListInternationalRequest : public AbstractModel
                {
                public:
                    DeleteIpWhiteListInternationalRequest();
                    ~DeleteIpWhiteListInternationalRequest() = default;
                    std::string ToJsonString() const;


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

                private:

                    /**
                     * <p>Captcha appid</p>
                     */
                    int64_t m_captchaAppid;
                    bool m_captchaAppidHasBeenSet;

                    /**
                     * <p>Record number</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DELETEIPWHITELISTINTERNATIONALREQUEST_H_
