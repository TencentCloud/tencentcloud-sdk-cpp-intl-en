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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawSmartSubtitleParameter.h>
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
                * Smart subtitle input struct.
                */
                class SmartSubtitlesTaskInput : public AbstractModel
                {
                public:
                    SmartSubtitlesTaskInput();
                    ~SmartSubtitlesTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Smart subtitle template ID.	
                     * @return Definition Smart subtitle template ID.	
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Smart subtitle template ID.	
                     * @param _definition Smart subtitle template ID.	
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取User extension field, which does not need to be filled in for general scenarios.
                     * @return UserExtPara User extension field, which does not need to be filled in for general scenarios.
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置User extension field, which does not need to be filled in for general scenarios.
                     * @param _userExtPara User extension field, which does not need to be filled in for general scenarios.
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                    /**
                     * 获取
                     * @return RawParameter 
                     * 
                     */
                    RawSmartSubtitleParameter GetRawParameter() const;

                    /**
                     * 设置
                     * @param _rawParameter 
                     * 
                     */
                    void SetRawParameter(const RawSmartSubtitleParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputStorage 
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置
                     * @param _outputStorage 
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
                     * 获取Output path of the generated subtitle file, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to the Filename Variable Explanation (https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).

Relative path example:
- File name_{variable name}.{format}
-File name.{format}

Absolute path example:
-/Custom path/Filename_{variable name}.{format}

If this field is left unspecified, the default value is the relative path in the following format: {inputName}_smartsubtitle_{definition}.{format}.
                     * @return OutputObjectPath Output path of the generated subtitle file, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to the Filename Variable Explanation (https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).

Relative path example:
- File name_{variable name}.{format}
-File name.{format}

Absolute path example:
-/Custom path/Filename_{variable name}.{format}

If this field is left unspecified, the default value is the relative path in the following format: {inputName}_smartsubtitle_{definition}.{format}.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path of the generated subtitle file, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to the Filename Variable Explanation (https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).

Relative path example:
- File name_{variable name}.{format}
-File name.{format}

Absolute path example:
-/Custom path/Filename_{variable name}.{format}

If this field is left unspecified, the default value is the relative path in the following format: {inputName}_smartsubtitle_{definition}.{format}.
                     * @param _outputObjectPath Output path of the generated subtitle file, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to the Filename Variable Explanation (https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).

Relative path example:
- File name_{variable name}.{format}
-File name.{format}

Absolute path example:
-/Custom path/Filename_{variable name}.{format}

If this field is left unspecified, the default value is the relative path in the following format: {inputName}_smartsubtitle_{definition}.{format}.
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
                     * Smart subtitle template ID.	
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * User extension field, which does not need to be filled in for general scenarios.
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                    /**
                     * 
                     */
                    RawSmartSubtitleParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * 
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output path of the generated subtitle file, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to the Filename Variable Explanation (https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).

Relative path example:
- File name_{variable name}.{format}
-File name.{format}

Absolute path example:
-/Custom path/Filename_{variable name}.{format}

If this field is left unspecified, the default value is the relative path in the following format: {inputName}_smartsubtitle_{definition}.{format}.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_
