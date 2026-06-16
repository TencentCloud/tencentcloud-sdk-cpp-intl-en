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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/JoinRelationField.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Join tables and view association information between original tables
                */
                class JoinRelation : public AbstractModel
                {
                public:
                    JoinRelation();
                    ~JoinRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Association relationship id, used by the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JoinId Association relationship id, used by the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJoinId() const;

                    /**
                     * 设置Association relationship id, used by the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _joinId Association relationship id, used by the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJoinId(const std::string& _joinId);

                    /**
                     * 判断参数 JoinId 是否已赋值
                     * @return JoinId 是否已赋值
                     * 
                     */
                    bool JoinIdHasBeenSet() const;

                    /**
                     * 获取Original table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceTableNodeId Original table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceTableNodeId() const;

                    /**
                     * 设置Original table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceTableNodeId Original table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceTableNodeId(const std::string& _sourceTableNodeId);

                    /**
                     * 判断参数 SourceTableNodeId 是否已赋值
                     * @return SourceTableNodeId 是否已赋值
                     * 
                     */
                    bool SourceTableNodeIdHasBeenSet() const;

                    /**
                     * 获取Target table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetTableNodeId Target table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetTableNodeId() const;

                    /**
                     * 设置Target table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetTableNodeId Target table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetTableNodeId(const std::string& _targetTableNodeId);

                    /**
                     * 判断参数 TargetTableNodeId 是否已赋值
                     * @return TargetTableNodeId 是否已赋值
                     * 
                     */
                    bool TargetTableNodeIdHasBeenSet() const;

                    /**
                     * 获取Association type of multi-table join
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JoinType Association type of multi-table join
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置Association type of multi-table join
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _joinType Association type of multi-table join
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取Field list for joined tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fields Field list for joined tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<JoinRelationField> GetFields() const;

                    /**
                     * 设置Field list for joined tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fields Field list for joined tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFields(const std::vector<JoinRelationField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * Association relationship id, used by the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_joinId;
                    bool m_joinIdHasBeenSet;

                    /**
                     * Original table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceTableNodeId;
                    bool m_sourceTableNodeIdHasBeenSet;

                    /**
                     * Target table node id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetTableNodeId;
                    bool m_targetTableNodeIdHasBeenSet;

                    /**
                     * Association type of multi-table join
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * Field list for joined tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<JoinRelationField> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_
