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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATEWATERMARKDETECTIONREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATEWATERMARKDETECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AbWatermarkInputInfo.h>
#include <tencentcloud/mdl/v20200326/model/InputFileInfo.h>
#include <tencentcloud/mdl/v20200326/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateWatermarkDetection request structure.
                */
                class CreateWatermarkDetectionRequest : public AbstractModel
                {
                public:
                    CreateWatermarkDetectionRequest();
                    ~CreateWatermarkDetectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type, currently supports ExtractVideoABWatermarkId
                     * @return Type Task type, currently supports ExtractVideoABWatermarkId
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type, currently supports ExtractVideoABWatermarkId
                     * @param _type Task type, currently supports ExtractVideoABWatermarkId
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Input information
                     * @return InputInfo Input information
                     * 
                     */
                    AbWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置Input information
                     * @param _inputInfo Input information
                     * 
                     */
                    void SetInputInfo(const AbWatermarkInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Input file information
                     * @return InputFileInfo Input file information
                     * 
                     */
                    InputFileInfo GetInputFileInfo() const;

                    /**
                     * 设置Input file information
                     * @param _inputFileInfo Input file information
                     * 
                     */
                    void SetInputFileInfo(const InputFileInfo& _inputFileInfo);

                    /**
                     * 判断参数 InputFileInfo 是否已赋值
                     * @return InputFileInfo 是否已赋值
                     * 
                     */
                    bool InputFileInfoHasBeenSet() const;

                    /**
                     * 获取Input notification configuration
                     * @return TaskNotifyConfig Input notification configuration
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Input notification configuration
                     * @param _taskNotifyConfig Input notification configuration
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * Task type, currently supports ExtractVideoABWatermarkId
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Input information
                     */
                    AbWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Input file information
                     */
                    InputFileInfo m_inputFileInfo;
                    bool m_inputFileInfoHasBeenSet;

                    /**
                     * Input notification configuration
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATEWATERMARKDETECTIONREQUEST_H_
