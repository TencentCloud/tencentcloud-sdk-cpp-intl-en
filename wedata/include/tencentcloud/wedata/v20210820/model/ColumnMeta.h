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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Pair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Column Metadata
                */
                class ColumnMeta : public AbstractModel
                {
                public:
                    ColumnMeta();
                    ~ColumnMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NameEn Field English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置Field English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nameEn Field English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NameCn Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nameCn Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

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
                     * 获取Field Sequence Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Position Field Sequence Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Field Sequence Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _position Field Sequence Number
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
                     * 获取Field nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Field nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Field nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取HBase Column Family Attribute Set
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnFamiliesFieldSet HBase Column Family Attribute Set
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Pair> GetColumnFamiliesFieldSet() const;

                    /**
                     * 设置HBase Column Family Attribute Set
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnFamiliesFieldSet HBase Column Family Attribute Set
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnFamiliesFieldSet(const std::vector<Pair>& _columnFamiliesFieldSet);

                    /**
                     * 判断参数 ColumnFamiliesFieldSet 是否已赋值
                     * @return ColumnFamiliesFieldSet 是否已赋值
                     * 
                     */
                    bool ColumnFamiliesFieldSetHasBeenSet() const;

                    /**
                     * 获取Corresponding Code Table Dictionary ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DictionaryId Corresponding Code Table Dictionary ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDictionaryId() const;

                    /**
                     * 设置Corresponding Code Table Dictionary ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dictionaryId Corresponding Code Table Dictionary ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDictionaryId(const std::string& _dictionaryId);

                    /**
                     * 判断参数 DictionaryId 是否已赋值
                     * @return DictionaryId 是否已赋值
                     * 
                     */
                    bool DictionaryIdHasBeenSet() const;

                    /**
                     * 获取Corresponding Code Table Dictionary Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DictionaryName Corresponding Code Table Dictionary Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDictionaryName() const;

                    /**
                     * 设置Corresponding Code Table Dictionary Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dictionaryName Corresponding Code Table Dictionary Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDictionaryName(const std::string& _dictionaryName);

                    /**
                     * 判断参数 DictionaryName 是否已赋值
                     * @return DictionaryName 是否已赋值
                     * 
                     */
                    bool DictionaryNameHasBeenSet() const;

                    /**
                     * 获取Security Level: Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LevelName Security Level: Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置Security Level: Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _levelName Security Level: Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取Security Level: Value Range 1-10
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LevelRank Security Level: Value Range 1-10
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetLevelRank() const;

                    /**
                     * 设置Security Level: Value Range 1-10
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _levelRank Security Level: Value Range 1-10
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLevelRank(const int64_t& _levelRank);

                    /**
                     * 判断参数 LevelRank 是否已赋值
                     * @return LevelRank 是否已赋值
                     * 
                     */
                    bool LevelRankHasBeenSet() const;

                private:

                    /**
                     * Field English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Field DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Field Sequence Number
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
                     * Field nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * HBase Column Family Attribute Set
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<Pair> m_columnFamiliesFieldSet;
                    bool m_columnFamiliesFieldSetHasBeenSet;

                    /**
                     * Corresponding Code Table Dictionary ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dictionaryId;
                    bool m_dictionaryIdHasBeenSet;

                    /**
                     * Corresponding Code Table Dictionary Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dictionaryName;
                    bool m_dictionaryNameHasBeenSet;

                    /**
                     * Security Level: Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * Security Level: Value Range 1-10
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_levelRank;
                    bool m_levelRankHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_
