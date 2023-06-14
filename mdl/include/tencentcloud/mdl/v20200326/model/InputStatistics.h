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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTATISTICS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/PipelineInputStatistics.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Input statistics.
                */
                class InputStatistics : public AbstractModel
                {
                public:
                    InputStatistics();
                    ~InputStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input statistics of pipeline 0.
                     * @return Pipeline0 Input statistics of pipeline 0.
                     * 
                     */
                    std::vector<PipelineInputStatistics> GetPipeline0() const;

                    /**
                     * 设置Input statistics of pipeline 0.
                     * @param _pipeline0 Input statistics of pipeline 0.
                     * 
                     */
                    void SetPipeline0(const std::vector<PipelineInputStatistics>& _pipeline0);

                    /**
                     * 判断参数 Pipeline0 是否已赋值
                     * @return Pipeline0 是否已赋值
                     * 
                     */
                    bool Pipeline0HasBeenSet() const;

                    /**
                     * 获取Input statistics of pipeline 1.
                     * @return Pipeline1 Input statistics of pipeline 1.
                     * 
                     */
                    std::vector<PipelineInputStatistics> GetPipeline1() const;

                    /**
                     * 设置Input statistics of pipeline 1.
                     * @param _pipeline1 Input statistics of pipeline 1.
                     * 
                     */
                    void SetPipeline1(const std::vector<PipelineInputStatistics>& _pipeline1);

                    /**
                     * 判断参数 Pipeline1 是否已赋值
                     * @return Pipeline1 是否已赋值
                     * 
                     */
                    bool Pipeline1HasBeenSet() const;

                private:

                    /**
                     * Input statistics of pipeline 0.
                     */
                    std::vector<PipelineInputStatistics> m_pipeline0;
                    bool m_pipeline0HasBeenSet;

                    /**
                     * Input statistics of pipeline 1.
                     */
                    std::vector<PipelineInputStatistics> m_pipeline1;
                    bool m_pipeline1HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTATISTICS_H_
