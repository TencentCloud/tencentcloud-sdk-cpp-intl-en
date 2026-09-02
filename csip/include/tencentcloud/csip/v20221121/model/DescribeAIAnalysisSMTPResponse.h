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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISSMTPRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISSMTPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisSMTP response structure.
                */
                class DescribeAIAnalysisSMTPResponse : public AbstractModel
                {
                public:
                    DescribeAIAnalysisSMTPResponse();
                    ~DescribeAIAnalysisSMTPResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether connected to the mailbox</p>
                     * @return Exist <p>Whether connected to the mailbox</p>
                     * 
                     */
                    bool GetExist() const;

                    /**
                     * 判断参数 Exist 是否已赋值
                     * @return Exist 是否已赋值
                     * 
                     */
                    bool ExistHasBeenSet() const;

                    /**
                     * 获取<p>Email address</p>
                     * @return AccountName <p>Email address</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Mailbox type</p><p>Enumeration values:</p><ul><li>1: QQ Mail</li><li>2: GMail</li><li>3: OutLook</li></ul>
                     * @return Type <p>Mailbox type</p><p>Enumeration values:</p><ul><li>1: QQ Mail</li><li>2: GMail</li><li>3: OutLook</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Mailbox authorization code</p>
                     * @return Password <p>Mailbox authorization code</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * <p>Whether connected to the mailbox</p>
                     */
                    bool m_exist;
                    bool m_existHasBeenSet;

                    /**
                     * <p>Email address</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Mailbox type</p><p>Enumeration values:</p><ul><li>1: QQ Mail</li><li>2: GMail</li><li>3: OutLook</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Mailbox authorization code</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISSMTPRESPONSE_H_
