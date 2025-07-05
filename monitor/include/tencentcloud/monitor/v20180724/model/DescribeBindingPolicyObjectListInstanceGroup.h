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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_

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
                * Instance group information returned by the DescribeBindingPolicyObjectList API
                */
                class DescribeBindingPolicyObjectListInstanceGroup : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListInstanceGroup();
                    ~DescribeBindingPolicyObjectListInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance group ID.
                     * @return InstanceGroupId Instance group ID.
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID.
                     * @param _instanceGroupId Instance group ID.
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy type name.
                     * @return ViewName Alarm policy type name.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Alarm policy type name.
                     * @param _viewName Alarm policy type name.
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Uin that was last edited.
                     * @return LastEditUin Uin that was last edited.
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置Uin that was last edited.
                     * @param _lastEditUin Uin that was last edited.
                     * 
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Instance group name.
                     * @return GroupName Instance group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Instance group name.
                     * @param _groupName Instance group name.
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
                     * 获取Number of instances.
                     * @return InstanceSum Number of instances.
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置Number of instances.
                     * @param _instanceSum Number of instances.
                     * 
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     * 
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param _insertTime Creation time.
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Regions where the instances reside.
Note: This field may return null, indicating that no valid value was found.
                     * @return Regions Regions where the instances reside.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置Regions where the instances reside.
Note: This field may return null, indicating that no valid value was found.
                     * @param _regions Regions where the instances reside.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * Instance group ID.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Alarm policy type name.
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

                    /**
                     * Regions where the instances reside.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_
