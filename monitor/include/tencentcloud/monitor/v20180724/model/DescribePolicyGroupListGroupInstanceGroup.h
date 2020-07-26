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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Instance group that is bound to a policy group of the DescribePolicyGroupList API
                */
                class DescribePolicyGroupListGroupInstanceGroup : public AbstractModel
                {
                public:
                    DescribePolicyGroupListGroupInstanceGroup();
                    ~DescribePolicyGroupListGroupInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance group name ID.
                     * @return InstanceGroupId Instance group name ID.
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group name ID.
                     * @param InstanceGroupId Instance group name ID.
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Policy type view name.
                     * @return ViewName Policy type view name.
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Policy type view name.
                     * @param ViewName Policy type view name.
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Uin that was last edited.
                     * @return LastEditUin Uin that was last edited.
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置Uin that was last edited.
                     * @param LastEditUin Uin that was last edited.
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Instance group name.
                     * @return GroupName Instance group name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Instance group name.
                     * @param GroupName Instance group name.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Number of instances.
                     * @return InstanceSum Number of instances.
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置Number of instances.
                     * @param InstanceSum Number of instances.
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param UpdateTime Update time.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param InsertTime Creation time.
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * Instance group name ID.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Policy type view name.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Uin that was last edited.
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Instance group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Number of instances.
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * Update time.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_
