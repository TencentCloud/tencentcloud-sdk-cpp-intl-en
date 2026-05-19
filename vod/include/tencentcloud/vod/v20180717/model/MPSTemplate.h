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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS task template description.
                */
                class MPSTemplate : public AbstractModel
                {
                public:
                    MPSTemplate();
                    ~MPSTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS template type. Valid values:
<li>Transcode: transcoding template.</li>
                     * @return TaskType MPS template type. Valid values:
<li>Transcode: transcoding template.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置MPS template type. Valid values:
<li>Transcode: transcoding template.</li>
                     * @param _taskType MPS template type. Valid values:
<li>Transcode: transcoding template.</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取MPS task template detail.
                     * @return MPSTemplateInfo MPS task template detail.
                     * 
                     */
                    std::string GetMPSTemplateInfo() const;

                    /**
                     * 设置MPS task template detail.
                     * @param _mPSTemplateInfo MPS task template detail.
                     * 
                     */
                    void SetMPSTemplateInfo(const std::string& _mPSTemplateInfo);

                    /**
                     * 判断参数 MPSTemplateInfo 是否已赋值
                     * @return MPSTemplateInfo 是否已赋值
                     * 
                     */
                    bool MPSTemplateInfoHasBeenSet() const;

                private:

                    /**
                     * MPS template type. Valid values:
<li>Transcode: transcoding template.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * MPS task template detail.
                     */
                    std::string m_mPSTemplateInfo;
                    bool m_mPSTemplateInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_
