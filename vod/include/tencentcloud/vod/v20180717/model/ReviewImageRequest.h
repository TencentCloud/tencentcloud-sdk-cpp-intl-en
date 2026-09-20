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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ReviewImage request structure.
                */
                class ReviewImageRequest : public AbstractModel
                {
                public:
                    ReviewImageRequest();
                    ~ReviewImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image content review template ID. Valid values:
<li>10: Pre-set template. Violation labels supported for detection include Porn, Terror, and Polity.</li>
                     * @return Definition Image content review template ID. Valid values:
<li>10: Pre-set template. Violation labels supported for detection include Porn, Terror, and Polity.</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Image content review template ID. Valid values:
<li>10: Pre-set template. Violation labels supported for detection include Porn, Terror, and Polity.</li>
                     * @param _definition Image content review template ID. Valid values:
<li>10: Pre-set template. Violation labels supported for detection include Porn, Terror, and Polity.</li>
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
                     * 获取Media file ID, which is the globally unique identifier of the file on VOD. This interface requires that the media file must be in an image format.
Either FileId or MediaStoragePath must be provided.
                     * @return FileId Media file ID, which is the globally unique identifier of the file on VOD. This interface requires that the media file must be in an image format.
Either FileId or MediaStoragePath must be provided.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID, which is the globally unique identifier of the file on VOD. This interface requires that the media file must be in an image format.
Either FileId or MediaStoragePath must be provided.
                     * @param _fileId Media file ID, which is the globally unique identifier of the file on VOD. This interface requires that the media file must be in an image format.
Either FileId or MediaStoragePath must be provided.
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
                     * 获取Storage path of the media.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * @return MediaStoragePath Storage path of the media.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置Storage path of the media.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * @param _mediaStoragePath Storage path of the media.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Image content review template ID. Valid values:
<li>10: Pre-set template. Violation labels supported for detection include Porn, Terror, and Polity.</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Media file ID, which is the globally unique identifier of the file on VOD. This interface requires that the media file must be in an image format.
Either FileId or MediaStoragePath must be provided.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Storage path of the media.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_
