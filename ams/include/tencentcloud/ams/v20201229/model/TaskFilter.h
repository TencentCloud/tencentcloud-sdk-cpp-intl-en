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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TASKFILTER_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TASKFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Task filter
                */
                class TaskFilter : public AbstractModel
                {
                public:
                    TaskFilter();
                    ~TaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to pass in the business type of a task as a filter. `Biztype` is the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. Different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API. `Biztype` can contain 3–32 digits, letters, and underscores.<br>Note: when this parameter is not passed in, tasks will not be filtered by business type by default.
                     * @return BizType This field is used to pass in the business type of a task as a filter. `Biztype` is the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. Different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API. `Biztype` can contain 3–32 digits, letters, and underscores.<br>Note: when this parameter is not passed in, tasks will not be filtered by business type by default.
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置This field is used to pass in the business type of a task as a filter. `Biztype` is the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. Different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API. `Biztype` can contain 3–32 digits, letters, and underscores.<br>Note: when this parameter is not passed in, tasks will not be filtered by business type by default.
                     * @param BizType This field is used to pass in the business type of a task as a filter. `Biztype` is the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. Different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API. `Biztype` can contain 3–32 digits, letters, and underscores.<br>Note: when this parameter is not passed in, tasks will not be filtered by business type by default.
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取This field is used to pass in the type of an audio moderation task as a filter. Valid values: **VIDEO** (video on demand moderation), **AUDIO** (audio on demand moderation), **LIVE_VIDEO** (video live streaming moderation), **LIVE_AUDIO** (audio live streaming moderation).<br>Note: when this parameter is not passed in, tasks will not be filtered by task type by default.
                     * @return Type This field is used to pass in the type of an audio moderation task as a filter. Valid values: **VIDEO** (video on demand moderation), **AUDIO** (audio on demand moderation), **LIVE_VIDEO** (video live streaming moderation), **LIVE_AUDIO** (audio live streaming moderation).<br>Note: when this parameter is not passed in, tasks will not be filtered by task type by default.
                     */
                    std::string GetType() const;

                    /**
                     * 设置This field is used to pass in the type of an audio moderation task as a filter. Valid values: **VIDEO** (video on demand moderation), **AUDIO** (audio on demand moderation), **LIVE_VIDEO** (video live streaming moderation), **LIVE_AUDIO** (audio live streaming moderation).<br>Note: when this parameter is not passed in, tasks will not be filtered by task type by default.
                     * @param Type This field is used to pass in the type of an audio moderation task as a filter. Valid values: **VIDEO** (video on demand moderation), **AUDIO** (audio on demand moderation), **LIVE_VIDEO** (video live streaming moderation), **LIVE_AUDIO** (audio live streaming moderation).<br>Note: when this parameter is not passed in, tasks will not be filtered by task type by default.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This field is used to pass in the operation suggestion of an audio moderation task as a filter. Valid values: **Block**, **Review**, **Pass**.<br>Note: when this parameter is not passed in, tasks will not be filtered by operation suggestion by default.
                     * @return Suggestion This field is used to pass in the operation suggestion of an audio moderation task as a filter. Valid values: **Block**, **Review**, **Pass**.<br>Note: when this parameter is not passed in, tasks will not be filtered by operation suggestion by default.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to pass in the operation suggestion of an audio moderation task as a filter. Valid values: **Block**, **Review**, **Pass**.<br>Note: when this parameter is not passed in, tasks will not be filtered by operation suggestion by default.
                     * @param Suggestion This field is used to pass in the operation suggestion of an audio moderation task as a filter. Valid values: **Block**, **Review**, **Pass**.<br>Note: when this parameter is not passed in, tasks will not be filtered by operation suggestion by default.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to pass in the status of a moderation task as a filter. Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).<br>Note: when this parameter is not passed in, tasks will not be filtered by task status by default.
                     * @return TaskStatus This field is used to pass in the status of a moderation task as a filter. Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).<br>Note: when this parameter is not passed in, tasks will not be filtered by task status by default.
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置This field is used to pass in the status of a moderation task as a filter. Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).<br>Note: when this parameter is not passed in, tasks will not be filtered by task status by default.
                     * @param TaskStatus This field is used to pass in the status of a moderation task as a filter. Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).<br>Note: when this parameter is not passed in, tasks will not be filtered by task status by default.
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * This field is used to pass in the business type of a task as a filter. `Biztype` is the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. Different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API. `Biztype` can contain 3–32 digits, letters, and underscores.<br>Note: when this parameter is not passed in, tasks will not be filtered by business type by default.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field is used to pass in the type of an audio moderation task as a filter. Valid values: **VIDEO** (video on demand moderation), **AUDIO** (audio on demand moderation), **LIVE_VIDEO** (video live streaming moderation), **LIVE_AUDIO** (audio live streaming moderation).<br>Note: when this parameter is not passed in, tasks will not be filtered by task type by default.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This field is used to pass in the operation suggestion of an audio moderation task as a filter. Valid values: **Block**, **Review**, **Pass**.<br>Note: when this parameter is not passed in, tasks will not be filtered by operation suggestion by default.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to pass in the status of a moderation task as a filter. Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).<br>Note: when this parameter is not passed in, tasks will not be filtered by task status by default.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TASKFILTER_H_
