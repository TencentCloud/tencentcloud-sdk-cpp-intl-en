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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAIMAGESPRITEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAIMAGESPRITEITEM_H_

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
                * Image sprite information
                */
                class MediaImageSpriteItem : public AbstractModel
                {
                public:
                    MediaImageSpriteItem();
                    ~MediaImageSpriteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image sprite specification. For more information, please see [Image Sprite Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @return Definition Image sprite specification. For more information, please see [Image Sprite Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Image sprite specification. For more information, please see [Image Sprite Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @param _definition Image sprite specification. For more information, please see [Image Sprite Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Subimage height of an image sprite.
                     * @return Height Subimage height of an image sprite.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Subimage height of an image sprite.
                     * @param _height Subimage height of an image sprite.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Subimage width of an image sprite.
                     * @return Width Subimage width of an image sprite.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Subimage width of an image sprite.
                     * @param _width Subimage width of an image sprite.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Total number of subimages in each image sprite.
                     * @return TotalCount Total number of subimages in each image sprite.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of subimages in each image sprite.
                     * @param _totalCount Total number of subimages in each image sprite.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Path to each image sprite.
                     * @return ImagePathSet Path to each image sprite.
                     * 
                     */
                    std::vector<std::string> GetImagePathSet() const;

                    /**
                     * 设置Path to each image sprite.
                     * @param _imagePathSet Path to each image sprite.
                     * 
                     */
                    void SetImagePathSet(const std::vector<std::string>& _imagePathSet);

                    /**
                     * 判断参数 ImagePathSet 是否已赋值
                     * @return ImagePathSet 是否已赋值
                     * 
                     */
                    bool ImagePathSetHasBeenSet() const;

                    /**
                     * 获取Path to a WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
                     * @return WebVttPath Path to a WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
                     * 
                     */
                    std::string GetWebVttPath() const;

                    /**
                     * 设置Path to a WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
                     * @param _webVttPath Path to a WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
                     * 
                     */
                    void SetWebVttPath(const std::string& _webVttPath);

                    /**
                     * 判断参数 WebVttPath 是否已赋值
                     * @return WebVttPath 是否已赋值
                     * 
                     */
                    bool WebVttPathHasBeenSet() const;

                    /**
                     * 获取Storage location of an image sprite file.
                     * @return Storage Storage location of an image sprite file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of an image sprite file.
                     * @param _storage Storage location of an image sprite file.
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * Image sprite specification. For more information, please see [Image Sprite Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Subimage height of an image sprite.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Subimage width of an image sprite.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Total number of subimages in each image sprite.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Path to each image sprite.
                     */
                    std::vector<std::string> m_imagePathSet;
                    bool m_imagePathSetHasBeenSet;

                    /**
                     * Path to a WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
                     */
                    std::string m_webVttPath;
                    bool m_webVttPathHasBeenSet;

                    /**
                     * Storage location of an image sprite file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAIMAGESPRITEITEM_H_
