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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBEIPWHITELISTINTERNATIONALREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBEIPWHITELISTINTERNATIONALREQUEST_H_

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
                * DescribeIpWhiteListInternational request structure.
                */
                class DescribeIpWhiteListInternationalRequest : public AbstractModel
                {
                public:
                    DescribeIpWhiteListInternationalRequest();
                    ~DescribeIpWhiteListInternationalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Page number.</p>
                     * @return PageIndex <p>Page number.</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>Page number.</p>
                     * @param _pageIndex <p>Page number.</p>
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
                     * 获取<p>Page length.</p>
                     * @return PageSize <p>Page length.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Page length.</p>
                     * @param _pageSize <p>Page length.</p>
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
                     * 获取<p>Captcha appid</p>
                     * @return CaptchaAppid <p>Captcha appid</p>
                     * 
                     */
                    int64_t GetCaptchaAppid() const;

                    /**
                     * 设置<p>Captcha appid</p>
                     * @param _captchaAppid <p>Captcha appid</p>
                     * 
                     */
                    void SetCaptchaAppid(const int64_t& _captchaAppid);

                    /**
                     * 判断参数 CaptchaAppid 是否已赋值
                     * @return CaptchaAppid 是否已赋值
                     * 
                     */
                    bool CaptchaAppidHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist name</p>
                     * @return Name <p>Allowlist name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Allowlist name</p>
                     * @param _name <p>Allowlist name</p>
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
                     * 获取<p>Ip address</p>
                     * @return Ip <p>Ip address</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Ip address</p>
                     * @param _ip <p>Ip address</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>IP Whitelist Configuration Status</p><p>Enumeration values:</p><ul><li>0: all</li><li>1: allowlisted</li><li>2: allowlisting canceled</li></ul><p>Default value: 0</p>
                     * @return Status <p>IP Whitelist Configuration Status</p><p>Enumeration values:</p><ul><li>0: all</li><li>1: allowlisted</li><li>2: allowlisting canceled</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>IP Whitelist Configuration Status</p><p>Enumeration values:</p><ul><li>0: all</li><li>1: allowlisted</li><li>2: allowlisting canceled</li></ul><p>Default value: 0</p>
                     * @param _status <p>IP Whitelist Configuration Status</p><p>Enumeration values:</p><ul><li>0: all</li><li>1: allowlisted</li><li>2: allowlisting canceled</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Page number.</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>Page length.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Captcha appid</p>
                     */
                    int64_t m_captchaAppid;
                    bool m_captchaAppidHasBeenSet;

                    /**
                     * <p>Allowlist name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Ip address</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>IP Whitelist Configuration Status</p><p>Enumeration values:</p><ul><li>0: all</li><li>1: allowlisted</li><li>2: allowlisting canceled</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBEIPWHITELISTINTERNATIONALREQUEST_H_
