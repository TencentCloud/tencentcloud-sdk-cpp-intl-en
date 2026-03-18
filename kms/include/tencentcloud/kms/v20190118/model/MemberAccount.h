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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Shared member account information.
                */
                class MemberAccount : public AbstractModel
                {
                public:
                    MemberAccount();
                    ~MemberAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Member account appid.

                     * @return MemberAppId Member account appid.

                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置Member account appid.

                     * @param _memberAppId Member account appid.

                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取Member account UIN
                     * @return MemberUin Member account UIN
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置Member account UIN
                     * @param _memberUin Member account UIN
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * Member account appid.

                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * Member account UIN
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_
