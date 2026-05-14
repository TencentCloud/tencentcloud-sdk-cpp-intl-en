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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Basic info of the group
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取group ID
                     * @return GroupId group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group ID
                     * @param _groupId group ID
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
                     * 获取Group name
                     * @return GroupName Group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name
                     * @param _groupName Group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The time when the group is created, in ms.	
                     * @return CreateTime The time when the group is created, in ms.	
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the group is created, in ms.	
                     * @param _createTime The time when the group is created, in ms.	
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The time when the group is updated, in ms.	
                     * @return UpdateTime The time when the group is updated, in ms.	
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The time when the group is updated, in ms.	
                     * @param _updateTime The time when the group is updated, in ms.	
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Group description
                     * @return Description Group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Group description
                     * @param _description Group description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Number of devices grouped in
                     * @return DeviceNum Number of devices grouped in
                     * 
                     */
                    int64_t GetDeviceNum() const;

                    /**
                     * 设置Number of devices grouped in
                     * @param _deviceNum Number of devices grouped in
                     * 
                     */
                    void SetDeviceNum(const int64_t& _deviceNum);

                    /**
                     * 判断参数 DeviceNum 是否已赋值
                     * @return DeviceNum 是否已赋值
                     * 
                     */
                    bool DeviceNumHasBeenSet() const;

                private:

                    /**
                     * group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The time when the group is created, in ms.	
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The time when the group is updated, in ms.	
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of devices grouped in
                     */
                    int64_t m_deviceNum;
                    bool m_deviceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GROUPINFO_H_
