/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCUSTOMERSITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCUSTOMERSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Pending review sub-customer
                */
                class QueryPendingCustomersItem : public AbstractModel
                {
                public:
                    QueryPendingCustomersItem();
                    ~QueryPendingCustomersItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application time.
                     * @return ApplyTime Application time.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time.
                     * @param _applyTime Application time.
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Sub-Account uin.
                     * @return ClientUin Sub-Account uin.
                     * 
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置Sub-Account uin.
                     * @param _clientUin Sub-Account uin.
                     * 
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Email.
                     * @return Email Email.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email.
                     * @param _email Email.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Mobile Mobile number.
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Mobile number.
                     * @param _mobile Mobile number.
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
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
                     * 获取Approval status.
                     * @return Status Approval status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Approval status.
                     * @param _status Approval status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sub-Customer type.
                     * @return Type Sub-Customer type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Sub-Customer type.
                     * @param _type Sub-Customer type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Application time.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Sub-Account uin.
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Approval status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sub-Customer type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCUSTOMERSITEM_H_
