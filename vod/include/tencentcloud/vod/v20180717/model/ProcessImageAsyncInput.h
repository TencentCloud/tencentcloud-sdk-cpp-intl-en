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
                     * 获取<p>FileId of image processing.</p>
                     * @return FileId <p>FileId of image processing.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>FileId of image processing.</p>
                     * @param _fileId <p>FileId of image processing.</p>
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
                     * 获取<p>Image URL.</p>
                     * @return Url <p>Image URL.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Image URL.</p>
                     * @param _url <p>Image URL.</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Image processing parameter.</p>
                     * @return ImageTaskInput <p>Image processing parameter.</p>
                     * 
                     */
                    ProcessImageAsyncTaskInput GetImageTaskInput() const;

                    /**
                     * 设置<p>Image processing parameter.</p>
                     * @param _imageTaskInput <p>Image processing parameter.</p>
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
                     * 获取<p>Output media file configuration for the image processing task.</p>
                     * @return OutputConfig <p>Output media file configuration for the image processing task.</p>
                     * 
                     */
                    ProcessImageAsyncOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output media file configuration for the image processing task.</p>
                     * @param _outputConfig <p>Output media file configuration for the image processing task.</p>
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
                     * <p>FileId of image processing.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Image URL.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Image processing parameter.</p>
                     */
                    ProcessImageAsyncTaskInput m_imageTaskInput;
                    bool m_imageTaskInputHasBeenSet;

                    /**
                     * <p>Output media file configuration for the image processing task.</p>
                     */
                    ProcessImageAsyncOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_
