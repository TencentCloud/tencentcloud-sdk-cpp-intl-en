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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Lineage relationship.
                */
                class LineageRelation : public AbstractModel
                {
                public:
                    LineageRelation();
                    ~LineageRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Association ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelationId Association ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRelationId() const;

                    /**
                     * 设置Association ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relationId Association ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelationId(const std::string& _relationId);

                    /**
                     * 判断参数 RelationId 是否已赋值
                     * @return RelationId 是否已赋值
                     * 
                     */
                    bool RelationIdHasBeenSet() const;

                    /**
                     * 获取Source lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceUniqueId Source lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceUniqueId() const;

                    /**
                     * 设置Source lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceUniqueId Source lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceUniqueId(const std::string& _sourceUniqueId);

                    /**
                     * 判断参数 SourceUniqueId 是否已赋值
                     * @return SourceUniqueId 是否已赋值
                     * 
                     */
                    bool SourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取Target unique lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetUniqueId Target unique lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetUniqueId() const;

                    /**
                     * 设置Target unique lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetUniqueId Target unique lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetUniqueId(const std::string& _targetUniqueId);

                    /**
                     * 判断参数 TargetUniqueId 是否已赋值
                     * @return TargetUniqueId 是否已赋值
                     * 
                     */
                    bool TargetUniqueIdHasBeenSet() const;

                    /**
                     * 获取Lineage processing process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Processes Lineage processing process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LineageProcess> GetProcesses() const;

                    /**
                     * 设置Lineage processing process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processes Lineage processing process.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Association ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_relationId;
                    bool m_relationIdHasBeenSet;

                    /**
                     * Source lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceUniqueId;
                    bool m_sourceUniqueIdHasBeenSet;

                    /**
                     * Target unique lineage ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetUniqueId;
                    bool m_targetUniqueIdHasBeenSet;

                    /**
                     * Lineage processing process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LineageProcess> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_
