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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_

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
                * CreateGroup request structure.
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group name, which is modifiable, must be unique, and can contain 1 to 60 characters.
                     * @return GroupName Group name, which is modifiable, must be unique, and can contain 1 to 60 characters.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name, which is modifiable, must be unique, and can contain 1 to 60 characters.
                     * @param GroupName Group name, which is modifiable, must be unique, and can contain 1 to 60 characters.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Group ID, which is unmodifiable, must be unique, and can contain letters, digits, and special symbols (-%@#&_) of up to 64 B.
                     * @return GroupId Group ID, which is unmodifiable, must be unique, and can contain letters, digits, and special symbols (-%@#&_) of up to 64 B.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID, which is unmodifiable, must be unique, and can contain letters, digits, and special symbols (-%@#&_) of up to 64 B.
                     * @param GroupId Group ID, which is unmodifiable, must be unique, and can contain letters, digits, and special symbols (-%@#&_) of up to 64 B.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Custom group description field that describes the person attributes in the group, which will be applied to all persons in the group. 
Up to 5 ones can be created. 
Each custom description field can contain 1 to 30 characters. 
The custom description field must be unique in the group. 
Example: if you set the "custom description field" of a group to ["student ID","employee ID","mobile number"], 
then all the persons in the group will have description fields named "student ID", "employee ID", and "mobile number". 
You can enter content in the corresponding field to register a person's student ID, employee ID, and mobile number.
                     * @return GroupExDescriptions Custom group description field that describes the person attributes in the group, which will be applied to all persons in the group. 
Up to 5 ones can be created. 
Each custom description field can contain 1 to 30 characters. 
The custom description field must be unique in the group. 
Example: if you set the "custom description field" of a group to ["student ID","employee ID","mobile number"], 
then all the persons in the group will have description fields named "student ID", "employee ID", and "mobile number". 
You can enter content in the corresponding field to register a person's student ID, employee ID, and mobile number.
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置Custom group description field that describes the person attributes in the group, which will be applied to all persons in the group. 
Up to 5 ones can be created. 
Each custom description field can contain 1 to 30 characters. 
The custom description field must be unique in the group. 
Example: if you set the "custom description field" of a group to ["student ID","employee ID","mobile number"], 
then all the persons in the group will have description fields named "student ID", "employee ID", and "mobile number". 
You can enter content in the corresponding field to register a person's student ID, employee ID, and mobile number.
                     * @param GroupExDescriptions Custom group description field that describes the person attributes in the group, which will be applied to all persons in the group. 
Up to 5 ones can be created. 
Each custom description field can contain 1 to 30 characters. 
The custom description field must be unique in the group. 
Example: if you set the "custom description field" of a group to ["student ID","employee ID","mobile number"], 
then all the persons in the group will have description fields named "student ID", "employee ID", and "mobile number". 
You can enter content in the corresponding field to register a person's student ID, employee ID, and mobile number.
                     */
                    void SetGroupExDescriptions(const std::vector<std::string>& _groupExDescriptions);

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取Group remarks, which can contain 0 to 40 characters.
                     * @return Tag Group remarks, which can contain 0 to 40 characters.
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Group remarks, which can contain 0 to 40 characters.
                     * @param Tag Group remarks, which can contain 0 to 40 characters.
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used by the Face Recognition service. Valid values: 2.0, 3.0.
This parameter is `3.0` by default starting from April 2, 2020. If it is left empty for accounts that used this API previously, `2.0` will be used by default. 
Different algorithm model versions correspond to different face recognition algorithms. The 3.0 version has a better overall effect than the legacy version and is thus recommended.
                     * @return FaceModelVersion Algorithm model version used by the Face Recognition service. Valid values: 2.0, 3.0.
This parameter is `3.0` by default starting from April 2, 2020. If it is left empty for accounts that used this API previously, `2.0` will be used by default. 
Different algorithm model versions correspond to different face recognition algorithms. The 3.0 version has a better overall effect than the legacy version and is thus recommended.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置Algorithm model version used by the Face Recognition service. Valid values: 2.0, 3.0.
This parameter is `3.0` by default starting from April 2, 2020. If it is left empty for accounts that used this API previously, `2.0` will be used by default. 
Different algorithm model versions correspond to different face recognition algorithms. The 3.0 version has a better overall effect than the legacy version and is thus recommended.
                     * @param FaceModelVersion Algorithm model version used by the Face Recognition service. Valid values: 2.0, 3.0.
This parameter is `3.0` by default starting from April 2, 2020. If it is left empty for accounts that used this API previously, `2.0` will be used by default. 
Different algorithm model versions correspond to different face recognition algorithms. The 3.0 version has a better overall effect than the legacy version and is thus recommended.
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Group name, which is modifiable, must be unique, and can contain 1 to 60 characters.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Group ID, which is unmodifiable, must be unique, and can contain letters, digits, and special symbols (-%@#&_) of up to 64 B.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Custom group description field that describes the person attributes in the group, which will be applied to all persons in the group. 
Up to 5 ones can be created. 
Each custom description field can contain 1 to 30 characters. 
The custom description field must be unique in the group. 
Example: if you set the "custom description field" of a group to ["student ID","employee ID","mobile number"], 
then all the persons in the group will have description fields named "student ID", "employee ID", and "mobile number". 
You can enter content in the corresponding field to register a person's student ID, employee ID, and mobile number.
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * Group remarks, which can contain 0 to 40 characters.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Algorithm model version used by the Face Recognition service. Valid values: 2.0, 3.0.
This parameter is `3.0` by default starting from April 2, 2020. If it is left empty for accounts that used this API previously, `2.0` will be used by default. 
Different algorithm model versions correspond to different face recognition algorithms. The 3.0 version has a better overall effect than the legacy version and is thus recommended.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_
