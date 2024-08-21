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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Table field information
                */
                class TColumn : public AbstractModel
                {
                public:
                    TColumn();
                    ~TColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Field name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Field name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Field default values
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Default Field default values
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Field default values
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _default Field default values
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Is the field non-empty?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotNull Is the field non-empty?
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetNotNull() const;

                    /**
                     * 设置Is the field non-empty?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notNull Is the field non-empty?
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotNull(const bool& _notNull);

                    /**
                     * 判断参数 NotNull 是否已赋值
                     * @return NotNull 是否已赋值
                     * 
                     */
                    bool NotNullHasBeenSet() const;

                    /**
                     * 获取Indicate the length of the entire numeric with a value of 1-38
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Precision Indicate the length of the entire numeric with a value of 1-38
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPrecision() const;

                    /**
                     * 设置Indicate the length of the entire numeric with a value of 1-38
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _precision Indicate the length of the entire numeric with a value of 1-38
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrecision(const int64_t& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取Indicates the length of the decimal part.
Scale is smaller than Precision.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scale Indicates the length of the decimal part.
Scale is smaller than Precision.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Indicates the length of the decimal part.
Scale is smaller than Precision.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scale Indicates the length of the decimal part.
Scale is smaller than Precision.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Field position: Fields with smaller values need to be placed first.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Position Field position: Fields with smaller values need to be placed first.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Field position: Fields with smaller values need to be placed first.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _position Field position: Fields with smaller values need to be placed first.
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
                     * 获取Whether it is a partition field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPartition Whether it is a partition field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Whether it is a partition field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPartition Whether it is a partition field
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
                     * Field name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Field type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Field default values
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Is the field non-empty?
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_notNull;
                    bool m_notNullHasBeenSet;

                    /**
                     * Indicate the length of the entire numeric with a value of 1-38
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * Indicates the length of the decimal part.
Scale is smaller than Precision.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Field position: Fields with smaller values need to be placed first.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Whether it is a partition field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
