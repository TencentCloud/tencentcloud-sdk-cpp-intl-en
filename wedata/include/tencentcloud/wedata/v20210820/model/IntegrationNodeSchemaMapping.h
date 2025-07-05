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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_

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
                * Integrated Node Schema Mapping
                */
                class IntegrationNodeSchemaMapping : public AbstractModel
                {
                public:
                    IntegrationNodeSchemaMapping();
                    ~IntegrationNodeSchemaMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Node Source Schema ID
                     * @return SourceSchemaId Task Node Source Schema ID
                     * 
                     */
                    std::string GetSourceSchemaId() const;

                    /**
                     * 设置Task Node Source Schema ID
                     * @param _sourceSchemaId Task Node Source Schema ID
                     * 
                     */
                    void SetSourceSchemaId(const std::string& _sourceSchemaId);

                    /**
                     * 判断参数 SourceSchemaId 是否已赋值
                     * @return SourceSchemaId 是否已赋值
                     * 
                     */
                    bool SourceSchemaIdHasBeenSet() const;

                    /**
                     * 获取Task Node Target Schema ID
                     * @return SinkSchemaId Task Node Target Schema ID
                     * 
                     */
                    std::string GetSinkSchemaId() const;

                    /**
                     * 设置Task Node Target Schema ID
                     * @param _sinkSchemaId Task Node Target Schema ID
                     * 
                     */
                    void SetSinkSchemaId(const std::string& _sinkSchemaId);

                    /**
                     * 判断参数 SinkSchemaId 是否已赋值
                     * @return SinkSchemaId 是否已赋值
                     * 
                     */
                    bool SinkSchemaIdHasBeenSet() const;

                private:

                    /**
                     * Task Node Source Schema ID
                     */
                    std::string m_sourceSchemaId;
                    bool m_sourceSchemaIdHasBeenSet;

                    /**
                     * Task Node Target Schema ID
                     */
                    std::string m_sinkSchemaId;
                    bool m_sinkSchemaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_
