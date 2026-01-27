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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Email blocklist structure describes the blocked email address, blocklist time, and reason.
                */
                class BlackEmailAddress : public AbstractModel
                {
                public:
                    BlackEmailAddress();
                    ~BlackEmailAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time when the email address is blocklisted.
                     * @return BounceTime Time when the email address is blocklisted.
                     * 
                     */
                    std::string GetBounceTime() const;

                    /**
                     * 设置Time when the email address is blocklisted.
                     * @param _bounceTime Time when the email address is blocklisted.
                     * 
                     */
                    void SetBounceTime(const std::string& _bounceTime);

                    /**
                     * 判断参数 BounceTime 是否已赋值
                     * @return BounceTime 是否已赋值
                     * 
                     */
                    bool BounceTimeHasBeenSet() const;

                    /**
                     * 获取Blocklisted email address.
                     * @return EmailAddress Blocklisted email address.
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置Blocklisted email address.
                     * @param _emailAddress Blocklisted email address.
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取Reason for being blacklisted.
                     * @return IspDesc Reason for being blacklisted.
                     * 
                     */
                    std::string GetIspDesc() const;

                    /**
                     * 设置Reason for being blacklisted.
                     * @param _ispDesc Reason for being blacklisted.
                     * 
                     */
                    void SetIspDesc(const std::string& _ispDesc);

                    /**
                     * 判断参数 IspDesc 是否已赋值
                     * @return IspDesc 是否已赋值
                     * 
                     */
                    bool IspDescHasBeenSet() const;

                private:

                    /**
                     * Time when the email address is blocklisted.
                     */
                    std::string m_bounceTime;
                    bool m_bounceTimeHasBeenSet;

                    /**
                     * Blocklisted email address.
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * Reason for being blacklisted.
                     */
                    std::string m_ispDesc;
                    bool m_ispDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_
