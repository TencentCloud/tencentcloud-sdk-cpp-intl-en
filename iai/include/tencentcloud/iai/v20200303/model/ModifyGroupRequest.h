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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/GroupExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * ModifyGroup request structure.
                */
                class ModifyGroupRequest : public AbstractModel
                {
                public:
                    ModifyGroupRequest();
                    ~ModifyGroupRequest() = default;
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
                     * 获取Group name
                     * @return GroupName Group name
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name
                     * @param GroupName Group name
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Custom description field of the group to be modified, which is a `key-value`
                     * @return GroupExDescriptionInfos Custom description field of the group to be modified, which is a `key-value`
                     */
                    std::vector<GroupExDescriptionInfo> GetGroupExDescriptionInfos() const;

                    /**
                     * 设置Custom description field of the group to be modified, which is a `key-value`
                     * @param GroupExDescriptionInfos Custom description field of the group to be modified, which is a `key-value`
                     */
                    void SetGroupExDescriptionInfos(const std::vector<GroupExDescriptionInfo>& _groupExDescriptionInfos);

                    /**
                     * 判断参数 GroupExDescriptionInfos 是否已赋值
                     * @return GroupExDescriptionInfos 是否已赋值
                     */
                    bool GroupExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取Group remarks
                     * @return Tag Group remarks
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Group remarks
                     * @param Tag Group remarks
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Custom description field of the group to be modified, which is a `key-value`
                     */
                    std::vector<GroupExDescriptionInfo> m_groupExDescriptionInfos;
                    bool m_groupExDescriptionInfosHasBeenSet;

                    /**
                     * Group remarks
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_
