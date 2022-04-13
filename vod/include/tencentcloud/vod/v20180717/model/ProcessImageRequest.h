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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageContentReviewInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取The unique ID of the media file. For this API to work, the file must be an image.
                     * @return FileId The unique ID of the media file. For this API to work, the file must be an image.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The unique ID of the media file. For this API to work, the file must be an image.
                     * @param FileId The unique ID of the media file. For this API to work, the file must be an image.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Operation. `ContentReview` is the only valid value currently.
                     * @return Operation Operation. `ContentReview` is the only valid value currently.
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation. `ContentReview` is the only valid value currently.
                     * @param Operation Operation. `ContentReview` is the only valid value currently.
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Image recognition parameters. This parameter is valid if `Operation` is `ContentReview`.
                     * @return ContentReviewInput Image recognition parameters. This parameter is valid if `Operation` is `ContentReview`.
                     */
                    ImageContentReviewInput GetContentReviewInput() const;

                    /**
                     * 设置Image recognition parameters. This parameter is valid if `Operation` is `ContentReview`.
                     * @param ContentReviewInput Image recognition parameters. This parameter is valid if `Operation` is `ContentReview`.
                     */
                    void SetContentReviewInput(const ImageContentReviewInput& _contentReviewInput);

                    /**
                     * 判断参数 ContentReviewInput 是否已赋值
                     * @return ContentReviewInput 是否已赋值
                     */
                    bool ContentReviewInputHasBeenSet() const;

                    /**
                     * 获取The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @return SubAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @param SubAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the media file. For this API to work, the file must be an image.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Operation. `ContentReview` is the only valid value currently.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Image recognition parameters. This parameter is valid if `Operation` is `ContentReview`.
                     */
                    ImageContentReviewInput m_contentReviewInput;
                    bool m_contentReviewInputHasBeenSet;

                    /**
                     * The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_
