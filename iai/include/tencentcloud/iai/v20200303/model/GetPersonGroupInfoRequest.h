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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFOREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetPersonGroupInfo request structure.
                */
                class GetPersonGroupInfoRequest : public AbstractModel
                {
                public:
                    GetPersonGroupInfoRequest();
                    ~GetPersonGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * @return PersonId Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * @param _personId Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Starting number. Default value: 0.
                     * @return Offset Starting number. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting number. Default value: 0.
                     * @param _offset Starting number. Default value: 0.
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
                     * 获取Number of returned results. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Person ID, which is the `PersonId` in the `CreatePerson` API.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Starting number. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFOREQUEST_H_
