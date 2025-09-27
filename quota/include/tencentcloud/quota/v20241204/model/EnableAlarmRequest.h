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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_ENABLEALARMREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_ENABLEALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * EnableAlarm request structure.
                */
                class EnableAlarmRequest : public AbstractModel
                {
                public:
                    EnableAlarmRequest();
                    ~EnableAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
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
                     * 获取Specifies the member uin of the rule owner.
                     * @return MemberUin Specifies the member uin of the rule owner.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Specifies the member uin of the rule owner.
                     * @param _memberUin Specifies the member uin of the rule owner.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the member uin of the rule owner.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_ENABLEALARMREQUEST_H_
