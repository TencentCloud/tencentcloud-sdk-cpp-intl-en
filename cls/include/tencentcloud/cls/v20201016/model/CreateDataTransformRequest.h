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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDataTransform request structure.
                */
                class CreateDataTransformRequest : public AbstractModel
                {
                public:
                    CreateDataTransformRequest();
                    ~CreateDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * @return FuncType Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * @param _funcType Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                    /**
                     * 获取Source log topic
                     * @return SrcTopicId Source log topic
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source log topic
                     * @param _srcTopicId Source log topic
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

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
                     * 获取Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * @return TaskType Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * @param _taskType Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Destination topic_id and alias of processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
                     * @return DstResources Destination topic_id and alias of processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Destination topic_id and alias of processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
                     * @param _dstResources Destination topic_id and alias of processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
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
                     * 获取Test data used for previewing the processing result
                     * @return PreviewLogStatistics Test data used for previewing the processing result
                     * 
                     */
                    std::vector<PreviewLogStatistic> GetPreviewLogStatistics() const;

                    /**
                     * 设置Test data used for previewing the processing result
                     * @param _previewLogStatistics Test data used for previewing the processing result
                     * 
                     */
                    void SetPreviewLogStatistics(const std::vector<PreviewLogStatistic>& _previewLogStatistics);

                    /**
                     * 判断参数 PreviewLogStatistics 是否已赋值
                     * @return PreviewLogStatistics 是否已赋值
                     * 
                     */
                    bool PreviewLogStatisticsHasBeenSet() const;

                private:

                    /**
                     * Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                    /**
                     * Source log topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

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
                     * Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Destination topic_id and alias of processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Test data used for previewing the processing result
                     */
                    std::vector<PreviewLogStatistic> m_previewLogStatistics;
                    bool m_previewLogStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
