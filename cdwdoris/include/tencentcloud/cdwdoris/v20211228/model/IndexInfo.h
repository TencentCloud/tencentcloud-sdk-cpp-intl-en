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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INDEXINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INDEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Property.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Index information of the table
                */
                class IndexInfo : public AbstractModel
                {
                public:
                    IndexInfo();
                    ~IndexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdxName Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdxName() const;

                    /**
                     * 设置Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _idxName Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdxName(const std::string& _idxName);

                    /**
                     * 判断参数 IdxName 是否已赋值
                     * @return IdxName 是否已赋值
                     * 
                     */
                    bool IdxNameHasBeenSet() const;

                    /**
                     * 获取Column name for creating the index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColumnName Column name for creating the index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Column name for creating the index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columnName Column name for creating the index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取Index type:
INVERTED: inverted index
NGRAM_BF: N-Gram index

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdxType Index type:
INVERTED: inverted index
NGRAM_BF: N-Gram index

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdxType() const;

                    /**
                     * 设置Index type:
INVERTED: inverted index
NGRAM_BF: N-Gram index

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _idxType Index type:
INVERTED: inverted index
NGRAM_BF: N-Gram index

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdxType(const std::string& _idxType);

                    /**
                     * 判断参数 IdxType 是否已赋值
                     * @return IdxType 是否已赋值
                     * 
                     */
                    bool IdxTypeHasBeenSet() const;

                    /**
                     * 获取Index attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdxProperties Index attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Property> GetIdxProperties() const;

                    /**
                     * 设置Index attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _idxProperties Index attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdxProperties(const std::vector<Property>& _idxProperties);

                    /**
                     * 判断参数 IdxProperties 是否已赋值
                     * @return IdxProperties 是否已赋值
                     * 
                     */
                    bool IdxPropertiesHasBeenSet() const;

                    /**
                     * 获取Index description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdxComment Index description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdxComment() const;

                    /**
                     * 设置Index description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _idxComment Index description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdxComment(const std::string& _idxComment);

                    /**
                     * 判断参数 IdxComment 是否已赋值
                     * @return IdxComment 是否已赋值
                     * 
                     */
                    bool IdxCommentHasBeenSet() const;

                private:

                    /**
                     * Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idxName;
                    bool m_idxNameHasBeenSet;

                    /**
                     * Column name for creating the index
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * Index type:
INVERTED: inverted index
NGRAM_BF: N-Gram index

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idxType;
                    bool m_idxTypeHasBeenSet;

                    /**
                     * Index attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Property> m_idxProperties;
                    bool m_idxPropertiesHasBeenSet;

                    /**
                     * Index description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idxComment;
                    bool m_idxCommentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INDEXINFO_H_
