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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Argument.h>
#include <tencentcloud/tse/v20201207/model/TrafficGray.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Lane rule
                */
                class GovernanceLaneRule : public AbstractModel
                {
                public:
                    GovernanceLaneRule();
                    ~GovernanceLaneRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lane rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID Lane rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Lane rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD Lane rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Swimlane group of the lane
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LaneGroup Swimlane group of the lane
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLaneGroup() const;

                    /**
                     * 设置Swimlane group of the lane
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _laneGroup Swimlane group of the lane
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLaneGroup(const std::string& _laneGroup);

                    /**
                     * 判断参数 LaneGroup 是否已赋值
                     * @return LaneGroup 是否已赋值
                     * 
                     */
                    bool LaneGroupHasBeenSet() const;

                    /**
                     * 获取Rule Enable Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Rule Enable Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Rule Enable Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Rule Enable Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Traffic Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrafficLabels Traffic Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Argument> GetTrafficLabels() const;

                    /**
                     * 设置Traffic Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trafficLabels Traffic Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrafficLabels(const std::vector<Argument>& _trafficLabels);

                    /**
                     * 判断参数 TrafficLabels 是否已赋值
                     * @return TrafficLabels 是否已赋值
                     * 
                     */
                    bool TrafficLabelsHasBeenSet() const;

                    /**
                     * 获取Multiple traffic tag matching methods
AND
OR
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrafficMatchMode Multiple traffic tag matching methods
AND
OR
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTrafficMatchMode() const;

                    /**
                     * 设置Multiple traffic tag matching methods
AND
OR
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trafficMatchMode Multiple traffic tag matching methods
AND
OR
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrafficMatchMode(const std::string& _trafficMatchMode);

                    /**
                     * 判断参数 TrafficMatchMode 是否已赋值
                     * @return TrafficMatchMode 是否已赋值
                     * 
                     */
                    bool TrafficMatchModeHasBeenSet() const;

                    /**
                     * 获取Lane match mode
STRICT: Strict match
PERMISSIVE: Loose match
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LaneMatchMode Lane match mode
STRICT: Strict match
PERMISSIVE: Loose match
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLaneMatchMode() const;

                    /**
                     * 设置Lane match mode
STRICT: Strict match
PERMISSIVE: Loose match
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _laneMatchMode Lane match mode
STRICT: Strict match
PERMISSIVE: Loose match
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLaneMatchMode(const std::string& _laneMatchMode);

                    /**
                     * 判断参数 LaneMatchMode 是否已赋值
                     * @return LaneMatchMode 是否已赋值
                     * 
                     */
                    bool LaneMatchModeHasBeenSet() const;

                    /**
                     * 获取Lane grayscale rule
                     * @return TrafficGray Lane grayscale rule
                     * 
                     */
                    TrafficGray GetTrafficGray() const;

                    /**
                     * 设置Lane grayscale rule
                     * @param _trafficGray Lane grayscale rule
                     * 
                     */
                    void SetTrafficGray(const TrafficGray& _trafficGray);

                    /**
                     * 判断参数 TrafficGray 是否已赋值
                     * @return TrafficGray 是否已赋值
                     * 
                     */
                    bool TrafficGrayHasBeenSet() const;

                    /**
                     * 获取Lane rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Lane rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Lane rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Lane rule description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Lane tag content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LaneLabelValue Lane tag content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLaneLabelValue() const;

                    /**
                     * 设置Lane tag content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _laneLabelValue Lane tag content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLaneLabelValue(const std::string& _laneLabelValue);

                    /**
                     * 判断参数 LaneLabelValue 是否已赋值
                     * @return LaneLabelValue 是否已赋值
                     * 
                     */
                    bool LaneLabelValueHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Enabling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableTime Enabling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置Enabling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableTime Enabling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Lane rule priority
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Priority Lane rule priority
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Lane rule priority
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _priority Lane rule priority
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Rule abstract
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Revision Rule abstract
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置Rule abstract
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _revision Rule abstract
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                private:

                    /**
                     * Lane rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * lane name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Swimlane group of the lane
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_laneGroup;
                    bool m_laneGroupHasBeenSet;

                    /**
                     * Rule Enable Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Traffic Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Argument> m_trafficLabels;
                    bool m_trafficLabelsHasBeenSet;

                    /**
                     * Multiple traffic tag matching methods
AND
OR
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_trafficMatchMode;
                    bool m_trafficMatchModeHasBeenSet;

                    /**
                     * Lane match mode
STRICT: Strict match
PERMISSIVE: Loose match
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_laneMatchMode;
                    bool m_laneMatchModeHasBeenSet;

                    /**
                     * Lane grayscale rule
                     */
                    TrafficGray m_trafficGray;
                    bool m_trafficGrayHasBeenSet;

                    /**
                     * Lane rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Lane tag content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_laneLabelValue;
                    bool m_laneLabelValueHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Enabling time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Lane rule priority
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Rule abstract
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_
