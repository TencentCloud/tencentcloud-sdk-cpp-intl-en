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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SellConfig.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Purchasable instance type
                */
                class SellType : public AbstractModel
                {
                public:
                    SellType();
                    ~SellType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the purchasable instance
                     * @return TypeName Name of the purchasable instance
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Name of the purchasable instance
                     * @param TypeName Name of the purchasable instance
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Kernel version number
                     * @return EngineVersion Kernel version number
                     */
                    std::vector<std::string> GetEngineVersion() const;

                    /**
                     * 设置Kernel version number
                     * @param EngineVersion Kernel version number
                     */
                    void SetEngineVersion(const std::vector<std::string>& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Configuration details of a purchasable specification
                     * @return Configs Configuration details of a purchasable specification
                     */
                    std::vector<SellConfig> GetConfigs() const;

                    /**
                     * 设置Configuration details of a purchasable specification
                     * @param Configs Configuration details of a purchasable specification
                     */
                    void SetConfigs(const std::vector<SellConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * Name of the purchasable instance
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Kernel version number
                     */
                    std::vector<std::string> m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Configuration details of a purchasable specification
                     */
                    std::vector<SellConfig> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_
