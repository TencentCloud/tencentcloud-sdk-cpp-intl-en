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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The log topic information
                */
                class ClsLogTopicInfo : public AbstractModel
                {
                public:
                    ClsLogTopicInfo();
                    ~ClsLogTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the task.
                     * @return TaskName Name of the task.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of the task.
                     * @param _taskName Name of the task.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Name of the site.
                     * @return ZoneName Name of the site.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site.
                     * @param _zoneName Name of the site.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取ID of the logset.
                     * @return LogSetId ID of the logset.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置ID of the logset.
                     * @param _logSetId ID of the logset.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取ID of the log topic.
                     * @return TopicId ID of the log topic.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param _topicId ID of the log topic.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Type of the task.
                     * @return EntityType Type of the task.
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Type of the task.
                     * @param _entityType Type of the task.
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取Retention period of the log topic.
                     * @return Period Retention period of the log topic.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Retention period of the log topic.
                     * @param _period Retention period of the log topic.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether the log topic is enabled.
                     * @return Enabled Whether the log topic is enabled.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the log topic is enabled.
                     * @param _enabled Whether the log topic is enabled.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Whether the log topic is deleted.
                     * @return Deleted Whether the log topic is deleted.
                     * 
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置Whether the log topic is deleted.
                     * @param _deleted Whether the log topic is deleted.
                     * 
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Target location. Values:
<li>`cls`: Ship logs to CLS;</li>
<li>`custom_enpoint`: Ship logs to a custom address.</li>
                     * @return Target Target location. Values:
<li>`cls`: Ship logs to CLS;</li>
<li>`custom_enpoint`: Ship logs to a custom address.</li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target location. Values:
<li>`cls`: Ship logs to CLS;</li>
<li>`custom_enpoint`: Ship logs to a custom address.</li>
                     * @param _target Target location. Values:
<li>`cls`: Ship logs to CLS;</li>
<li>`custom_enpoint`: Ship logs to a custom address.</li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Region of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogSetRegion Region of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置Region of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logSetRegion Region of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     * 
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * @return Area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * @param _area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Type of the shipping task. Values:
<li>`cls`: Ship logs to CLS.</li>
<li>`custom_endpoint`: Ship logs to custom APIs.</li>
                     * @return LogSetType Type of the shipping task. Values:
<li>`cls`: Ship logs to CLS.</li>
<li>`custom_endpoint`: Ship logs to custom APIs.</li>
                     * 
                     */
                    std::string GetLogSetType() const;

                    /**
                     * 设置Type of the shipping task. Values:
<li>`cls`: Ship logs to CLS.</li>
<li>`custom_endpoint`: Ship logs to custom APIs.</li>
                     * @param _logSetType Type of the shipping task. Values:
<li>`cls`: Ship logs to CLS.</li>
<li>`custom_endpoint`: Ship logs to custom APIs.</li>
                     * 
                     */
                    void SetLogSetType(const std::string& _logSetType);

                    /**
                     * 判断参数 LogSetType 是否已赋值
                     * @return LogSetType 是否已赋值
                     * 
                     */
                    bool LogSetTypeHasBeenSet() const;

                private:

                    /**
                     * Name of the task.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Name of the site.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * ID of the logset.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * ID of the log topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Type of the task.
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * Retention period of the log topic.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether the log topic is enabled.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Whether the log topic is deleted.
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Target location. Values:
<li>`cls`: Ship logs to CLS;</li>
<li>`custom_enpoint`: Ship logs to a custom address.</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Region of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Type of the shipping task. Values:
<li>`cls`: Ship logs to CLS.</li>
<li>`custom_endpoint`: Ship logs to custom APIs.</li>
                     */
                    std::string m_logSetType;
                    bool m_logSetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_
