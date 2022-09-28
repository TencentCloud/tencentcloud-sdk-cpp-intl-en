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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_

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
                * Details of the shipping task
                */
                class LogTopicDetailInfo : public AbstractModel
                {
                public:
                    LogTopicDetailInfo();
                    ~LogTopicDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the shipping task.
                     * @return TaskName Name of the shipping task.
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of the shipping task.
                     * @param TaskName Name of the shipping task.
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Region of the logset.
                     * @return LogSetRegion Region of the logset.
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置Region of the logset.
                     * @param LogSetRegion Region of the logset.
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取Type of the shipping task.
                     * @return EntityType Type of the shipping task.
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Type of the shipping task.
                     * @param EntityType Type of the shipping task.
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取List of tasks.
                     * @return EntityList List of tasks.
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置List of tasks.
                     * @param EntityList List of tasks.
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取ID of the logset.
                     * @return LogSetId ID of the logset.
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置ID of the logset.
                     * @param LogSetId ID of the logset.
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Name of the logset.
                     * @return LogSetName Name of the logset.
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置Name of the logset.
                     * @param LogSetName Name of the logset.
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取Topic ID of the shipping task.
                     * @return TopicId Topic ID of the shipping task.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID of the shipping task.
                     * @param TopicId Topic ID of the shipping task.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic name of the shipping task.
                     * @return TopicName Topic name of the shipping task.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name of the shipping task.
                     * @param TopicName Topic name of the shipping task.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Retention period of the shipping task topic. Unit: day.
                     * @return Period Retention period of the shipping task topic. Unit: day.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Retention period of the shipping task topic. Unit: day.
                     * @param Period Retention period of the shipping task topic. Unit: day.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether the shipping task is enabled.
                     * @return Enabled Whether the shipping task is enabled.
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the shipping task is enabled.
                     * @param Enabled Whether the shipping task is enabled.
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-mm-dd HH:MM:SS.
                     * @return CreateTime Creation time in the format of YYYY-mm-dd HH:MM:SS.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-mm-dd HH:MM:SS.
                     * @param CreateTime Creation time in the format of YYYY-mm-dd HH:MM:SS.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * @return Area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     * @param Area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZoneId ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Name of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneName Name of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZoneName Name of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Whether the shipping task is deleted. Values:
<li>`yes`: The shipping task is deleted;</li>
<li>`no`: The shipping task is not deleted.</li>
                     * @return Deleted Whether the shipping task is deleted. Values:
<li>`yes`: The shipping task is deleted;</li>
<li>`no`: The shipping task is not deleted.</li>
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置Whether the shipping task is deleted. Values:
<li>`yes`: The shipping task is deleted;</li>
<li>`no`: The shipping task is not deleted.</li>
                     * @param Deleted Whether the shipping task is deleted. Values:
<li>`yes`: The shipping task is deleted;</li>
<li>`no`: The shipping task is not deleted.</li>
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * Name of the shipping task.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Region of the logset.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * Type of the shipping task.
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * List of tasks.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * ID of the logset.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Name of the logset.
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * Topic ID of the shipping task.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic name of the shipping task.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Retention period of the shipping task topic. Unit: day.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether the shipping task is enabled.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-mm-dd HH:MM:SS.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * ID of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Name of the site.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Whether the shipping task is deleted. Values:
<li>`yes`: The shipping task is deleted;</li>
<li>`no`: The shipping task is not deleted.</li>
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_
