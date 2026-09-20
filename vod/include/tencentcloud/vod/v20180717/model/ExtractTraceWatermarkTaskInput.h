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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input for extracting traceability watermark
                */
                class ExtractTraceWatermarkTaskInput : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkTaskInput();
                    ~ExtractTraceWatermarkTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取URL of the media requiring watermark extraction.
                     * @return Url URL of the media requiring watermark extraction.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the media requiring watermark extraction.
                     * @param _url URL of the media requiring watermark extraction.
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
                     * 获取Media file ID. Original media file ID corresponding to the Url.
                     * @return FileId Media file ID. Original media file ID corresponding to the Url.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID. Original media file ID corresponding to the Url.
                     * @param _fileId Media file ID. Original media file ID corresponding to the Url.
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
                     * URL of the media requiring watermark extraction.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Media file ID. Original media file ID corresponding to the Url.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_
