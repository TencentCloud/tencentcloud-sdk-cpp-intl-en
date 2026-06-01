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
                     * 获取Engine version. Currently supports ["5.1", "5.5", "5.6", "5.7", "8.0"].
Description: Engine version is required.
                     * @return EngineVersion Engine version. Currently supports ["5.1", "5.5", "5.6", "5.7", "8.0"].
Description: Engine version is required.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Engine version. Currently supports ["5.1", "5.5", "5.6", "5.7", "8.0"].
Description: Engine version is required.
                     * @param _engineVersion Engine version. Currently supports ["5.1", "5.5", "5.6", "5.7", "8.0"].
Description: Engine version is required.
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
                     * 获取Default parameter template type. Supported values include "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template. Default value: HIGH_STABILITY.
                     * @return TemplateType Default parameter template type. Supported values include "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template. Default value: HIGH_STABILITY.
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置Default parameter template type. Supported values include "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template. Default value: HIGH_STABILITY.
                     * @param _templateType Default parameter template type. Supported values include "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template. Default value: HIGH_STABILITY.
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
                     * 获取Parameter template engine, default value: InnoDB, valid values: InnoDB, RocksDB.
                     * @return EngineType Parameter template engine, default value: InnoDB, valid values: InnoDB, RocksDB.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Parameter template engine, default value: InnoDB, valid values: InnoDB, RocksDB.
                     * @param _engineType Parameter template engine, default value: InnoDB, valid values: InnoDB, RocksDB.
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
                     * Engine version. Currently supports ["5.1", "5.5", "5.6", "5.7", "8.0"].
Description: Engine version is required.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Default parameter template type. Supported values include "HIGH_STABILITY" - high-stability template, "HIGH_PERFORMANCE" - high-performance template. Default value: HIGH_STABILITY.
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * Parameter template engine, default value: InnoDB, valid values: InnoDB, RocksDB.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_
