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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_PERSONGROUPINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_PERSONGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of groups containing this person and their description fields
                */
                class PersonGroupInfo : public AbstractModel
                {
                public:
                    PersonGroupInfo();
                    ~PersonGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the group that contains this person
                     * @return GroupId ID of the group that contains this person
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置ID of the group that contains this person
                     * @param _groupId ID of the group that contains this person
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
                     * 获取Content of person description field
                     * @return PersonExDescriptions Content of person description field
                     * 
                     */
                    std::vector<std::string> GetPersonExDescriptions() const;

                    /**
                     * 设置Content of person description field
                     * @param _personExDescriptions Content of person description field
                     * 
                     */
                    void SetPersonExDescriptions(const std::vector<std::string>& _personExDescriptions);

                    /**
                     * 判断参数 PersonExDescriptions 是否已赋值
                     * @return PersonExDescriptions 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionsHasBeenSet() const;

                private:

                    /**
                     * ID of the group that contains this person
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Content of person description field
                     */
                    std::vector<std::string> m_personExDescriptions;
                    bool m_personExDescriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_PERSONGROUPINFO_H_
