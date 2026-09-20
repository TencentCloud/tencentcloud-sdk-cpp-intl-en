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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaResult request structure.
                */
                class DescribeCaptchaResultRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaResultRequest();
                    ~DescribeCaptchaResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Fixed value: 9.</p>
                     * @return CaptchaType <p>Fixed value: 9.</p>
                     * 
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置<p>Fixed value: 9.</p>
                     * @param _captchaType <p>Fixed value: 9.</p>
                     * 
                     */
                    void SetCaptchaType(const uint64_t& _captchaType);

                    /**
                     * 判断参数 CaptchaType 是否已赋值
                     * @return CaptchaType 是否已赋值
                     * 
                     */
                    bool CaptchaTypeHasBeenSet() const;

                    /**
                     * 获取<p>User verification ticket returned by the frontend callback function</p>
                     * @return Ticket <p>User verification ticket returned by the frontend callback function</p>
                     * 
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置<p>User verification ticket returned by the frontend callback function</p>
                     * @param _ticket <p>User verification ticket returned by the frontend callback function</p>
                     * 
                     */
                    void SetTicket(const std::string& _ticket);

                    /**
                     * 判断参数 Ticket 是否已赋值
                     * @return Ticket 是否已赋值
                     * 
                     */
                    bool TicketHasBeenSet() const;

                    /**
                     * 获取<p>Public network IP of the verification</p>
                     * @return UserIp <p>Public network IP of the verification</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>Public network IP of the verification</p>
                     * @param _userIp <p>Public network IP of the verification</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取<p>Random string returned by the frontend callback function</p>
                     * @return Randstr <p>Random string returned by the frontend callback function</p>
                     * 
                     */
                    std::string GetRandstr() const;

                    /**
                     * 设置<p>Random string returned by the frontend callback function</p>
                     * @param _randstr <p>Random string returned by the frontend callback function</p>
                     * 
                     */
                    void SetRandstr(const std::string& _randstr);

                    /**
                     * 判断参数 Randstr 是否已赋值
                     * @return Randstr 是否已赋值
                     * 
                     */
                    bool RandstrHasBeenSet() const;

                    /**
                     * 获取<p>Captcha appId. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>. In the [Key] column of the verification list, you can see CaptchaAppId.</p>
                     * @return CaptchaAppId <p>Captcha appId. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>. In the [Key] column of the verification list, you can see CaptchaAppId.</p>
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置<p>Captcha appId. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>. In the [Key] column of the verification list, you can see CaptchaAppId.</p>
                     * @param _captchaAppId <p>Captcha appId. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>. In the [Key] column of the verification list, you can see CaptchaAppId.</p>
                     * 
                     */
                    void SetCaptchaAppId(const uint64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Captcha application key. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>, and view AppSecretKey in the [Key] column of the verification list. AppSecretKey is a key for server-side verification of verification code tickets. Keep it confidential and do not leak it to third parties.</p>
                     * @return AppSecretKey <p>Captcha application key. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>, and view AppSecretKey in the [Key] column of the verification list. AppSecretKey is a key for server-side verification of verification code tickets. Keep it confidential and do not leak it to third parties.</p>
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置<p>Captcha application key. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>, and view AppSecretKey in the [Key] column of the verification list. AppSecretKey is a key for server-side verification of verification code tickets. Keep it confidential and do not leak it to third parties.</p>
                     * @param _appSecretKey <p>Captcha application key. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>, and view AppSecretKey in the [Key] column of the verification list. AppSecretKey is a key for server-side verification of verification code tickets. Keep it confidential and do not leak it to third parties.</p>
                     * 
                     */
                    void SetAppSecretKey(const std::string& _appSecretKey);

                    /**
                     * 判断参数 AppSecretKey 是否已赋值
                     * @return AppSecretKey 是否已赋值
                     * 
                     */
                    bool AppSecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field</p>
                     * @return BusinessId <p>Reserved field</p>
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置<p>Reserved field</p>
                     * @param _businessId <p>Reserved field</p>
                     * 
                     */
                    void SetBusinessId(const uint64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field</p>
                     * @return SceneId <p>Reserved field</p>
                     * 
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置<p>Reserved field</p>
                     * @param _sceneId <p>Reserved field</p>
                     * 
                     */
                    void SetSceneId(const uint64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取<p>mac address or unique device identifier</p>
                     * @return MacAddress <p>mac address or unique device identifier</p>
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置<p>mac address or unique device identifier</p>
                     * @param _macAddress <p>mac address or unique device identifier</p>
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取<p>Mobile device number</p>
                     * @return Imei <p>Mobile device number</p>
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置<p>Mobile device number</p>
                     * @param _imei <p>Mobile device number</p>
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return the time when the frontend obtains the verification code. Value: 1: need to return</p>
                     * @return NeedGetCaptchaTime <p>Whether to return the time when the frontend obtains the verification code. Value: 1: need to return</p>
                     * 
                     */
                    int64_t GetNeedGetCaptchaTime() const;

                    /**
                     * 设置<p>Whether to return the time when the frontend obtains the verification code. Value: 1: need to return</p>
                     * @param _needGetCaptchaTime <p>Whether to return the time when the frontend obtains the verification code. Value: 1: need to return</p>
                     * 
                     */
                    void SetNeedGetCaptchaTime(const int64_t& _needGetCaptchaTime);

                    /**
                     * 判断参数 NeedGetCaptchaTime 是否已赋值
                     * @return NeedGetCaptchaTime 是否已赋值
                     * 
                     */
                    bool NeedGetCaptchaTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Fixed value: 9.</p>
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * <p>User verification ticket returned by the frontend callback function</p>
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * <p>Public network IP of the verification</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>Random string returned by the frontend callback function</p>
                     */
                    std::string m_randstr;
                    bool m_randstrHasBeenSet;

                    /**
                     * <p>Captcha appId. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>. In the [Key] column of the verification list, you can see CaptchaAppId.</p>
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * <p>Captcha application key. Log in to the <a href="https://console.cloud.tencent.com/captcha/graphical">verification code console</a>, and view AppSecretKey in the [Key] column of the verification list. AppSecretKey is a key for server-side verification of verification code tickets. Keep it confidential and do not leak it to third parties.</p>
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                    /**
                     * <p>Reserved field</p>
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>Reserved field</p>
                     */
                    uint64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * <p>mac address or unique device identifier</p>
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * <p>Mobile device number</p>
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * <p>Whether to return the time when the frontend obtains the verification code. Value: 1: need to return</p>
                     */
                    int64_t m_needGetCaptchaTime;
                    bool m_needGetCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_
