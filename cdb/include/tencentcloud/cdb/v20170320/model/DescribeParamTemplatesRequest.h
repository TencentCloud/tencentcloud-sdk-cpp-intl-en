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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates request structure.
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine version. Query all if default. Valid values: 5.5, 5.6, 5.7, 8.0.
                     * @return EngineVersions Engine version. Query all if default. Valid values: 5.5, 5.6, 5.7, 8.0.
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置Engine version. Query all if default. Valid values: 5.5, 5.6, 5.7, 8.0.
                     * @param _engineVersions Engine version. Query all if default. Valid values: 5.5, 5.6, 5.7, 8.0.
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取Engine type. Query all if default. Valid values: InnoDB, RocksDB. Case-insensitive.
                     * @return EngineTypes Engine type. Query all if default. Valid values: InnoDB, RocksDB. Case-insensitive.
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置Engine type. Query all if default. Valid values: InnoDB, RocksDB. Case-insensitive.
                     * @param _engineTypes Engine type. Query all if default. Valid values: InnoDB, RocksDB. Case-insensitive.
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取Template name. Query all if default. Support fuzzy matching.
                     * @return TemplateNames Template name. Query all if default. Support fuzzy matching.
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置Template name. Query all if default. Support fuzzy matching.
                     * @param _templateNames Template name. Query all if default. Support fuzzy matching.
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取Template ID. Query all if default.
                     * @return TemplateIds Template ID. Query all if default.
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置Template ID. Query all if default.
                     * @param _templateIds Template ID. Query all if default.
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                private:

                    /**
                     * Engine version. Query all if default. Valid values: 5.5, 5.6, 5.7, 8.0.
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * Engine type. Query all if default. Valid values: InnoDB, RocksDB. Case-insensitive.
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * Template name. Query all if default. Support fuzzy matching.
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * Template ID. Query all if default.
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
