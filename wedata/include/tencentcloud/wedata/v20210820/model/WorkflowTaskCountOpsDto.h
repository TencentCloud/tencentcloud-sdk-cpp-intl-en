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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/PairDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Workflow Task Statistics
                */
                class WorkflowTaskCountOpsDto : public AbstractModel
                {
                public:
                    WorkflowTaskCountOpsDto();
                    ~WorkflowTaskCountOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Workflow Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Count Number of Workflow Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of Workflow Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _count Number of Workflow Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Task Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TypeCount Task Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<PairDto> GetTypeCount() const;

                    /**
                     * 设置Task Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _typeCount Task Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeCount(const std::vector<PairDto>& _typeCount);

                    /**
                     * 判断参数 TypeCount 是否已赋值
                     * @return TypeCount 是否已赋值
                     * 
                     */
                    bool TypeCountHasBeenSet() const;

                    /**
                     * 获取Task Cycle Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleCount Task Cycle Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<PairDto> GetCycleCount() const;

                    /**
                     * 设置Task Cycle Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleCount Task Cycle Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleCount(const std::vector<PairDto>& _cycleCount);

                    /**
                     * 判断参数 CycleCount 是否已赋值
                     * @return CycleCount 是否已赋值
                     * 
                     */
                    bool CycleCountHasBeenSet() const;

                private:

                    /**
                     * Number of Workflow Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Task Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<PairDto> m_typeCount;
                    bool m_typeCountHasBeenSet;

                    /**
                     * Task Cycle Type Dimension Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<PairDto> m_cycleCount;
                    bool m_cycleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_
