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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessImage request structure.
                */
                class ProcessImageRequest : public AbstractModel
                {
                public:
                    ProcessImageRequest();
                    ~ProcessImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File input information for image processing.
                     * @return InputInfo File input information for image processing.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置File input information for image processing.
                     * @param _inputInfo File input information for image processing.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Target storage for image processing output files. If left blank, it inherits the storage location in InputInfo.
                     * @return OutputStorage Target storage for image processing output files. If left blank, it inherits the storage location in InputInfo.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target storage for image processing output files. If left blank, it inherits the storage location in InputInfo.
                     * @param _outputStorage Target storage for image processing output files. If left blank, it inherits the storage location in InputInfo.
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
                     * 获取Output file path for image processing. If left blank, it is the directory of the file in InputInfo. If it is a directory, such as `/image/201907/`, it means inheriting the original filename and outputting to this directory.
                     * @return OutputDir Output file path for image processing. If left blank, it is the directory of the file in InputInfo. If it is a directory, such as `/image/201907/`, it means inheriting the original filename and outputting to this directory.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置Output file path for image processing. If left blank, it is the directory of the file in InputInfo. If it is a directory, such as `/image/201907/`, it means inheriting the original filename and outputting to this directory.
                     * @param _outputDir Output file path for image processing. If left blank, it is the directory of the file in InputInfo. If it is a directory, such as `/image/201907/`, it means inheriting the original filename and outputting to this directory.
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取Output path, which can be a relative or an absolute path.
The path must end with `.{format}`. For details, please refer to the [Filename Variable](https://www.tencentcloud.comom/document/product/862/37039?from_cn_redirect=1).
**Relative path example:**
<Li>`Filename_{Variablename}.{format}`.</li>
<Li>`Filename.{format}`.</li>

**Absolute path example:**
<Li>`/Path/Filename_{Variablename}.{format}`.</li>

If not filled in, default relative path: `{inputName}.{format}`.
                     * @return OutputPath Output path, which can be a relative or an absolute path.
The path must end with `.{format}`. For details, please refer to the [Filename Variable](https://www.tencentcloud.comom/document/product/862/37039?from_cn_redirect=1).
**Relative path example:**
<Li>`Filename_{Variablename}.{format}`.</li>
<Li>`Filename.{format}`.</li>

**Absolute path example:**
<Li>`/Path/Filename_{Variablename}.{format}`.</li>

If not filled in, default relative path: `{inputName}.{format}`.
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置Output path, which can be a relative or an absolute path.
The path must end with `.{format}`. For details, please refer to the [Filename Variable](https://www.tencentcloud.comom/document/product/862/37039?from_cn_redirect=1).
**Relative path example:**
<Li>`Filename_{Variablename}.{format}`.</li>
<Li>`Filename.{format}`.</li>

**Absolute path example:**
<Li>`/Path/Filename_{Variablename}.{format}`.</li>

If not filled in, default relative path: `{inputName}.{format}`.
                     * @param _outputPath Output path, which can be a relative or an absolute path.
The path must end with `.{format}`. For details, please refer to the [Filename Variable](https://www.tencentcloud.comom/document/product/862/37039?from_cn_redirect=1).
**Relative path example:**
<Li>`Filename_{Variablename}.{format}`.</li>
<Li>`Filename.{format}`.</li>

**Absolute path example:**
<Li>`/Path/Filename_{Variablename}.{format}`.</li>

If not filled in, default relative path: `{inputName}.{format}`.
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取Image processing parameter.
                     * @return ImageTask Image processing parameter.
                     * 
                     */
                    ImageTaskInput GetImageTask() const;

                    /**
                     * 设置Image processing parameter.
                     * @param _imageTask Image processing parameter.
                     * 
                     */
                    void SetImageTask(const ImageTaskInput& _imageTask);

                    /**
                     * 判断参数 ImageTask 是否已赋值
                     * @return ImageTask 是否已赋值
                     * 
                     */
                    bool ImageTaskHasBeenSet() const;

                private:

                    /**
                     * File input information for image processing.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Target storage for image processing output files. If left blank, it inherits the storage location in InputInfo.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output file path for image processing. If left blank, it is the directory of the file in InputInfo. If it is a directory, such as `/image/201907/`, it means inheriting the original filename and outputting to this directory.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Output path, which can be a relative or an absolute path.
The path must end with `.{format}`. For details, please refer to the [Filename Variable](https://www.tencentcloud.comom/document/product/862/37039?from_cn_redirect=1).
**Relative path example:**
<Li>`Filename_{Variablename}.{format}`.</li>
<Li>`Filename.{format}`.</li>

**Absolute path example:**
<Li>`/Path/Filename_{Variablename}.{format}`.</li>

If not filled in, default relative path: `{inputName}.{format}`.
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * Image processing parameter.
                     */
                    ImageTaskInput m_imageTask;
                    bool m_imageTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGEREQUEST_H_
