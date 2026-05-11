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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter type of an image sprite generating task
                */
                class ImageSpriteTaskInput : public AbstractModel
                {
                public:
                    ImageSpriteTaskInput();
                    ~ImageSpriteTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sprite screenshot template ID.</p>
                     * @return Definition <p>Sprite screenshot template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Sprite screenshot template ID.</p>
                     * @param _definition <p>Sprite screenshot template ID.</p>
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
                     * 获取<p>Target storage for the file after the sprite screenshot is taken. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage <p>Target storage for the file after the sprite screenshot is taken. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for the file after the sprite screenshot is taken. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage <p>Target storage for the file after the sprite screenshot is taken. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Output path of the sprite screenshot image file after the sprite screenshot is taken, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li>If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}_{number}.{format}</code>.
                     * @return OutputObjectPath <p>Output path of the sprite screenshot image file after the sprite screenshot is taken, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li>If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}_{number}.{format}</code>.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>Output path of the sprite screenshot image file after the sprite screenshot is taken, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li>If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}_{number}.{format}</code>.
                     * @param _outputObjectPath <p>Output path of the sprite screenshot image file after the sprite screenshot is taken, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li>If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}_{number}.{format}</code>.
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取<p>Output path of the Web VTT file after the sprite screenshot is taken, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}.{format}</code>.</p>
                     * @return WebVttObjectName <p>Output path of the Web VTT file after the sprite screenshot is taken, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}.{format}</code>.</p>
                     * 
                     */
                    std::string GetWebVttObjectName() const;

                    /**
                     * 设置<p>Output path of the Web VTT file after the sprite screenshot is taken, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}.{format}</code>.</p>
                     * @param _webVttObjectName <p>Output path of the Web VTT file after the sprite screenshot is taken, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}.{format}</code>.</p>
                     * 
                     */
                    void SetWebVttObjectName(const std::string& _webVttObjectName);

                    /**
                     * 判断参数 WebVttObjectName 是否已赋值
                     * @return WebVttObjectName 是否已赋值
                     * 
                     */
                    bool WebVttObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>Rule of the <code>{number}</code> variable in the output path after the sprite screenshot is taken.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectNumberFormat <p>Rule of the <code>{number}</code> variable in the output path after the sprite screenshot is taken.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置<p>Rule of the <code>{number}</code> variable in the output path after the sprite screenshot is taken.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectNumberFormat <p>Rule of the <code>{number}</code> variable in the output path after the sprite screenshot is taken.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     * 
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameter.</p>
                     * @return ExtInfo <p>Extended parameter.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Extended parameter.</p>
                     * @param _extInfo <p>Extended parameter.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Sprite screenshot template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Target storage for the file after the sprite screenshot is taken. If this is not specified, it inherits the value from the upper-level OutputStorage.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Output path of the sprite screenshot image file after the sprite screenshot is taken, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">File Name Variable Description</a>.<br>Relative path example:</p><li>File name_{variable name}.{format}</li><li>File name.{format}</li>Absolute path example:<li>/custom path/file name_{variable name}.{format}</li>If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}_{number}.{format}</code>.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>Output path of the Web VTT file after the sprite screenshot is taken, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_imageSprite_{definition}.{format}</code>.</p>
                     */
                    std::string m_webVttObjectName;
                    bool m_webVttObjectNameHasBeenSet;

                    /**
                     * <p>Rule of the <code>{number}</code> variable in the output path after the sprite screenshot is taken.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                    /**
                     * <p>Extended parameter.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_
