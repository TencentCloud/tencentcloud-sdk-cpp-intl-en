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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Invitation event details
                */
                class InvitationEvent : public AbstractModel
                {
                public:
                    InvitationEvent();
                    ~InvitationEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the invitee</p>
                     * @return InviteeUserId <p>The ID of the invitee</p>
                     * 
                     */
                    std::string GetInviteeUserId() const;

                    /**
                     * 设置<p>The ID of the invitee</p>
                     * @param _inviteeUserId <p>The ID of the invitee</p>
                     * 
                     */
                    void SetInviteeUserId(const std::string& _inviteeUserId);

                    /**
                     * 判断参数 InviteeUserId 是否已赋值
                     * @return InviteeUserId 是否已赋值
                     * 
                     */
                    bool InviteeUserIdHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the promotion</p>
                     * @return PromotionId <p>The ID of the promotion</p>
                     * 
                     */
                    std::string GetPromotionId() const;

                    /**
                     * 设置<p>The ID of the promotion</p>
                     * @param _promotionId <p>The ID of the promotion</p>
                     * 
                     */
                    void SetPromotionId(const std::string& _promotionId);

                    /**
                     * 判断参数 PromotionId 是否已赋值
                     * @return PromotionId 是否已赋值
                     * 
                     */
                    bool PromotionIdHasBeenSet() const;

                    /**
                     * 获取<p>The name of the promotion</p>
                     * @return PromotionName <p>The name of the promotion</p>
                     * 
                     */
                    std::string GetPromotionName() const;

                    /**
                     * 设置<p>The name of the promotion</p>
                     * @param _promotionName <p>The name of the promotion</p>
                     * 
                     */
                    void SetPromotionName(const std::string& _promotionName);

                    /**
                     * 判断参数 PromotionName 是否已赋值
                     * @return PromotionName 是否已赋值
                     * 
                     */
                    bool PromotionNameHasBeenSet() const;

                    /**
                     * 获取<p>The description of the promotion</p>
                     * @return Description <p>The description of the promotion</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>The description of the promotion</p>
                     * @param _description <p>The description of the promotion</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>The phone number of the invitee</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number.</p>
                     * @return InviteePhone <p>The phone number of the invitee</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number.</p>
                     * 
                     */
                    std::string GetInviteePhone() const;

                    /**
                     * 设置<p>The phone number of the invitee</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number.</p>
                     * @param _inviteePhone <p>The phone number of the invitee</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number.</p>
                     * 
                     */
                    void SetInviteePhone(const std::string& _inviteePhone);

                    /**
                     * 判断参数 InviteePhone 是否已赋值
                     * @return InviteePhone 是否已赋值
                     * 
                     */
                    bool InviteePhoneHasBeenSet() const;

                    /**
                     * 获取<p>The code that the inviter sent to the user</p>
                     * @return InvitationCode <p>The code that the inviter sent to the user</p>
                     * 
                     */
                    std::string GetInvitationCode() const;

                    /**
                     * 设置<p>The code that the inviter sent to the user</p>
                     * @param _invitationCode <p>The code that the inviter sent to the user</p>
                     * 
                     */
                    void SetInvitationCode(const std::string& _invitationCode);

                    /**
                     * 判断参数 InvitationCode 是否已赋值
                     * @return InvitationCode 是否已赋值
                     * 
                     */
                    bool InvitationCodeHasBeenSet() const;

                    /**
                     * 获取<p>The url that the inviter sent to the user</p>
                     * @return InvitationUrl <p>The url that the inviter sent to the user</p>
                     * 
                     */
                    std::string GetInvitationUrl() const;

                    /**
                     * 设置<p>The url that the inviter sent to the user</p>
                     * @param _invitationUrl <p>The url that the inviter sent to the user</p>
                     * 
                     */
                    void SetInvitationUrl(const std::string& _invitationUrl);

                    /**
                     * 判断参数 InvitationUrl 是否已赋值
                     * @return InvitationUrl 是否已赋值
                     * 
                     */
                    bool InvitationUrlHasBeenSet() const;

                    /**
                     * 获取<p>The channel that inviter used to invite the user </p>
                     * @return InvitationChannel <p>The channel that inviter used to invite the user </p>
                     * 
                     */
                    std::string GetInvitationChannel() const;

                    /**
                     * 设置<p>The channel that inviter used to invite the user </p>
                     * @param _invitationChannel <p>The channel that inviter used to invite the user </p>
                     * 
                     */
                    void SetInvitationChannel(const std::string& _invitationChannel);

                    /**
                     * 判断参数 InvitationChannel 是否已赋值
                     * @return InvitationChannel 是否已赋值
                     * 
                     */
                    bool InvitationChannelHasBeenSet() const;

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
                     * <p>The ID of the invitee</p>
                     */
                    std::string m_inviteeUserId;
                    bool m_inviteeUserIdHasBeenSet;

                    /**
                     * <p>The ID of the promotion</p>
                     */
                    std::string m_promotionId;
                    bool m_promotionIdHasBeenSet;

                    /**
                     * <p>The name of the promotion</p>
                     */
                    std::string m_promotionName;
                    bool m_promotionNameHasBeenSet;

                    /**
                     * <p>The description of the promotion</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>The phone number of the invitee</p><p>Parameter format: Complies with the E.164 standard format, which includes "+", region code, and number.</p>
                     */
                    std::string m_inviteePhone;
                    bool m_inviteePhoneHasBeenSet;

                    /**
                     * <p>The code that the inviter sent to the user</p>
                     */
                    std::string m_invitationCode;
                    bool m_invitationCodeHasBeenSet;

                    /**
                     * <p>The url that the inviter sent to the user</p>
                     */
                    std::string m_invitationUrl;
                    bool m_invitationUrlHasBeenSet;

                    /**
                     * <p>The channel that inviter used to invite the user </p>
                     */
                    std::string m_invitationChannel;
                    bool m_invitationChannelHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_
