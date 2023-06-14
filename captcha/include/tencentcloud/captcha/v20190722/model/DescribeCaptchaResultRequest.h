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
                     * 获取It must be `9` here. You can configure the CAPTCHA types in the console.
                     * @return CaptchaType It must be `9` here. You can configure the CAPTCHA types in the console.
                     * 
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置It must be `9` here. You can configure the CAPTCHA types in the console.
                     * @param _captchaType It must be `9` here. You can configure the CAPTCHA types in the console.
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
                     * 获取The user verification ticket returned by the frontend callback function
                     * @return Ticket The user verification ticket returned by the frontend callback function
                     * 
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置The user verification ticket returned by the frontend callback function
                     * @param _ticket The user verification ticket returned by the frontend callback function
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
                     * 获取The user public IP obtained from the customer backend server
                     * @return UserIp The user public IP obtained from the customer backend server
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置The user public IP obtained from the customer backend server
                     * @param _userIp The user public IP obtained from the customer backend server
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
                     * 获取A random string returned by the frontend callback function
                     * @return Randstr A random string returned by the frontend callback function
                     * 
                     */
                    std::string GetRandstr() const;

                    /**
                     * 设置A random string returned by the frontend callback function
                     * @param _randstr A random string returned by the frontend callback function
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
                     * 获取CAPTCHA's app ID. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the CaptchaAppId in the "Key" column of the CAPTCHA list.
                     * @return CaptchaAppId CAPTCHA's app ID. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the CaptchaAppId in the "Key" column of the CAPTCHA list.
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置CAPTCHA's app ID. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the CaptchaAppId in the "Key" column of the CAPTCHA list.
                     * @param _captchaAppId CAPTCHA's app ID. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the CaptchaAppId in the "Key" column of the CAPTCHA list.
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
                     * 获取CAPTCHA's app key. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the AppSecretKey in the "Key" column of the CAPTCHA list. AppSecretKey is the key for CAPTCHA ticket verification performed by the server. Please keep it confidential and do not disclose it to any third parties.
                     * @return AppSecretKey CAPTCHA's app key. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the AppSecretKey in the "Key" column of the CAPTCHA list. AppSecretKey is the key for CAPTCHA ticket verification performed by the server. Please keep it confidential and do not disclose it to any third parties.
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置CAPTCHA's app key. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the AppSecretKey in the "Key" column of the CAPTCHA list. AppSecretKey is the key for CAPTCHA ticket verification performed by the server. Please keep it confidential and do not disclose it to any third parties.
                     * @param _appSecretKey CAPTCHA's app key. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the AppSecretKey in the "Key" column of the CAPTCHA list. AppSecretKey is the key for CAPTCHA ticket verification performed by the server. Please keep it confidential and do not disclose it to any third parties.
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
                     * 获取Reserved field.
                     * @return BusinessId Reserved field.
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置Reserved field.
                     * @param _businessId Reserved field.
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
                     * 获取Reserved field.
                     * @return SceneId Reserved field.
                     * 
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置Reserved field.
                     * @param _sceneId Reserved field.
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
                     * 获取MAC address or unique identifier of a device
                     * @return MacAddress MAC address or unique identifier of a device
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC address or unique identifier of a device
                     * @param _macAddress MAC address or unique identifier of a device
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
                     * 获取Mobile equipment identity number
                     * @return Imei Mobile equipment identity number
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置Mobile equipment identity number
                     * @param _imei Mobile equipment identity number
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
                     * 获取Indicates whether to return the time when the frontend obtains the CAPTCHA. Valid values: 1 (return the time) and others.
                     * @return NeedGetCaptchaTime Indicates whether to return the time when the frontend obtains the CAPTCHA. Valid values: 1 (return the time) and others.
                     * 
                     */
                    int64_t GetNeedGetCaptchaTime() const;

                    /**
                     * 设置Indicates whether to return the time when the frontend obtains the CAPTCHA. Valid values: 1 (return the time) and others.
                     * @param _needGetCaptchaTime Indicates whether to return the time when the frontend obtains the CAPTCHA. Valid values: 1 (return the time) and others.
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
                     * It must be `9` here. You can configure the CAPTCHA types in the console.
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * The user verification ticket returned by the frontend callback function
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * The user public IP obtained from the customer backend server
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * A random string returned by the frontend callback function
                     */
                    std::string m_randstr;
                    bool m_randstrHasBeenSet;

                    /**
                     * CAPTCHA's app ID. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the CaptchaAppId in the "Key" column of the CAPTCHA list.
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * CAPTCHA's app key. Log in to the [Captcha console](https://console.cloud.tencent.com/captcha/graphical) and you can view the AppSecretKey in the "Key" column of the CAPTCHA list. AppSecretKey is the key for CAPTCHA ticket verification performed by the server. Please keep it confidential and do not disclose it to any third parties.
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                    /**
                     * Reserved field.
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * Reserved field.
                     */
                    uint64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * MAC address or unique identifier of a device
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * Mobile equipment identity number
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * Indicates whether to return the time when the frontend obtains the CAPTCHA. Valid values: 1 (return the time) and others.
                     */
                    int64_t m_needGetCaptchaTime;
                    bool m_needGetCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_
