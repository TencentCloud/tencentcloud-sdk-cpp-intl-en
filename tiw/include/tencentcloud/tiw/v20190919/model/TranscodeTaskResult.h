/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Transcoding task result.
                */
                class TranscodeTaskResult : public AbstractModel
                {
                public:
                    TranscodeTaskResult();
                    ~TranscodeTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transcoding result URL.
                     * @return ResultUrl Transcoding result URL.
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 设置Transcoding result URL.
                     * @param _resultUrl Transcoding result URL.
                     * 
                     */
                    void SetResultUrl(const std::string& _resultUrl);

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取Target resolution.
                     * @return Resolution Target resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Target resolution.
                     * @param _resolution Target resolution.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Title (usually the document name).
                     * @return Title Title (usually the document name).
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Title (usually the document name).
                     * @param _title Title (usually the document name).
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Number of transcoded pages.
                     * @return Pages Number of transcoded pages.
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置Number of transcoded pages.
                     * @param _pages Number of transcoded pages.
                     * 
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * @return ThumbnailUrl URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * 
                     */
                    std::string GetThumbnailUrl() const;

                    /**
                     * 设置URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * @param _thumbnailUrl URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * 
                     */
                    void SetThumbnailUrl(const std::string& _thumbnailUrl);

                    /**
                     * 判断参数 ThumbnailUrl 是否已赋值
                     * @return ThumbnailUrl 是否已赋值
                     * 
                     */
                    bool ThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取Resolution of the thumbnail generated for dynamic transcoding
                     * @return ThumbnailResolution Resolution of the thumbnail generated for dynamic transcoding
                     * 
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 设置Resolution of the thumbnail generated for dynamic transcoding
                     * @param _thumbnailResolution Resolution of the thumbnail generated for dynamic transcoding
                     * 
                     */
                    void SetThumbnailResolution(const std::string& _thumbnailResolution);

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     * 
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * @return CompressFileUrl URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * 
                     */
                    std::string GetCompressFileUrl() const;

                    /**
                     * 设置URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * @param _compressFileUrl URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * 
                     */
                    void SetCompressFileUrl(const std::string& _compressFileUrl);

                    /**
                     * 判断参数 CompressFileUrl 是否已赋值
                     * @return CompressFileUrl 是否已赋值
                     * 
                     */
                    bool CompressFileUrlHasBeenSet() const;

                    /**
                     * 获取Task execution error code.
                     * @return ErrorCode Task execution error code.
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Task execution error code.
                     * @param _errorCode Task execution error code.
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Task execution error message.
                     * @return ErrorMsg Task execution error message.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Task execution error message.
                     * @param _errorMsg Task execution error message.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Transcoding result URL.
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * Target resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Title (usually the document name).
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Number of transcoded pages.
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     */
                    std::string m_thumbnailUrl;
                    bool m_thumbnailUrlHasBeenSet;

                    /**
                     * Resolution of the thumbnail generated for dynamic transcoding
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     */
                    std::string m_compressFileUrl;
                    bool m_compressFileUrlHasBeenSet;

                    /**
                     * Task execution error code.
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Task execution error message.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_
