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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONREQUEST_H_

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
                * CopyPerson request structure.
                */
                class CopyPersonRequest : public AbstractModel
                {
                public:
                    CopyPersonRequest();
                    ~CopyPersonRequest() = default;
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
                     * 获取List of groups to join. The array element value is the `GroupId` in the `CreateGroup` API.
                     * @return GroupIds List of groups to join. The array element value is the `GroupId` in the `CreateGroup` API.
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置List of groups to join. The array element value is the `GroupId` in the `CreateGroup` API.
                     * @param _groupIds List of groups to join. The array element value is the `GroupId` in the `CreateGroup` API.
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * Person ID, which is the `PersonId` in the `CreatePerson` API.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * List of groups to join. The array element value is the `GroupId` in the `CreateGroup` API.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONREQUEST_H_
