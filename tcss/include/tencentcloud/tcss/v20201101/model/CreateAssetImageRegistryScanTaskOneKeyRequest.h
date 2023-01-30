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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageRegistryScanTaskOneKey request structure.
                */
                class CreateAssetImageRegistryScanTaskOneKeyRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskOneKeyRequest();
                    ~CreateAssetImageRegistryScanTaskOneKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to scan all images
                     * @return All Whether to scan all images
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to scan all images
                     * @param All Whether to scan all images
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of scanned images
                     * @return Images List of scanned images
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置List of scanned images
                     * @param Images List of scanned images
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Array of scan types
                     * @return ScanType Array of scan types
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置Array of scan types
                     * @param ScanType Array of scan types
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取List of IDs of scanned images
                     * @return Id List of IDs of scanned images
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置List of IDs of scanned images
                     * @param Id List of IDs of scanned images
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Whether to scan all images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of scanned images
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Array of scan types
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * List of IDs of scanned images
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
