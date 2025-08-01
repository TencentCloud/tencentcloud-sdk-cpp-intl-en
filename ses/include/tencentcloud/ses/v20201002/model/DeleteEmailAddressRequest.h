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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILADDRESSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteEmailAddress request structure.
                */
                class DeleteEmailAddressRequest : public AbstractModel
                {
                public:
                    DeleteEmailAddressRequest();
                    ~DeleteEmailAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sender address.
                     * @return EmailAddress Sender address.
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置Sender address.
                     * @param _emailAddress Sender address.
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                private:

                    /**
                     * Sender address.
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILADDRESSREQUEST_H_
