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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPMESSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Partial information about working groups
                */
                class WorkGroupMessage : public AbstractModel
                {
                public:
                    WorkGroupMessage();
                    ~WorkGroupMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the working group
                     * @return WorkGroupId Unique ID of the working group
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Unique ID of the working group
                     * @param _workGroupId Unique ID of the working group
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
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
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
                     * Unique ID of the working group
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
                     * Creator
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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPMESSAGE_H_
