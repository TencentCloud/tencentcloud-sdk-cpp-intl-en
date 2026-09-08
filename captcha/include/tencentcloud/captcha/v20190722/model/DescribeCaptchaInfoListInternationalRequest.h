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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAINFOLISTINTERNATIONALREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAINFOLISTINTERNATIONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/OrderByInternational.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaInfoListInternational request structure.
                */
                class DescribeCaptchaInfoListInternationalRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaInfoListInternationalRequest();
                    ~DescribeCaptchaInfoListInternationalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pagination parameter - page number</p>
                     * @return PageIndex <p>Pagination parameter - page number</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>Pagination parameter - page number</p>
                     * @param _pageIndex <p>Pagination parameter - page number</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取<p>Pagination parameters - number of records per page</p>
                     * @return PageSize <p>Pagination parameters - number of records per page</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Pagination parameters - number of records per page</p>
                     * @param _pageSize <p>Pagination parameters - number of records per page</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter - Behavior verification type</p><p>Enumeration values:</p><ul><li>1: Invisible verification</li><li>2: Slide verification</li><li>8: Graphical verification</li><li>9: Voice verification</li></ul>
                     * @return UserSetCapTypeArr <p>Query parameter - Behavior verification type</p><p>Enumeration values:</p><ul><li>1: Invisible verification</li><li>2: Slide verification</li><li>8: Graphical verification</li><li>9: Voice verification</li></ul>
                     * 
                     */
                    std::vector<std::string> GetUserSetCapTypeArr() const;

                    /**
                     * 设置<p>Query parameter - Behavior verification type</p><p>Enumeration values:</p><ul><li>1: Invisible verification</li><li>2: Slide verification</li><li>8: Graphical verification</li><li>9: Voice verification</li></ul>
                     * @param _userSetCapTypeArr <p>Query parameter - Behavior verification type</p><p>Enumeration values:</p><ul><li>1: Invisible verification</li><li>2: Slide verification</li><li>8: Graphical verification</li><li>9: Voice verification</li></ul>
                     * 
                     */
                    void SetUserSetCapTypeArr(const std::vector<std::string>& _userSetCapTypeArr);

                    /**
                     * 判断参数 UserSetCapTypeArr 是否已赋值
                     * @return UserSetCapTypeArr 是否已赋值
                     * 
                     */
                    bool UserSetCapTypeArrHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter - risk control level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul>
                     * @return VerifyRankArr <p>Query parameter - risk control level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVerifyRankArr() const;

                    /**
                     * 设置<p>Query parameter - risk control level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul>
                     * @param _verifyRankArr <p>Query parameter - risk control level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul>
                     * 
                     */
                    void SetVerifyRankArr(const std::vector<std::string>& _verifyRankArr);

                    /**
                     * 判断参数 VerifyRankArr 是否已赋值
                     * @return VerifyRankArr 是否已赋值
                     * 
                     */
                    bool VerifyRankArrHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter - client multiple selection</p><p>Enumeration values:</p><ul><li>web:</li><li>ios </li><li>android</li></ul>
                     * @return ChannelInfoArr <p>Query parameter - client multiple selection</p><p>Enumeration values:</p><ul><li>web:</li><li>ios </li><li>android</li></ul>
                     * 
                     */
                    std::vector<std::string> GetChannelInfoArr() const;

                    /**
                     * 设置<p>Query parameter - client multiple selection</p><p>Enumeration values:</p><ul><li>web:</li><li>ios </li><li>android</li></ul>
                     * @param _channelInfoArr <p>Query parameter - client multiple selection</p><p>Enumeration values:</p><ul><li>web:</li><li>ios </li><li>android</li></ul>
                     * 
                     */
                    void SetChannelInfoArr(const std::vector<std::string>& _channelInfoArr);

                    /**
                     * 判断参数 ChannelInfoArr 是否已赋值
                     * @return ChannelInfoArr 是否已赋值
                     * 
                     */
                    bool ChannelInfoArrHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter -Captcha appid</p>
                     * @return CaptchaAppId <p>Query parameter -Captcha appid</p>
                     * 
                     */
                    std::string GetCaptchaAppId() const;

                    /**
                     * 设置<p>Query parameter -Captcha appid</p>
                     * @param _captchaAppId <p>Query parameter -Captcha appid</p>
                     * 
                     */
                    void SetCaptchaAppId(const std::string& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter - Captcha name</p>
                     * @return AppName <p>Query parameter - Captcha name</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Query parameter - Captcha name</p>
                     * @param _appName <p>Query parameter - Captcha name</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>Sorting parameter</p><p>Input limits: desc: in descending order by creation time; asc: in ascending order by creation time</p>
                     * @return OrderBy <p>Sorting parameter</p><p>Input limits: desc: in descending order by creation time; asc: in ascending order by creation time</p>
                     * 
                     */
                    OrderByInternational GetOrderBy() const;

                    /**
                     * 设置<p>Sorting parameter</p><p>Input limits: desc: in descending order by creation time; asc: in ascending order by creation time</p>
                     * @param _orderBy <p>Sorting parameter</p><p>Input limits: desc: in descending order by creation time; asc: in ascending order by creation time</p>
                     * 
                     */
                    void SetOrderBy(const OrderByInternational& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * <p>Pagination parameter - page number</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>Pagination parameters - number of records per page</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Query parameter - Behavior verification type</p><p>Enumeration values:</p><ul><li>1: Invisible verification</li><li>2: Slide verification</li><li>8: Graphical verification</li><li>9: Voice verification</li></ul>
                     */
                    std::vector<std::string> m_userSetCapTypeArr;
                    bool m_userSetCapTypeArrHasBeenSet;

                    /**
                     * <p>Query parameter - risk control level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul>
                     */
                    std::vector<std::string> m_verifyRankArr;
                    bool m_verifyRankArrHasBeenSet;

                    /**
                     * <p>Query parameter - client multiple selection</p><p>Enumeration values:</p><ul><li>web:</li><li>ios </li><li>android</li></ul>
                     */
                    std::vector<std::string> m_channelInfoArr;
                    bool m_channelInfoArrHasBeenSet;

                    /**
                     * <p>Query parameter -Captcha appid</p>
                     */
                    std::string m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * <p>Query parameter - Captcha name</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Sorting parameter</p><p>Input limits: desc: in descending order by creation time; asc: in ascending order by creation time</p>
                     */
                    OrderByInternational m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAINFOLISTINTERNATIONALREQUEST_H_
