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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Image processing result information.
                */
                class ImageProcessTaskOutput : public AbstractModel
                {
                public:
                    ImageProcessTaskOutput();
                    ~ImageProcessTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Path 
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置
                     * @param _path 
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

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
                     * 获取<p>Processing result of the image-to-text task.</p>
                     * @return Content <p>Processing result of the image-to-text task.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Processing result of the image-to-text task.</p>
                     * @param _content <p>Processing result of the image-to-text task.</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>VOD Standard Edition FileId</p>
                     * @return FileId <p>VOD Standard Edition FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>VOD Standard Edition FileId</p>
                     * @param _fileId <p>VOD Standard Edition FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Processing result of the image-to-text task.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>VOD Standard Edition FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
