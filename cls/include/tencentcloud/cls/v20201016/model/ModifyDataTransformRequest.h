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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyDataTransform request structure.
                */
                class ModifyDataTransformRequest : public AbstractModel
                {
                public:
                    ModifyDataTransformRequest();
                    ~ModifyDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data processing task ID
                     * @return TaskId Data processing task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Data processing task ID
                     * @param _taskId Data processing task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Data processing task name
                     * @return Name Data processing task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data processing task name
                     * @param _name Data processing task name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Data processing statement
                     * @return EtlContent Data processing statement
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Data processing statement
                     * @param _etlContent Data processing statement
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @return EnableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @param _enableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取Destination topic ID and alias of the data processing task
                     * @return DstResources Destination topic ID and alias of the data processing task
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Destination topic ID and alias of the data processing task
                     * @param _dstResources Destination topic ID and alias of the data processing task
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @return HasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @param _hasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * Data processing task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data processing task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data processing statement
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Destination topic ID and alias of the data processing task
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
