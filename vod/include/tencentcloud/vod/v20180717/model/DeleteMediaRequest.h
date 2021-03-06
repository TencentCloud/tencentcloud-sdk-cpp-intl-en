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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaDeleteItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DeleteMedia request structure.
                */
                class DeleteMediaRequest : public AbstractModel
                {
                public:
                    DeleteMediaRequest();
                    ~DeleteMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique media file ID.
                     * @return FileId Unique media file ID.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique media file ID.
                     * @param FileId Unique media file ID.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Content to be deleted. The default value is "[]", which indicates to delete the media file and all its corresponding files generated by video processing.
                     * @return DeleteParts Content to be deleted. The default value is "[]", which indicates to delete the media file and all its corresponding files generated by video processing.
                     */
                    std::vector<MediaDeleteItem> GetDeleteParts() const;

                    /**
                     * 设置Content to be deleted. The default value is "[]", which indicates to delete the media file and all its corresponding files generated by video processing.
                     * @param DeleteParts Content to be deleted. The default value is "[]", which indicates to delete the media file and all its corresponding files generated by video processing.
                     */
                    void SetDeleteParts(const std::vector<MediaDeleteItem>& _deleteParts);

                    /**
                     * 判断参数 DeleteParts 是否已赋值
                     * @return DeleteParts 是否已赋值
                     */
                    bool DeletePartsHasBeenSet() const;

                    /**
                     * 获取[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Unique media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Content to be deleted. The default value is "[]", which indicates to delete the media file and all its corresponding files generated by video processing.
                     */
                    std::vector<MediaDeleteItem> m_deleteParts;
                    bool m_deletePartsHasBeenSet;

                    /**
                     * [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_
