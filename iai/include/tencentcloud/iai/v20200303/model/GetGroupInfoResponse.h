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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETGROUPINFORESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETGROUPINFORESPONSE_H_

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
                * GetGroupInfo response structure.
                */
                class GetGroupInfoResponse : public AbstractModel
                {
                public:
                    GetGroupInfoResponse();
                    ~GetGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Group name
                     * @return GroupName Group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Group ID
                     * @return GroupId Group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Custom group description field
                     * @return GroupExDescriptions Custom group description field
                     * 
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取Group remarks
                     * @return Tag Group remarks
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time.
                     * @return CreationTimestamp Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time.
                     * 
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
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
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * Group remarks
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * Group creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time.
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETGROUPINFORESPONSE_H_
