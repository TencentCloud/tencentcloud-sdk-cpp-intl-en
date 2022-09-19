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
                     * 获取Engine version. If it is left empty, all parameter templates will be queried.
                     * @return EngineVersions Engine version. If it is left empty, all parameter templates will be queried.
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置Engine version. If it is left empty, all parameter templates will be queried.
                     * @param EngineVersions Engine version. If it is left empty, all parameter templates will be queried.
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取Engine type. If it is left empty, all engine types will be queried.
                     * @return EngineTypes Engine type. If it is left empty, all engine types will be queried.
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置Engine type. If it is left empty, all engine types will be queried.
                     * @param EngineTypes Engine type. If it is left empty, all engine types will be queried.
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取Template name. If it is left empty, all template names will be queried.
                     * @return TemplateNames Template name. If it is left empty, all template names will be queried.
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置Template name. If it is left empty, all template names will be queried.
                     * @param TemplateNames Template name. If it is left empty, all template names will be queried.
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取Template ID. If it is left empty, all template IDs will be queried.
                     * @return TemplateIds Template ID. If it is left empty, all template IDs will be queried.
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置Template ID. If it is left empty, all template IDs will be queried.
                     * @param TemplateIds Template ID. If it is left empty, all template IDs will be queried.
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     */
                    bool TemplateIdsHasBeenSet() const;

                private:

                    /**
                     * Engine version. If it is left empty, all parameter templates will be queried.
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * Engine type. If it is left empty, all engine types will be queried.
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * Template name. If it is left empty, all template names will be queried.
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * Template ID. If it is left empty, all template IDs will be queried.
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
