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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Asynchronous task processing info for images.
                */
                class ProcessImageAsyncInput : public AbstractModel
                {
                public:
                    ProcessImageAsyncInput();
                    ~ProcessImageAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取FileId for image processing.
                     * @return FileId FileId for image processing.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置FileId for image processing.
                     * @param _fileId FileId for image processing.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Image processing parameter.
                     * @return ImageTaskInput Image processing parameter.
                     * 
                     */
                    ProcessImageAsyncTaskInput GetImageTaskInput() const;

                    /**
                     * 设置Image processing parameter.
                     * @param _imageTaskInput Image processing parameter.
                     * 
                     */
                    void SetImageTaskInput(const ProcessImageAsyncTaskInput& _imageTaskInput);

                    /**
                     * 判断参数 ImageTaskInput 是否已赋值
                     * @return ImageTaskInput 是否已赋值
                     * 
                     */
                    bool ImageTaskInputHasBeenSet() const;

                    /**
                     * 获取Output media file configuration for image processing tasks.
                     * @return OutputConfig Output media file configuration for image processing tasks.
                     * 
                     */
                    ProcessImageAsyncOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Output media file configuration for image processing tasks.
                     * @param _outputConfig Output media file configuration for image processing tasks.
                     * 
                     */
                    void SetOutputConfig(const ProcessImageAsyncOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * FileId for image processing.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Image processing parameter.
                     */
                    ProcessImageAsyncTaskInput m_imageTaskInput;
                    bool m_imageTaskInputHasBeenSet;

                    /**
                     * Output media file configuration for image processing tasks.
                     */
                    ProcessImageAsyncOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_
