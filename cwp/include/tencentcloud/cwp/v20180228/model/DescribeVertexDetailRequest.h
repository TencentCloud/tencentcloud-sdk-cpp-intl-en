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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVertexDetail request structure.
                */
                class DescribeVertexDetailRequest : public AbstractModel
                {
                public:
                    DescribeVertexDetailRequest();
                    ~DescribeVertexDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Point ID list
                     * @return VertexIds Point ID list
                     * 
                     */
                    std::vector<std::string> GetVertexIds() const;

                    /**
                     * 设置Point ID list
                     * @param _vertexIds Point ID list
                     * 
                     */
                    void SetVertexIds(const std::vector<std::string>& _vertexIds);

                    /**
                     * 判断参数 VertexIds 是否已赋值
                     * @return VertexIds 是否已赋值
                     * 
                     */
                    bool VertexIdsHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return IncidentId Event ID
                     * 
                     */
                    std::string GetIncidentId() const;

                    /**
                     * 设置Event ID
                     * @param _incidentId Event ID
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
                     * @return TableName The name of the table where the event occurred
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置The name of the table where the event occurred
                     * @param _tableName The name of the table where the event occurred
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Point ID list
                     */
                    std::vector<std::string> m_vertexIds;
                    bool m_vertexIdsHasBeenSet;

                    /**
                     * Event ID
                     */
                    std::string m_incidentId;
                    bool m_incidentIdHasBeenSet;

                    /**
                     * The name of the table where the event occurred
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_
