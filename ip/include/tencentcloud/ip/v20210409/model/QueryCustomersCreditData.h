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

#ifndef TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITDATA_H_
#define TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ip
    {
        namespace V20210409
        {
            namespace Model
            {
                /**
                * Complex type of output parameters for querying customer's credit
                */
                class QueryCustomersCreditData : public AbstractModel
                {
                public:
                    QueryCustomersCreditData();
                    ~QueryCustomersCreditData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Type
                     * @return Type Type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
                     * @param _type Type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Phone
                     * @return Mobile Phone
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Phone
                     * @param _mobile Phone
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
                     * 获取Email
                     * @return Email Email
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email
                     * @param _email Email
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
                     * 获取Overdue payment flag
                     * @return Arrears Overdue payment flag
                     * 
                     */
                    std::string GetArrears() const;

                    /**
                     * 设置Overdue payment flag
                     * @param _arrears Overdue payment flag
                     * 
                     */
                    void SetArrears(const std::string& _arrears);

                    /**
                     * 判断参数 Arrears 是否已赋值
                     * @return Arrears 是否已赋值
                     * 
                     */
                    bool ArrearsHasBeenSet() const;

                    /**
                     * 获取Binding time
                     * @return AssociationTime Binding time
                     * 
                     */
                    std::string GetAssociationTime() const;

                    /**
                     * 设置Binding time
                     * @param _associationTime Binding time
                     * 
                     */
                    void SetAssociationTime(const std::string& _associationTime);

                    /**
                     * 判断参数 AssociationTime 是否已赋值
                     * @return AssociationTime 是否已赋值
                     * 
                     */
                    bool AssociationTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return RecentExpiry Expiration time
                     * 
                     */
                    std::string GetRecentExpiry() const;

                    /**
                     * 设置Expiration time
                     * @param _recentExpiry Expiration time
                     * 
                     */
                    void SetRecentExpiry(const std::string& _recentExpiry);

                    /**
                     * 判断参数 RecentExpiry 是否已赋值
                     * @return RecentExpiry 是否已赋值
                     * 
                     */
                    bool RecentExpiryHasBeenSet() const;

                    /**
                     * 获取The UIN of reseller’s customer
                     * @return ClientUin The UIN of reseller’s customer
                     * 
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置The UIN of reseller’s customer
                     * @param _clientUin The UIN of reseller’s customer
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
                     * 获取Credit granted to reseller’s customer
                     * @return Credit Credit granted to reseller’s customer
                     * 
                     */
                    double GetCredit() const;

                    /**
                     * 设置Credit granted to reseller’s customer
                     * @param _credit Credit granted to reseller’s customer
                     * 
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     * 
                     */
                    bool CreditHasBeenSet() const;

                    /**
                     * 获取The remaining credit of reseller’s customer
                     * @return RemainingCredit The remaining credit of reseller’s customer
                     * 
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 设置The remaining credit of reseller’s customer
                     * @param _remainingCredit The remaining credit of reseller’s customer
                     * 
                     */
                    void SetRemainingCredit(const double& _remainingCredit);

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取0: Identity not verified; 1: Individual identity verified; 2: Enterprise identity verified.
                     * @return IdentifyType 0: Identity not verified; 1: Individual identity verified; 2: Enterprise identity verified.
                     * 
                     */
                    uint64_t GetIdentifyType() const;

                    /**
                     * 设置0: Identity not verified; 1: Individual identity verified; 2: Enterprise identity verified.
                     * @param _identifyType 0: Identity not verified; 1: Individual identity verified; 2: Enterprise identity verified.
                     * 
                     */
                    void SetIdentifyType(const uint64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取Customer remarks
                     * @return Remark Customer remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Customer remarks
                     * @param _remark Customer remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Forced status
                     * @return Force Forced status
                     * 
                     */
                    int64_t GetForce() const;

                    /**
                     * 设置Forced status
                     * @param _force Forced status
                     * 
                     */
                    void SetForce(const int64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Phone
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * Email
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Overdue payment flag
                     */
                    std::string m_arrears;
                    bool m_arrearsHasBeenSet;

                    /**
                     * Binding time
                     */
                    std::string m_associationTime;
                    bool m_associationTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_recentExpiry;
                    bool m_recentExpiryHasBeenSet;

                    /**
                     * The UIN of reseller’s customer
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Credit granted to reseller’s customer
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                    /**
                     * The remaining credit of reseller’s customer
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * 0: Identity not verified; 1: Individual identity verified; 2: Enterprise identity verified.
                     */
                    uint64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * Customer remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Forced status
                     */
                    int64_t m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IP_V20210409_MODEL_QUERYCUSTOMERSCREDITDATA_H_
