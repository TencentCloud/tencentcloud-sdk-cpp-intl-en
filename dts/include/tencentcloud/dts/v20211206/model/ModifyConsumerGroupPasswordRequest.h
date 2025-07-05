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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyConsumerGroupPassword request structure.
                */
                class ModifyConsumerGroupPasswordRequest : public AbstractModel
                {
                public:
                    ModifyConsumerGroupPasswordRequest();
                    ~ModifyConsumerGroupPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.
                     * @return AccountName Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.
                     * @param _accountName Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * @return ConsumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * @param _consumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取Old Password.
                     * @return OldPassword Old Password.
                     * 
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置Old Password.
                     * @param _oldPassword Old Password.
                     * 
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     * 
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取New password. The character length is no less than 3 and no more than 32.
                     * @return NewPassword New password. The character length is no less than 3 and no more than 32.
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置New password. The character length is no less than 3 and no more than 32.
                     * @param _newPassword New password. The character length is no less than 3 and no more than 32.
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Old Password.
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * New password. The character length is no less than 3 and no more than 32.
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_
