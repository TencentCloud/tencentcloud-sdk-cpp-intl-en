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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task template information
                */
                class TaskTemplateView : public AbstractModel
                {
                public:
                    TaskTemplateView();
                    ~TaskTemplateView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task template ID
                     * @return TaskTemplateId Task template ID
                     * 
                     */
                    std::string GetTaskTemplateId() const;

                    /**
                     * 设置Task template ID
                     * @param _taskTemplateId Task template ID
                     * 
                     */
                    void SetTaskTemplateId(const std::string& _taskTemplateId);

                    /**
                     * 判断参数 TaskTemplateId 是否已赋值
                     * @return TaskTemplateId 是否已赋值
                     * 
                     */
                    bool TaskTemplateIdHasBeenSet() const;

                    /**
                     * 获取Task template name
                     * @return TaskTemplateName Task template name
                     * 
                     */
                    std::string GetTaskTemplateName() const;

                    /**
                     * 设置Task template name
                     * @param _taskTemplateName Task template name
                     * 
                     */
                    void SetTaskTemplateName(const std::string& _taskTemplateName);

                    /**
                     * 判断参数 TaskTemplateName 是否已赋值
                     * @return TaskTemplateName 是否已赋值
                     * 
                     */
                    bool TaskTemplateNameHasBeenSet() const;

                    /**
                     * 获取Task template description
                     * @return TaskTemplateDescription Task template description
                     * 
                     */
                    std::string GetTaskTemplateDescription() const;

                    /**
                     * 设置Task template description
                     * @param _taskTemplateDescription Task template description
                     * 
                     */
                    void SetTaskTemplateDescription(const std::string& _taskTemplateDescription);

                    /**
                     * 判断参数 TaskTemplateDescription 是否已赋值
                     * @return TaskTemplateDescription 是否已赋值
                     * 
                     */
                    bool TaskTemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取Task template information
                     * @return TaskTemplateInfo Task template information
                     * 
                     */
                    Task GetTaskTemplateInfo() const;

                    /**
                     * 设置Task template information
                     * @param _taskTemplateInfo Task template information
                     * 
                     */
                    void SetTaskTemplateInfo(const Task& _taskTemplateInfo);

                    /**
                     * 判断参数 TaskTemplateInfo 是否已赋值
                     * @return TaskTemplateInfo 是否已赋值
                     * 
                     */
                    bool TaskTemplateInfoHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Tag list bound to the task template.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag list bound to the task template.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list bound to the task template.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _tags Tag list bound to the task template.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Task template ID
                     */
                    std::string m_taskTemplateId;
                    bool m_taskTemplateIdHasBeenSet;

                    /**
                     * Task template name
                     */
                    std::string m_taskTemplateName;
                    bool m_taskTemplateNameHasBeenSet;

                    /**
                     * Task template description
                     */
                    std::string m_taskTemplateDescription;
                    bool m_taskTemplateDescriptionHasBeenSet;

                    /**
                     * Task template information
                     */
                    Task m_taskTemplateInfo;
                    bool m_taskTemplateInfoHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Tag list bound to the task template.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_
