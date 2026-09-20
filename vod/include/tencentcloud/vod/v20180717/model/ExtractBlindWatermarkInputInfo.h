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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_

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
                * Extract blind watermark input information
                */
                class ExtractBlindWatermarkInputInfo : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkInputInfo();
                    ~ExtractBlindWatermarkInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Digital watermark extraction input type. Available values: <li>FILEID: file media asset ID;</li><li>URL: file URL;</li>
                     * @return Type Digital watermark extraction input type. Available values: <li>FILEID: file media asset ID;</li><li>URL: file URL;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark extraction input type. Available values: <li>FILEID: file media asset ID;</li><li>URL: file URL;</li>
                     * @param _type Digital watermark extraction input type. Available values: <li>FILEID: file media asset ID;</li><li>URL: file URL;</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Media asset file ID to be extracted
                     * @return FileId Media asset file ID to be extracted
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media asset file ID to be extracted
                     * @param _fileId Media asset file ID to be extracted
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
                     * 获取url of the video file to extract
                     * @return Url url of the video file to extract
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置url of the video file to extract
                     * @param _url url of the video file to extract
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Digital watermark extraction input type. Available values: <li>FILEID: file media asset ID;</li><li>URL: file URL;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Media asset file ID to be extracted
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * url of the video file to extract
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_
