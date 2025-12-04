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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ExtractBlindWatermark request structure.
                */
                class ExtractBlindWatermarkRequest : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkRequest();
                    ~ExtractBlindWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-abseq: ab sequence copyright digital watermark.</li>
                     * @return Type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-abseq: ab sequence copyright digital watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-abseq: ab sequence copyright digital watermark.</li>
                     * @param _type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-abseq: ab sequence copyright digital watermark.</li>
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
                     * 获取File input information for the Media Processing Service (MPS) task.
                     * @return InputInfo File input information for the Media Processing Service (MPS) task.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置File input information for the Media Processing Service (MPS) task.
                     * @param _inputInfo File input information for the Media Processing Service (MPS) task.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * @return TaskNotifyConfig Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * @param _taskNotifyConfig Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Configuration of the digital watermark extraction task.
                     * @return ExtractBlindWatermarkConfig Configuration of the digital watermark extraction task.
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置Configuration of the digital watermark extraction task.
                     * @param _extractBlindWatermarkConfig Configuration of the digital watermark extraction task.
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * @return ResourceId Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * @param _resourceId Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-abseq: ab sequence copyright digital watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * File input information for the Media Processing Service (MPS) task.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Configuration of the digital watermark extraction task.
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * Resource ID. Ensure that the corresponding resource is enabled. The default value is the primary resource ID of the account.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
