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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserMessage.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Working group information
                */
                class WorkGroupInfo : public AbstractModel
                {
                public:
                    WorkGroupInfo();
                    ~WorkGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the working group that have been queried
                     * @return WorkGroupId Unique ID of the working group that have been queried
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Unique ID of the working group that have been queried
                     * @param _workGroupId Unique ID of the working group that have been queried
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Working group name
                     * @return WorkGroupName Working group name
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置Working group name
                     * @param _workGroupName Working group name
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupDescription Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupDescription Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Number of users associated with working groups
                     * @return UserNum Number of users associated with working groups
                     * 
                     */
                    int64_t GetUserNum() const;

                    /**
                     * 设置Number of users associated with working groups
                     * @param _userNum Number of users associated with working groups
                     * 
                     */
                    void SetUserNum(const int64_t& _userNum);

                    /**
                     * 判断参数 UserNum 是否已赋值
                     * @return UserNum 是否已赋值
                     * 
                     */
                    bool UserNumHasBeenSet() const;

                    /**
                     * 获取Collection of users associated with working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserSet Collection of users associated with working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserMessage> GetUserSet() const;

                    /**
                     * 设置Collection of users associated with working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userSet Collection of users associated with working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserSet(const std::vector<UserMessage>& _userSet);

                    /**
                     * 判断参数 UserSet 是否已赋值
                     * @return UserSet 是否已赋值
                     * 
                     */
                    bool UserSetHasBeenSet() const;

                    /**
                     * 获取Collections of permissions bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicySet Collections of permissions bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置Collections of permissions bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policySet Collections of permissions bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取Creators of working groups
                     * @return Creator Creators of working groups
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creators of working groups
                     * @param _creator Creators of working groups
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取The creation time of the working group, e.g. at 16:19:32 on Jul 28, 2021
                     * @return CreateTime The creation time of the working group, e.g. at 16:19:32 on Jul 28, 2021
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time of the working group, e.g. at 16:19:32 on Jul 28, 2021
                     * @param _createTime The creation time of the working group, e.g. at 16:19:32 on Jul 28, 2021
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the working group that have been queried
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Working group name
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * Number of users associated with working groups
                     */
                    int64_t m_userNum;
                    bool m_userNumHasBeenSet;

                    /**
                     * Collection of users associated with working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserMessage> m_userSet;
                    bool m_userSetHasBeenSet;

                    /**
                     * Collections of permissions bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Creators of working groups
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * The creation time of the working group, e.g. at 16:19:32 on Jul 28, 2021
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_
