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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDLCTable request structure.
                */
                class DescribeDLCTableRequest : public AbstractModel
                {
                public:
                    DescribeDLCTableRequest();
                    ~DescribeDLCTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Data table name
                     * @return Name Data table name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data table name
                     * @param _name Data table name
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
                     * 获取Catalog name
                     * @return Catalog Catalog name
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
                     * @param _catalog Catalog name
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Keyword
                     * @return Keyword Keyword
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword
                     * @param _keyword Keyword
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Match rules
                     * @return Pattern Match rules
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Match rules
                     * @param _pattern Match rules
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Table type
                     * @return Type Table type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Table type
                     * @param _type Table type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Data table name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Catalog name
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Keyword
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Match rules
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Table type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCTABLEREQUEST_H_
