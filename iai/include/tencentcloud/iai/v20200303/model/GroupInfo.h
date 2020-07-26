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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GROUPINFO_H_

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
                * Returned group information
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Custom group description field
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupExDescriptions Custom group description field
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置Custom group description field
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GroupExDescriptions Custom group description field
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupExDescriptions(const std::vector<std::string>& _groupExDescriptions);

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取Group remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tag Group remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Group remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tag Group remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FaceModelVersion Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreationTimestamp Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 设置Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreationTimestamp Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreationTimestamp(const uint64_t& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     */
                    bool CreationTimestampHasBeenSet() const;

                private:

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Custom group description field
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * Group remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GROUPINFO_H_
