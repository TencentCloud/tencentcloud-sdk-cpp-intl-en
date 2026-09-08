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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAWHITELISTITEM_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAWHITELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * ip whitelist data sub-item in the verification code console
                */
                class DescribeCaptchaWhiteListItem : public AbstractModel
                {
                public:
                    DescribeCaptchaWhiteListItem();
                    ~DescribeCaptchaWhiteListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>No.</p>
                     * @return Id <p>No.</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>No.</p>
                     * @param _id <p>No.</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>Bind captcha</p>
                     * @return CaptchaAppid <p>Bind captcha</p>
                     * 
                     */
                    int64_t GetCaptchaAppid() const;

                    /**
                     * 设置<p>Bind captcha</p>
                     * @param _captchaAppid <p>Bind captcha</p>
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
                     * 获取<p>ip address</p>
                     * @return Ip <p>ip address</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>ip address</p>
                     * @param _ip <p>ip address</p>
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
                     * 获取<p>Status. 0: Ip allowlisted; 1: cancel allowlisting</p>
                     * @return Status <p>Status. 0: Ip allowlisted; 1: cancel allowlisting</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status. 0: Ip allowlisted; 1: cancel allowlisting</p>
                     * @param _status <p>Status. 0: Ip allowlisted; 1: cancel allowlisting</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdatedTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updatedTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Comment <p>Remarks.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _comment <p>Remarks.</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * <p>No.</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Allowlist name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Bind captcha</p>
                     */
                    int64_t m_captchaAppid;
                    bool m_captchaAppidHasBeenSet;

                    /**
                     * <p>ip address</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Status. 0: Ip allowlisted; 1: cancel allowlisting</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAWHITELISTITEM_H_
