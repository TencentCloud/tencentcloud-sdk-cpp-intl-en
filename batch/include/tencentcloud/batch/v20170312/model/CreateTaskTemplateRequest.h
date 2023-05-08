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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTaskTemplate request structure.
                */
                class CreateTaskTemplateRequest : public AbstractModel
                {
                public:
                    CreateTaskTemplateRequest();
                    ~CreateTaskTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task template name
                     * @return TaskTemplateName Task template name
                     */
                    std::string GetTaskTemplateName() const;

                    /**
                     * 设置Task template name
                     * @param TaskTemplateName Task template name
                     */
                    void SetTaskTemplateName(const std::string& _taskTemplateName);

                    /**
                     * 判断参数 TaskTemplateName 是否已赋值
                     * @return TaskTemplateName 是否已赋值
                     */
                    bool TaskTemplateNameHasBeenSet() const;

                    /**
                     * 获取Task template content with the same parameter requirements as the task
                     * @return TaskTemplateInfo Task template content with the same parameter requirements as the task
                     */
                    Task GetTaskTemplateInfo() const;

                    /**
                     * 设置Task template content with the same parameter requirements as the task
                     * @param TaskTemplateInfo Task template content with the same parameter requirements as the task
                     */
                    void SetTaskTemplateInfo(const Task& _taskTemplateInfo);

                    /**
                     * 判断参数 TaskTemplateInfo 是否已赋值
                     * @return TaskTemplateInfo 是否已赋值
                     */
                    bool TaskTemplateInfoHasBeenSet() const;

                    /**
                     * 获取Task template description
                     * @return TaskTemplateDescription Task template description
                     */
                    std::string GetTaskTemplateDescription() const;

                    /**
                     * 设置Task template description
                     * @param TaskTemplateDescription Task template description
                     */
                    void SetTaskTemplateDescription(const std::string& _taskTemplateDescription);

                    /**
                     * 判断参数 TaskTemplateDescription 是否已赋值
                     * @return TaskTemplateDescription 是否已赋值
                     */
                    bool TaskTemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取Specifies the tags you want to bind to a task template. Each task template supports up to 10 tags.
                     * @return Tags Specifies the tags you want to bind to a task template. Each task template supports up to 10 tags.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Specifies the tags you want to bind to a task template. Each task template supports up to 10 tags.
                     * @param Tags Specifies the tags you want to bind to a task template. Each task template supports up to 10 tags.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Task template name
                     */
                    std::string m_taskTemplateName;
                    bool m_taskTemplateNameHasBeenSet;

                    /**
                     * Task template content with the same parameter requirements as the task
                     */
                    Task m_taskTemplateInfo;
                    bool m_taskTemplateInfoHasBeenSet;

                    /**
                     * Task template description
                     */
                    std::string m_taskTemplateDescription;
                    bool m_taskTemplateDescriptionHasBeenSet;

                    /**
                     * Specifies the tags you want to bind to a task template. Each task template supports up to 10 tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_
