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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTranscode request structure.
                */
                class CreateTranscodeRequest : public AbstractModel
                {
                public:
                    CreateTranscodeRequest();
                    ~CreateTranscodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the customer
                     * @return SdkAppId SdkAppId of the customer
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the customer
                     * @param SdkAppId SdkAppId of the customer
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Address of the file for transcoding
                     * @return Url Address of the file for transcoding
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Address of the file for transcoding
                     * @param Url Address of the file for transcoding
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Whether the PowerPoint file is static. The default value is False.
If IsStaticPPT is False, documents with the .ppt or .pptx extension will be dynamically transcoded to HTML5 pages, and documents with other extensions will be statically transcoded to images. If IsStaticPPT is True, documents with any extensions will be statically transcoded to images.
                     * @return IsStaticPPT Whether the PowerPoint file is static. The default value is False.
If IsStaticPPT is False, documents with the .ppt or .pptx extension will be dynamically transcoded to HTML5 pages, and documents with other extensions will be statically transcoded to images. If IsStaticPPT is True, documents with any extensions will be statically transcoded to images.
                     */
                    bool GetIsStaticPPT() const;

                    /**
                     * 设置Whether the PowerPoint file is static. The default value is False.
If IsStaticPPT is False, documents with the .ppt or .pptx extension will be dynamically transcoded to HTML5 pages, and documents with other extensions will be statically transcoded to images. If IsStaticPPT is True, documents with any extensions will be statically transcoded to images.
                     * @param IsStaticPPT Whether the PowerPoint file is static. The default value is False.
If IsStaticPPT is False, documents with the .ppt or .pptx extension will be dynamically transcoded to HTML5 pages, and documents with other extensions will be statically transcoded to images. If IsStaticPPT is True, documents with any extensions will be statically transcoded to images.
                     */
                    void SetIsStaticPPT(const bool& _isStaticPPT);

                    /**
                     * 判断参数 IsStaticPPT 是否已赋值
                     * @return IsStaticPPT 是否已赋值
                     */
                    bool IsStaticPPTHasBeenSet() const;

                    /**
                     * 获取Minimum resolution of the transcoded document. If no value or null is specified for it or the resolution format is invalid, the original document resolution is used.

 
                     * @return MinResolution Minimum resolution of the transcoded document. If no value or null is specified for it or the resolution format is invalid, the original document resolution is used.

 
                     */
                    std::string GetMinResolution() const;

                    /**
                     * 设置Minimum resolution of the transcoded document. If no value or null is specified for it or the resolution format is invalid, the original document resolution is used.

 
                     * @param MinResolution Minimum resolution of the transcoded document. If no value or null is specified for it or the resolution format is invalid, the original document resolution is used.

 
                     */
                    void SetMinResolution(const std::string& _minResolution);

                    /**
                     * 判断参数 MinResolution 是否已赋值
                     * @return MinResolution 是否已赋值
                     */
                    bool MinResolutionHasBeenSet() const;

                    /**
                     * 获取Resolution of the thumbnail generated for the dynamically transcoded PowerPoint file. If no value or null is specified for it or the resolution format is invalid, no thumbnail will be generated. The resolution format is the same as that of MinResolution.

For static transcoding, this parameter does not work.
                     * @return ThumbnailResolution Resolution of the thumbnail generated for the dynamically transcoded PowerPoint file. If no value or null is specified for it or the resolution format is invalid, no thumbnail will be generated. The resolution format is the same as that of MinResolution.

For static transcoding, this parameter does not work.
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 设置Resolution of the thumbnail generated for the dynamically transcoded PowerPoint file. If no value or null is specified for it or the resolution format is invalid, no thumbnail will be generated. The resolution format is the same as that of MinResolution.

For static transcoding, this parameter does not work.
                     * @param ThumbnailResolution Resolution of the thumbnail generated for the dynamically transcoded PowerPoint file. If no value or null is specified for it or the resolution format is invalid, no thumbnail will be generated. The resolution format is the same as that of MinResolution.

For static transcoding, this parameter does not work.
                     */
                    void SetThumbnailResolution(const std::string& _thumbnailResolution);

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取Compression format of the transcoded file. If no value or null is specified for it or the specified format is invalid, no compression file will be generated. Currently, the following compression formats are supported:

`zip`: generates a .zip compression package.
`tar.gz: generates a .tar.gz compression package.
                     * @return CompressFileType Compression format of the transcoded file. If no value or null is specified for it or the specified format is invalid, no compression file will be generated. Currently, the following compression formats are supported:

`zip`: generates a .zip compression package.
`tar.gz: generates a .tar.gz compression package.
                     */
                    std::string GetCompressFileType() const;

                    /**
                     * 设置Compression format of the transcoded file. If no value or null is specified for it or the specified format is invalid, no compression file will be generated. Currently, the following compression formats are supported:

`zip`: generates a .zip compression package.
`tar.gz: generates a .tar.gz compression package.
                     * @param CompressFileType Compression format of the transcoded file. If no value or null is specified for it or the specified format is invalid, no compression file will be generated. Currently, the following compression formats are supported:

`zip`: generates a .zip compression package.
`tar.gz: generates a .tar.gz compression package.
                     */
                    void SetCompressFileType(const std::string& _compressFileType);

                    /**
                     * 判断参数 CompressFileType 是否已赋值
                     * @return CompressFileType 是否已赋值
                     */
                    bool CompressFileTypeHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the customer
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Address of the file for transcoding
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Whether the PowerPoint file is static. The default value is False.
If IsStaticPPT is False, documents with the .ppt or .pptx extension will be dynamically transcoded to HTML5 pages, and documents with other extensions will be statically transcoded to images. If IsStaticPPT is True, documents with any extensions will be statically transcoded to images.
                     */
                    bool m_isStaticPPT;
                    bool m_isStaticPPTHasBeenSet;

                    /**
                     * Minimum resolution of the transcoded document. If no value or null is specified for it or the resolution format is invalid, the original document resolution is used.

 
                     */
                    std::string m_minResolution;
                    bool m_minResolutionHasBeenSet;

                    /**
                     * Resolution of the thumbnail generated for the dynamically transcoded PowerPoint file. If no value or null is specified for it or the resolution format is invalid, no thumbnail will be generated. The resolution format is the same as that of MinResolution.

For static transcoding, this parameter does not work.
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * Compression format of the transcoded file. If no value or null is specified for it or the specified format is invalid, no compression file will be generated. Currently, the following compression formats are supported:

`zip`: generates a .zip compression package.
`tar.gz: generates a .tar.gz compression package.
                     */
                    std::string m_compressFileType;
                    bool m_compressFileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_
