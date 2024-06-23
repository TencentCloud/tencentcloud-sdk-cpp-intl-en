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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Alert Recipient Details
                */
                class AlarmReceiverInfo : public AbstractModel
                {
                public:
                    AlarmReceiverInfo();
                    ~AlarmReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert ID
                     * @return AlarmId Alert ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alert ID
                     * @param _alarmId Alert ID
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Alarm Recipient ID
                     * @return AlarmReceiver Alarm Recipient ID
                     * 
                     */
                    std::string GetAlarmReceiver() const;

                    /**
                     * 设置Alarm Recipient ID
                     * @param _alarmReceiver Alarm Recipient ID
                     * 
                     */
                    void SetAlarmReceiver(const std::string& _alarmReceiver);

                    /**
                     * 判断参数 AlarmReceiver 是否已赋值
                     * @return AlarmReceiver 是否已赋值
                     * 
                     */
                    bool AlarmReceiverHasBeenSet() const;

                    /**
                     * 获取Email,0: Not set,1: Success,2: Failure
                     * @return Email Email,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetEmail() const;

                    /**
                     * 设置Email,0: Not set,1: Success,2: Failure
                     * @param _email Email,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetEmail(const uint64_t& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取SMS,0: Not set,1: Success,2: Failure
                     * @return Sms SMS,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetSms() const;

                    /**
                     * 设置SMS,0: Not set,1: Success,2: Failure
                     * @param _sms SMS,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetSms(const uint64_t& _sms);

                    /**
                     * 判断参数 Sms 是否已赋值
                     * @return Sms 是否已赋值
                     * 
                     */
                    bool SmsHasBeenSet() const;

                    /**
                     * 获取WeChat,0: Not set,1: Success,2: Failure
                     * @return Wechat WeChat,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetWechat() const;

                    /**
                     * 设置WeChat,0: Not set,1: Success,2: Failure
                     * @param _wechat WeChat,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetWechat(const uint64_t& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取Telephone,0: Not set,1: Success,2: Failure
                     * @return Voice Telephone,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetVoice() const;

                    /**
                     * 设置Telephone,0: Not set,1: Success,2: Failure
                     * @param _voice Telephone,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetVoice(const uint64_t& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取WeCom,0: Not set,1: Success,2: Failure
                     * @return Wecom WeCom,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetWecom() const;

                    /**
                     * 设置WeCom,0: Not set,1: Success,2: Failure
                     * @param _wecom WeCom,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetWecom(const uint64_t& _wecom);

                    /**
                     * 判断参数 Wecom 是否已赋值
                     * @return Wecom 是否已赋值
                     * 
                     */
                    bool WecomHasBeenSet() const;

                    /**
                     * 获取http,0: Not set,1: Success,2: Failure
                     * @return Http http,0: Not set,1: Success,2: Failure
                     * 
                     */
                    uint64_t GetHttp() const;

                    /**
                     * 设置http,0: Not set,1: Success,2: Failure
                     * @param _http http,0: Not set,1: Success,2: Failure
                     * 
                     */
                    void SetHttp(const uint64_t& _http);

                    /**
                     * 判断参数 Http 是否已赋值
                     * @return Http 是否已赋值
                     * 
                     */
                    bool HttpHasBeenSet() const;

                    /**
                     * 获取Enterprise WeChat group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WecomGroup Enterprise WeChat group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetWecomGroup() const;

                    /**
                     * 设置Enterprise WeChat group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wecomGroup Enterprise WeChat group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWecomGroup(const uint64_t& _wecomGroup);

                    /**
                     * 判断参数 WecomGroup 是否已赋值
                     * @return WecomGroup 是否已赋值
                     * 
                     */
                    bool WecomGroupHasBeenSet() const;

                    /**
                     * 获取FeiShu Group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LarkGroup FeiShu Group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLarkGroup() const;

                    /**
                     * 设置FeiShu Group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _larkGroup FeiShu Group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLarkGroup(const uint64_t& _larkGroup);

                    /**
                     * 判断参数 LarkGroup 是否已赋值
                     * @return LarkGroup 是否已赋值
                     * 
                     */
                    bool LarkGroupHasBeenSet() const;

                private:

                    /**
                     * Alert ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alarm Recipient ID
                     */
                    std::string m_alarmReceiver;
                    bool m_alarmReceiverHasBeenSet;

                    /**
                     * Email,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * SMS,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_sms;
                    bool m_smsHasBeenSet;

                    /**
                     * WeChat,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * Telephone,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * WeCom,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_wecom;
                    bool m_wecomHasBeenSet;

                    /**
                     * http,0: Not set,1: Success,2: Failure
                     */
                    uint64_t m_http;
                    bool m_httpHasBeenSet;

                    /**
                     * Enterprise WeChat group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_wecomGroup;
                    bool m_wecomGroupHasBeenSet;

                    /**
                     * FeiShu Group,0: Not set,1: Success,2: Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_larkGroup;
                    bool m_larkGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_
