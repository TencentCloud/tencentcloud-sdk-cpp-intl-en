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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGTOPICTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLogTopicTask request structure.
                */
                class CreateLogTopicTaskRequest : public AbstractModel
                {
                public:
                    CreateLogTopicTaskRequest();
                    ~CreateLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Topic name of the logset.
                     * @return TopicName Topic name of the logset.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name of the logset.
                     * @param TopicName Topic name of the logset.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

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
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param ZoneId ID of the site.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Name of the site.
                     * @return ZoneName Name of the site.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site.
                     * @param ZoneName Name of the site.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Type of the shipping entity. Values:
<li>`domain`: L7 acceleration logs;</li>
<li>`application`: L4 acceleration logs;</li>
<li>`web-rateLiming`: Rate limiting logs;</li>
<li>`web-attack`: Web security logs;</li>
<li>`web-rule`: Custom rule logs;</li>
<li>`web-bot`: Bot management logs.</li>
                     * @return EntityType Type of the shipping entity. Values:
<li>`domain`: L7 acceleration logs;</li>
<li>`application`: L4 acceleration logs;</li>
<li>`web-rateLiming`: Rate limiting logs;</li>
<li>`web-attack`: Web security logs;</li>
<li>`web-rule`: Custom rule logs;</li>
<li>`web-bot`: Bot management logs.</li>
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Type of the shipping entity. Values:
<li>`domain`: L7 acceleration logs;</li>
<li>`application`: L4 acceleration logs;</li>
<li>`web-rateLiming`: Rate limiting logs;</li>
<li>`web-attack`: Web security logs;</li>
<li>`web-rule`: Custom rule logs;</li>
<li>`web-bot`: Bot management logs.</li>
                     * @param EntityType Type of the shipping entity. Values:
<li>`domain`: L7 acceleration logs;</li>
<li>`application`: L4 acceleration logs;</li>
<li>`web-rateLiming`: Rate limiting logs;</li>
<li>`web-attack`: Web security logs;</li>
<li>`web-rule`: Custom rule logs;</li>
<li>`web-bot`: Bot management logs.</li>
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取Retention period of the log topic. Value range: 1–366 (in days).
                     * @return Period Retention period of the log topic. Value range: 1–366 (in days).
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Retention period of the log topic. Value range: 1–366 (in days).
                     * @param Period Retention period of the log topic. Value range: 1–366 (in days).
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取List of shipping entities.
                     * @return EntityList List of shipping entities.
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置List of shipping entities.
                     * @param EntityList List of shipping entities.
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland).</li> If this field is not specified, the acceleration region will be determined based on the user’s region.
                     * @return Area Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland).</li> If this field is not specified, the acceleration region will be determined based on the user’s region.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland).</li> If this field is not specified, the acceleration region will be determined based on the user’s region.
                     * @param Area Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland).</li> If this field is not specified, the acceleration region will be determined based on the user’s region.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * ID of the logset.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Region of the logset.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * Topic name of the logset.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Name of the shipping task.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Name of the site.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Type of the shipping entity. Values:
<li>`domain`: L7 acceleration logs;</li>
<li>`application`: L4 acceleration logs;</li>
<li>`web-rateLiming`: Rate limiting logs;</li>
<li>`web-attack`: Web security logs;</li>
<li>`web-rule`: Custom rule logs;</li>
<li>`web-bot`: Bot management logs.</li>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * Retention period of the log topic. Value range: 1–366 (in days).
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * List of shipping entities.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland).</li> If this field is not specified, the acceleration region will be determined based on the user’s region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGTOPICTASKREQUEST_H_
