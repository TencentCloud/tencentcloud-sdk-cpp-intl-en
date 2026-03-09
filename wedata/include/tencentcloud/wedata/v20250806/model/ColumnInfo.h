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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ColumnInfo
                */
                class ColumnInfo : public AbstractModel
                {
                public:
                    ColumnInfo();
                    ~ColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Field name
                     * @return Name Field name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field name
                     * @param _name Field name
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
                     * 获取Field length.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Length Field length.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置Field length.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _length Field length.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Field order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Position Field order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Field order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _position Field order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Is partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPartition Is partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Is partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPartition Is partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                private:

                    /**
                     * Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Field name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Field length.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Field order.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Is partition field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_
