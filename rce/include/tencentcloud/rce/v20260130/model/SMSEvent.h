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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
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
                * SMS event details
                */
                class SMSEvent : public AbstractModel
                {
                public:
                    SMSEvent();
                    ~SMSEvent() = default;
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
                     * 获取<p>The unique ID of the sms</p>
                     * @return SMSId <p>The unique ID of the sms</p>
                     * 
                     */
                    std::string GetSMSId() const;

                    /**
                     * 设置<p>The unique ID of the sms</p>
                     * @param _sMSId <p>The unique ID of the sms</p>
                     * 
                     */
                    void SetSMSId(const std::string& _sMSId);

                    /**
                     * 判断参数 SMSId 是否已赋值
                     * @return SMSId 是否已赋值
                     * 
                     */
                    bool SMSIdHasBeenSet() const;

                    /**
                     * 获取<p>The time that the user received the sms</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * @return ReceivedTime <p>The time that the user received the sms</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * 
                     */
                    std::string GetReceivedTime() const;

                    /**
                     * 设置<p>The time that the user received the sms</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * @param _receivedTime <p>The time that the user received the sms</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * 
                     */
                    void SetReceivedTime(const std::string& _receivedTime);

                    /**
                     * 判断参数 ReceivedTime 是否已赋值
                     * @return ReceivedTime 是否已赋值
                     * 
                     */
                    bool ReceivedTimeHasBeenSet() const;

                    /**
                     * 获取<p>The action of the user after receiving the sms</p><ul><li>no_action: No action from the user</li><li>safe: User confirmation of the correct person's action</li><li>compromised: Feedback from real users indicates third-party action</li></ul>
                     * @return Action <p>The action of the user after receiving the sms</p><ul><li>no_action: No action from the user</li><li>safe: User confirmation of the correct person's action</li><li>compromised: Feedback from real users indicates third-party action</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>The action of the user after receiving the sms</p><ul><li>no_action: No action from the user</li><li>safe: User confirmation of the correct person's action</li><li>compromised: Feedback from real users indicates third-party action</li></ul>
                     * @param _action <p>The action of the user after receiving the sms</p><ul><li>no_action: No action from the user</li><li>safe: User confirmation of the correct person's action</li><li>compromised: Feedback from real users indicates third-party action</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>The result of the sms</p>
                     * @return SMSResult <p>The result of the sms</p>
                     * 
                     */
                    Result GetSMSResult() const;

                    /**
                     * 设置<p>The result of the sms</p>
                     * @param _sMSResult <p>The result of the sms</p>
                     * 
                     */
                    void SetSMSResult(const Result& _sMSResult);

                    /**
                     * 判断参数 SMSResult 是否已赋值
                     * @return SMSResult 是否已赋值
                     * 
                     */
                    bool SMSResultHasBeenSet() const;

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
                     * <p>The unique ID of the sms</p>
                     */
                    std::string m_sMSId;
                    bool m_sMSIdHasBeenSet;

                    /**
                     * <p>The time that the user received the sms</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     */
                    std::string m_receivedTime;
                    bool m_receivedTimeHasBeenSet;

                    /**
                     * <p>The action of the user after receiving the sms</p><ul><li>no_action: No action from the user</li><li>safe: User confirmation of the correct person's action</li><li>compromised: Feedback from real users indicates third-party action</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>The result of the sms</p>
                     */
                    Result m_sMSResult;
                    bool m_sMSResultHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_SMSEVENT_H_
