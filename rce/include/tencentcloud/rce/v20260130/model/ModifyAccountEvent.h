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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Person.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * ModifyAccount event details
                */
                class ModifyAccountEvent : public AbstractModel
                {
                public:
                    ModifyAccountEvent();
                    ~ModifyAccountEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The detail information of the user</p>
                     * @return UserInfo <p>The detail information of the user</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>The detail information of the user</p>
                     * @param _userInfo <p>The detail information of the user</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>The personal information of the account when registered</p>
                     * @return Person <p>The personal information of the account when registered</p>
                     * 
                     */
                    Person GetPerson() const;

                    /**
                     * 设置<p>The personal information of the account when registered</p>
                     * @param _person <p>The personal information of the account when registered</p>
                     * 
                     */
                    void SetPerson(const Person& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取<p>The billing address the user provided when registered</p>
                     * @return BillingAddress <p>The billing address the user provided when registered</p>
                     * 
                     */
                    Address GetBillingAddress() const;

                    /**
                     * 设置<p>The billing address the user provided when registered</p>
                     * @param _billingAddress <p>The billing address the user provided when registered</p>
                     * 
                     */
                    void SetBillingAddress(const Address& _billingAddress);

                    /**
                     * 判断参数 BillingAddress 是否已赋值
                     * @return BillingAddress 是否已赋值
                     * 
                     */
                    bool BillingAddressHasBeenSet() const;

                    /**
                     * 获取<p>The delivery address the user provided when registered</p>
                     * @return DeliveryAddress <p>The delivery address the user provided when registered</p>
                     * 
                     */
                    Address GetDeliveryAddress() const;

                    /**
                     * 设置<p>The delivery address the user provided when registered</p>
                     * @param _deliveryAddress <p>The delivery address the user provided when registered</p>
                     * 
                     */
                    void SetDeliveryAddress(const Address& _deliveryAddress);

                    /**
                     * 判断参数 DeliveryAddress 是否已赋值
                     * @return DeliveryAddress 是否已赋值
                     * 
                     */
                    bool DeliveryAddressHasBeenSet() const;

                    /**
                     * 获取<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @return Cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @param _cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>The detail information of the user</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>The personal information of the account when registered</p>
                     */
                    Person m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>The billing address the user provided when registered</p>
                     */
                    Address m_billingAddress;
                    bool m_billingAddressHasBeenSet;

                    /**
                     * <p>The delivery address the user provided when registered</p>
                     */
                    Address m_deliveryAddress;
                    bool m_deliveryAddressHasBeenSet;

                    /**
                     * <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_
