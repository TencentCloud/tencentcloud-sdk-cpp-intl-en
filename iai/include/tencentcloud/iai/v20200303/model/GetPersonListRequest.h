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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTREQUEST_H_

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
                * GetPersonList request structure.
                */
                class GetPersonListRequest : public AbstractModel
                {
                public:
                    GetPersonListRequest();
                    ~GetPersonListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group ID, which is the `GroupId` in the `CreateGroup` API.
                     * @return GroupId Group ID, which is the `GroupId` in the `CreateGroup` API.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID, which is the `GroupId` in the `CreateGroup` API.
                     * @param _groupId Group ID, which is the `GroupId` in the `CreateGroup` API.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

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
                     * 获取Number of returned results. Default value: 10. Maximum value: 1000.
                     * @return Limit Number of returned results. Default value: 10. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 10. Maximum value: 1000.
                     * @param _limit Number of returned results. Default value: 10. Maximum value: 1000.
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
                     * Group ID, which is the `GroupId` in the `CreateGroup` API.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Starting number. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 10. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTREQUEST_H_
