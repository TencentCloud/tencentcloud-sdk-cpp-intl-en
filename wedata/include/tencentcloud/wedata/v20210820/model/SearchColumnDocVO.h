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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Table Field Information
                */
                class SearchColumnDocVO : public AbstractModel
                {
                public:
                    SearchColumnDocVO();
                    ~SearchColumnDocVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Field NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChineseName Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _chineseName Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

                    /**
                     * 获取Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Field TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Field Type Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Length Field Type Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置Field Type Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _length Field Type Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Field Type Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Precision Field Type Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPrecision() const;

                    /**
                     * 设置Field Type Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _precision Field Type Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPrecision(const uint64_t& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取Field Type scale
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Scale Field Type scale
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Field Type scale
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scale Field Type scale
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DefaultValue Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _defaultValue Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Field Order
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Position Field Order
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Field Order
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _position Field Order
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Is Partition Field
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsPartition Is Partition Field
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Is Partition Field
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isPartition Is Partition Field
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                    /**
                     * 获取Index Type on the column Primary Key: PRI, Unique Index: UNI, General Index: MUL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnKey Index Type on the column Primary Key: PRI, Unique Index: UNI, General Index: MUL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnKey() const;

                    /**
                     * 设置Index Type on the column Primary Key: PRI, Unique Index: UNI, General Index: MUL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnKey Index Type on the column Primary Key: PRI, Unique Index: UNI, General Index: MUL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnKey(const std::string& _columnKey);

                    /**
                     * 判断参数 ColumnKey 是否已赋值
                     * @return ColumnKey 是否已赋值
                     * 
                     */
                    bool ColumnKeyHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifiedTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifiedTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Field Type Length
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Field Type Precision
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * Field Type scale
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Field Default Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Field Order
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Is Partition Field
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                    /**
                     * Index Type on the column Primary Key: PRI, Unique Index: UNI, General Index: MUL
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnKey;
                    bool m_columnKeyHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_
