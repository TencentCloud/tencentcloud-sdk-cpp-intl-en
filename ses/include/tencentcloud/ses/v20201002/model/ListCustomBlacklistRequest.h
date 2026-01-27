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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListCustomBlacklist request structure.
                */
                class ListCustomBlacklistRequest : public AbstractModel
                {
                public:
                    ListCustomBlacklistRequest();
                    ~ListCustomBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, int, starts from 0.
                     * @return Offset Offset, int, starts from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, int, starts from 0.
                     * @param _offset Offset, int, starts from 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number limit, int, no more than 100.
                     * @return Limit Number limit, int, no more than 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number limit, int, no more than 100.
                     * @param _limit Number limit, int, no more than 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter the state of the blocklist. valid values: 0 (expired), 1 (active), 2 (all).
                     * @return Status Filter the state of the blocklist. valid values: 0 (expired), 1 (active), 2 (all).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Filter the state of the blocklist. valid values: 0 (expired), 1 (active), 2 (all).
                     * @param _status Filter the state of the blocklist. valid values: 0 (expired), 1 (active), 2 (all).
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Email address in blocklist.
                     * @return Email Email address in blocklist.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address in blocklist.
                     * @param _email Email address in blocklist.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * Offset, int, starts from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit, int, no more than 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter the state of the blocklist. valid values: 0 (expired), 1 (active), 2 (all).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Email address in blocklist.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_
