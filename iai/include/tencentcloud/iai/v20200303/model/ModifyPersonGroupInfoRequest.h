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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * ModifyPersonGroupInfo request structure.
                */
                class ModifyPersonGroupInfoRequest : public AbstractModel
                {
                public:
                    ModifyPersonGroupInfoRequest();
                    ~ModifyPersonGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group ID
                     * @return GroupId Group ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID
                     * @param GroupId Group ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Person ID
                     * @return PersonId Person ID
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID
                     * @param PersonId Person ID
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Custom description field of the person to be modified, which is a `key-value`
                     * @return PersonExDescriptionInfos Custom description field of the person to be modified, which is a `key-value`
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置Custom description field of the person to be modified, which is a `key-value`
                     * @param PersonExDescriptionInfos Custom description field of the person to be modified, which is a `key-value`
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                private:

                    /**
                     * Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Person ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Custom description field of the person to be modified, which is a `key-value`
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_
