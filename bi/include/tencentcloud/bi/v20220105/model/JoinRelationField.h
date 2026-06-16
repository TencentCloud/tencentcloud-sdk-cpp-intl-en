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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>


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
                class JoinRelationField : public AbstractModel
                {
                public:
                    JoinRelationField();
                    ~JoinRelationField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field association id, frontend usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FieldJoinId Field association id, frontend usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFieldJoinId() const;

                    /**
                     * 设置Field association id, frontend usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fieldJoinId Field association id, frontend usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFieldJoinId(const std::string& _fieldJoinId);

                    /**
                     * 判断参数 FieldJoinId 是否已赋值
                     * @return FieldJoinId 是否已赋值
                     * 
                     */
                    bool FieldJoinIdHasBeenSet() const;

                    /**
                     * 获取Original table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceField Original table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TableField GetSourceField() const;

                    /**
                     * 设置Original table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceField Original table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceField(const TableField& _sourceField);

                    /**
                     * 判断参数 SourceField 是否已赋值
                     * @return SourceField 是否已赋值
                     * 
                     */
                    bool SourceFieldHasBeenSet() const;

                    /**
                     * 获取Target table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetField Target table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TableField GetTargetField() const;

                    /**
                     * 设置Target table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetField Target table field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetField(const TableField& _targetField);

                    /**
                     * 判断参数 TargetField 是否已赋值
                     * @return TargetField 是否已赋值
                     * 
                     */
                    bool TargetFieldHasBeenSet() const;

                private:

                    /**
                     * Field association id, frontend usage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fieldJoinId;
                    bool m_fieldJoinIdHasBeenSet;

                    /**
                     * Original table field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TableField m_sourceField;
                    bool m_sourceFieldHasBeenSet;

                    /**
                     * Target table field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TableField m_targetField;
                    bool m_targetFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_
