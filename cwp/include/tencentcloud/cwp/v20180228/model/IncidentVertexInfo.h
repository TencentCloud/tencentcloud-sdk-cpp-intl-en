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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VertexInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Event point information
                */
                class IncidentVertexInfo : public AbstractModel
                {
                public:
                    IncidentVertexInfo();
                    ~IncidentVertexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncidentId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncidentId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _incidentId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncidentId(const std::string& _incidentId);

                    /**
                     * 判断参数 IncidentId 是否已赋值
                     * @return IncidentId 是否已赋值
                     * 
                     */
                    bool IncidentIdHasBeenSet() const;

                    /**
                     * 获取The name of the table where the event occurred
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName The name of the table where the event occurred
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置The name of the table where the event occurred
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName The name of the table where the event occurred
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取A list of node information, with array items containing detailed node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vertex A list of node information, with array items containing detailed node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VertexInfo> GetVertex() const;

                    /**
                     * 设置A list of node information, with array items containing detailed node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vertex A list of node information, with array items containing detailed node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVertex(const std::vector<VertexInfo>& _vertex);

                    /**
                     * 判断参数 Vertex 是否已赋值
                     * @return Vertex 是否已赋值
                     * 
                     */
                    bool VertexHasBeenSet() const;

                    /**
                     * 获取Total number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VertexCount Total number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVertexCount() const;

                    /**
                     * 设置Total number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vertexCount Total number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVertexCount(const int64_t& _vertexCount);

                    /**
                     * 判断参数 VertexCount 是否已赋值
                     * @return VertexCount 是否已赋值
                     * 
                     */
                    bool VertexCountHasBeenSet() const;

                private:

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_incidentId;
                    bool m_incidentIdHasBeenSet;

                    /**
                     * The name of the table where the event occurred
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * A list of node information, with array items containing detailed node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VertexInfo> m_vertex;
                    bool m_vertexHasBeenSet;

                    /**
                     * Total number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vertexCount;
                    bool m_vertexCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
