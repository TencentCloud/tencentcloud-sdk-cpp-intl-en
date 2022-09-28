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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_

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
                * ModifyLogTopicTask request structure.
                */
                class ModifyLogTopicTaskRequest : public AbstractModel
                {
                public:
                    ModifyLogTopicTaskRequest();
                    ~ModifyLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取ID of the log topic.
                     * @return TopicId ID of the log topic.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param TopicId ID of the log topic.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

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
                     * 获取The new topic name. If you do not specify this field, no changes will be made.
                     * @return TopicName The new topic name. If you do not specify this field, no changes will be made.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置The new topic name. If you do not specify this field, no changes will be made.
                     * @param TopicName The new topic name. If you do not specify this field, no changes will be made.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取The new logset name.
                     * @return LogSetName The new logset name.
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置The new logset name.
                     * @param LogSetName The new logset name.
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取The retention period of the updated logset.
                     * @return Period The retention period of the updated logset.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The retention period of the updated logset.
                     * @param Period The retention period of the updated logset.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取List of shipping entities to be deleted.
                     * @return DropEntityList List of shipping entities to be deleted.
                     */
                    std::vector<std::string> GetDropEntityList() const;

                    /**
                     * 设置List of shipping entities to be deleted.
                     * @param DropEntityList List of shipping entities to be deleted.
                     */
                    void SetDropEntityList(const std::vector<std::string>& _dropEntityList);

                    /**
                     * 判断参数 DropEntityList 是否已赋值
                     * @return DropEntityList 是否已赋值
                     */
                    bool DropEntityListHasBeenSet() const;

                    /**
                     * 获取List of shipping entities to be added.
                     * @return AddedEntityList List of shipping entities to be added.
                     */
                    std::vector<std::string> GetAddedEntityList() const;

                    /**
                     * 设置List of shipping entities to be added.
                     * @param AddedEntityList List of shipping entities to be added.
                     */
                    void SetAddedEntityList(const std::vector<std::string>& _addedEntityList);

                    /**
                     * 判断参数 AddedEntityList 是否已赋值
                     * @return AddedEntityList 是否已赋值
                     */
                    bool AddedEntityListHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Region of the logset.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

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
                     * Name of the shipping task.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * The new topic name. If you do not specify this field, no changes will be made.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * The new logset name.
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * The retention period of the updated logset.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * List of shipping entities to be deleted.
                     */
                    std::vector<std::string> m_dropEntityList;
                    bool m_dropEntityListHasBeenSet;

                    /**
                     * List of shipping entities to be added.
                     */
                    std::vector<std::string> m_addedEntityList;
                    bool m_addedEntityListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_
