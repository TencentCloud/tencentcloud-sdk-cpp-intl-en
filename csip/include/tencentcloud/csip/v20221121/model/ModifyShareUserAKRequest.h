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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERAKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERAKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyShareUserAK request structure.
                */
                class ModifyShareUserAKRequest : public AbstractModel
                {
                public:
                    ModifyShareUserAKRequest();
                    ~ModifyShareUserAKRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Add a monitoring account
                     * @return SharedAppIDList Add a monitoring account
                     * 
                     */
                    std::vector<int64_t> GetSharedAppIDList() const;

                    /**
                     * 设置Add a monitoring account
                     * @param _sharedAppIDList Add a monitoring account
                     * 
                     */
                    void SetSharedAppIDList(const std::vector<int64_t>& _sharedAppIDList);

                    /**
                     * 判断参数 SharedAppIDList 是否已赋值
                     * @return SharedAppIDList 是否已赋值
                     * 
                     */
                    bool SharedAppIDListHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Add a monitoring account
                     */
                    std::vector<int64_t> m_sharedAppIDList;
                    bool m_sharedAppIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERAKREQUEST_H_
