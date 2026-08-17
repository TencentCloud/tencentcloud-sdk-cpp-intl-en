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
                * Sprite image information
                */
                class MediaImageSpriteItem : public AbstractModel
                {
                public:
                    MediaImageSpriteItem();
                    ~MediaImageSpriteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sprite sheet specification, please refer to the [Sprite Sheet Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @return Definition Sprite sheet specification, please refer to the [Sprite Sheet Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Sprite sheet specification, please refer to the [Sprite Sheet Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @param _definition Sprite sheet specification, please refer to the [Sprite Sheet Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
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
                     * 获取Height of small images in sprite sheet.
                     * @return Height Height of small images in sprite sheet.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of small images in sprite sheet.
                     * @param _height Height of small images in sprite sheet.
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
                     * 获取Width of small images in sprite sheet.
                     * @return Width Width of small images in sprite sheet.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of small images in sprite sheet.
                     * @param _width Width of small images in sprite sheet.
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
                     * 获取Number of small images in each sprite sheet.
                     * @return TotalCount Number of small images in each sprite sheet.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of small images in each sprite sheet.
                     * @param _totalCount Number of small images in each sprite sheet.
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
                     * 获取Path of each sprite sheet.
                     * @return ImagePathSet Path of each sprite sheet.
                     * 
                     */
                    std::vector<std::string> GetImagePathSet() const;

                    /**
                     * 设置Path of each sprite sheet.
                     * @param _imagePathSet Path of each sprite sheet.
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
                     * 获取
                     * @return WebVttPath 
                     * 
                     */
                    std::string GetWebVttPath() const;

                    /**
                     * 设置
                     * @param _webVttPath 
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
                     * 获取Storage location of the sprite sheet file.
                     * @return Storage Storage location of the sprite sheet file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of the sprite sheet file.
                     * @param _storage Storage location of the sprite sheet file.
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
                     * Sprite sheet specification, please refer to the [Sprite Sheet Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Height of small images in sprite sheet.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of small images in sprite sheet.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Number of small images in each sprite sheet.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Path of each sprite sheet.
                     */
                    std::vector<std::string> m_imagePathSet;
                    bool m_imagePathSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_webVttPath;
                    bool m_webVttPathHasBeenSet;

                    /**
                     * Storage location of the sprite sheet file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAIMAGESPRITEITEM_H_
