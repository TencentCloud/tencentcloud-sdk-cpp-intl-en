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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATERESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateQualityControlTemplate response structure.
                */
                class CreateQualityControlTemplateResponse : public AbstractModel
                {
                public:
                    CreateQualityControlTemplateResponse();
                    ~CreateQualityControlTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of a media quality inspection template.
                     * @return Definition Unique identifier of a media quality inspection template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of a media quality inspection template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATERESPONSE_H_
