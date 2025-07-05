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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPDESCRIPTIONREQUEST_H_

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
                * ModifyConsumerGroupDescription request structure.
                */
                class ModifyConsumerGroupDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyConsumerGroupDescriptionRequest();
                    ~ModifyConsumerGroupDescriptionRequest() = default;
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
                     * 获取Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.Please make sure the consumer group name is correct.
                     * @return ConsumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.Please make sure the consumer group name is correct.
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.Please make sure the consumer group name is correct.
                     * @param _consumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.Please make sure the consumer group name is correct.
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
                     * 获取Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.Please make sure the account name is correct.
                     * @return AccountName Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.Please make sure the account name is correct.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.Please make sure the account name is correct.
                     * @param _accountName Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.Please make sure the account name is correct.
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
                     * 获取Updated description of the consumer group
                     * @return Description Updated description of the consumer group
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Updated description of the consumer group
                     * @param _description Updated description of the consumer group
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.Please make sure the consumer group name is correct.
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Account name. The full name of the actual account is in the form: account-#{SubscribeId}-#{AccountName}.Please make sure the account name is correct.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Updated description of the consumer group
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPDESCRIPTIONREQUEST_H_
