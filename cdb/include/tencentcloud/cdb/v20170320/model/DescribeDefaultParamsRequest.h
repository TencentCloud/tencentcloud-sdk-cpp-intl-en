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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_

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
                * DescribeDefaultParams request structure.
                */
                class DescribeDefaultParamsRequest : public AbstractModel
                {
                public:
                    DescribeDefaultParamsRequest();
                    ~DescribeDefaultParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine version. Currently, the supported versions are `5.1`, `5.5`, `5.6`, `5.7`, and `8.0`.
                     * @return EngineVersion Engine version. Currently, the supported versions are `5.1`, `5.5`, `5.6`, `5.7`, and `8.0`.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Engine version. Currently, the supported versions are `5.1`, `5.5`, `5.6`, `5.7`, and `8.0`.
                     * @param _engineVersion Engine version. Currently, the supported versions are `5.1`, `5.5`, `5.6`, `5.7`, and `8.0`.
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * @return TemplateType Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * @param _templateType Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取Parameter template engine. Default value: `InnoDB`.
                     * @return EngineType Parameter template engine. Default value: `InnoDB`.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Parameter template engine. Default value: `InnoDB`.
                     * @param _engineType Parameter template engine. Default value: `InnoDB`.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * Engine version. Currently, the supported versions are `5.1`, `5.5`, `5.6`, `5.7`, and `8.0`.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Type of the default parameter template. Valid values: `HIGH_STABILITY` (high-stability template), `HIGH_PERFORMANCE` (high-performance template).
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * Parameter template engine. Default value: `InnoDB`.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_
