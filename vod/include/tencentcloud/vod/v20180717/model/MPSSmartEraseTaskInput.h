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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSRawSmartEraseParameter.h>
#include <tencentcloud/vod/v20180717/model/MPSOverrideEraseParameter.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent erasure task
                */
                class MPSSmartEraseTaskInput : public AbstractModel
                {
                public:
                    MPSSmartEraseTaskInput();
                    ~MPSSmartEraseTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id of the intelligent erasing template.</p>
                     * @return Definition <p>id of the intelligent erasing template.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>id of the intelligent erasing template.</p>
                     * @param _definition <p>id of the intelligent erasing template.</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Custom parameters for intelligent erasure. Valid when Definition is set to 0. This parameter is used in highly customized scenarios. It is recommended to prioritize using Definition to specify intelligent erasure parameters.</p>
                     * @return RawParameter <p>Custom parameters for intelligent erasure. Valid when Definition is set to 0. This parameter is used in highly customized scenarios. It is recommended to prioritize using Definition to specify intelligent erasure parameters.</p>
                     * 
                     */
                    MPSRawSmartEraseParameter GetRawParameter() const;

                    /**
                     * 设置<p>Custom parameters for intelligent erasure. Valid when Definition is set to 0. This parameter is used in highly customized scenarios. It is recommended to prioritize using Definition to specify intelligent erasure parameters.</p>
                     * @param _rawParameter <p>Custom parameters for intelligent erasure. Valid when Definition is set to 0. This parameter is used in highly customized scenarios. It is recommended to prioritize using Definition to specify intelligent erasure parameters.</p>
                     * 
                     */
                    void SetRawParameter(const MPSRawSmartEraseParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.</p>
                     * @return OverrideParameter <p>Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.</p>
                     * 
                     */
                    MPSOverrideEraseParameter GetOverrideParameter() const;

                    /**
                     * 设置<p>Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.</p>
                     * @param _overrideParameter <p>Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.</p>
                     * 
                     */
                    void SetOverrideParameter(const MPSOverrideEraseParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                private:

                    /**
                     * <p>id of the intelligent erasing template.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Custom parameters for intelligent erasure. Valid when Definition is set to 0. This parameter is used in highly customized scenarios. It is recommended to prioritize using Definition to specify intelligent erasure parameters.</p>
                     */
                    MPSRawSmartEraseParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.</p>
                     */
                    MPSOverrideEraseParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_
