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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageResouce.h>
#include <tencentcloud/wedata/v20250806/model/LineageProcess.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Lineage Pair object.
                */
                class LineagePair : public AbstractModel
                {
                public:
                    LineagePair();
                    ~LineagePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source.
                     * @return Source Source.
                     * 
                     */
                    LineageResouce GetSource() const;

                    /**
                     * 设置Source.
                     * @param _source Source.
                     * 
                     */
                    void SetSource(const LineageResouce& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Goal.
                     * @return Target Goal.
                     * 
                     */
                    LineageResouce GetTarget() const;

                    /**
                     * 设置Goal.
                     * @param _target Goal.
                     * 
                     */
                    void SetTarget(const LineageResouce& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Lineage processing process.
                     * @return Processes Lineage processing process.
                     * 
                     */
                    std::vector<LineageProcess> GetProcesses() const;

                    /**
                     * 设置Lineage processing process.
                     * @param _processes Lineage processing process.
                     * 
                     */
                    void SetProcesses(const std::vector<LineageProcess>& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                private:

                    /**
                     * Source.
                     */
                    LineageResouce m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Goal.
                     */
                    LineageResouce m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Lineage processing process.
                     */
                    std::vector<LineageProcess> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_
