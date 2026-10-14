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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawSmartEraseParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideEraseParameter.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent erasure task
                */
                class SmartEraseTaskInput : public AbstractModel
                {
                public:
                    SmartEraseTaskInput();
                    ~SmartEraseTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Smart erasing template id.
                     * @return Definition Smart erasing template id.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Smart erasing template id.
                     * @param _definition Smart erasing template id.
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
                     * 获取Custom parameter for smart erasing. Valid when Definition is set to 0. This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify smart erasing parameters.
                     * @return RawParameter Custom parameter for smart erasing. Valid when Definition is set to 0. This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify smart erasing parameters.
                     * 
                     */
                    RawSmartEraseParameter GetRawParameter() const;

                    /**
                     * 设置Custom parameter for smart erasing. Valid when Definition is set to 0. This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify smart erasing parameters.
                     * @param _rawParameter Custom parameter for smart erasing. Valid when Definition is set to 0. This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify smart erasing parameters.
                     * 
                     */
                    void SetRawParameter(const RawSmartEraseParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.
                     * @return OverrideParameter Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.
                     * 
                     */
                    OverrideEraseParameter GetOverrideParameter() const;

                    /**
                     * 设置Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.
                     * @param _overrideParameter Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.
                     * 
                     */
                    void SetOverrideParameter(const OverrideEraseParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取Target storage for files. If left blank, it inherits the upper-level OutputStorage value.
                     * @return OutputStorage Target storage for files. If left blank, it inherits the upper-level OutputStorage value.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target storage for files. If left blank, it inherits the upper-level OutputStorage value.
                     * @param _outputStorage Target storage for files. If left blank, it inherits the upper-level OutputStorage value.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Output path of the file, which can be a relative or absolute path.
To define the output path, it must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>

**Note**: The `BatchProcessMedia` API is currently not supported.
                     * @return OutputObjectPath Output path of the file, which can be a relative or absolute path.
To define the output path, it must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>

**Note**: The `BatchProcessMedia` API is currently not supported.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path of the file, which can be a relative or absolute path.
To define the output path, it must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>

**Note**: The `BatchProcessMedia` API is currently not supported.
                     * @param _outputObjectPath Output path of the file, which can be a relative or absolute path.
To define the output path, it must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>

**Note**: The `BatchProcessMedia` API is currently not supported.
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                private:

                    /**
                     * Smart erasing template id.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Custom parameter for smart erasing. Valid when Definition is set to 0. This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify smart erasing parameters.
                     */
                    RawSmartEraseParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * Custom parameters for smart erasing. When the value of Definition is not 0, this parameter is valid. When certain erasing parameters in this structure are specified, the specified parameters will be used to overwrite those in the smart erasing template. This parameter is used in highly customized scenarios. It is recommended to use only Definition to specify smart erasing parameters.
                     */
                    OverrideEraseParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * Target storage for files. If left blank, it inherits the upper-level OutputStorage value.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output path of the file, which can be a relative or absolute path.
To define the output path, it must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>

**Note**: The `BatchProcessMedia` API is currently not supported.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_
