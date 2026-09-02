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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * One viewing angle in the MultiViewImages array in the multi-perspective image-to-3D scenario.
                */
                class ViewImage : public AbstractModel
                {
                public:
                    ViewImage();
                    ~ViewImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>View type</p><p>Enumeration values:</p><ul><li>front: Front view (required)</li><li>back: Back view</li><li>left: Left view</li><li>right: Right view</li><li>top: Top view</li><li>bottom: Bottom view</li><li>left_front: Left front 45°</li><li>right_front: Right front 45°</li></ul><p>MultiViewImages array length ≥ 2; must contain the front view; the same ViewType cannot be duplicated; each item must provide ViewImageUrl</p>
                     * @return ViewType <p>View type</p><p>Enumeration values:</p><ul><li>front: Front view (required)</li><li>back: Back view</li><li>left: Left view</li><li>right: Right view</li><li>top: Top view</li><li>bottom: Bottom view</li><li>left_front: Left front 45°</li><li>right_front: Right front 45°</li></ul><p>MultiViewImages array length ≥ 2; must contain the front view; the same ViewType cannot be duplicated; each item must provide ViewImageUrl</p>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>View type</p><p>Enumeration values:</p><ul><li>front: Front view (required)</li><li>back: Back view</li><li>left: Left view</li><li>right: Right view</li><li>top: Top view</li><li>bottom: Bottom view</li><li>left_front: Left front 45°</li><li>right_front: Right front 45°</li></ul><p>MultiViewImages array length ≥ 2; must contain the front view; the same ViewType cannot be duplicated; each item must provide ViewImageUrl</p>
                     * @param _viewType <p>View type</p><p>Enumeration values:</p><ul><li>front: Front view (required)</li><li>back: Back view</li><li>left: Left view</li><li>right: Right view</li><li>top: Top view</li><li>bottom: Bottom view</li><li>left_front: Left front 45°</li><li>right_front: Right front 45°</li></ul><p>MultiViewImages array length ≥ 2; must contain the front view; the same ViewType cannot be duplicated; each item must provide ViewImageUrl</p>
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取<p>Image URL (http/https)</p>
                     * @return ViewImageUrl <p>Image URL (http/https)</p>
                     * 
                     */
                    std::string GetViewImageUrl() const;

                    /**
                     * 设置<p>Image URL (http/https)</p>
                     * @param _viewImageUrl <p>Image URL (http/https)</p>
                     * 
                     */
                    void SetViewImageUrl(const std::string& _viewImageUrl);

                    /**
                     * 判断参数 ViewImageUrl 是否已赋值
                     * @return ViewImageUrl 是否已赋值
                     * 
                     */
                    bool ViewImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>View type</p><p>Enumeration values:</p><ul><li>front: Front view (required)</li><li>back: Back view</li><li>left: Left view</li><li>right: Right view</li><li>top: Top view</li><li>bottom: Bottom view</li><li>left_front: Left front 45°</li><li>right_front: Right front 45°</li></ul><p>MultiViewImages array length ≥ 2; must contain the front view; the same ViewType cannot be duplicated; each item must provide ViewImageUrl</p>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>Image URL (http/https)</p>
                     */
                    std::string m_viewImageUrl;
                    bool m_viewImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_
