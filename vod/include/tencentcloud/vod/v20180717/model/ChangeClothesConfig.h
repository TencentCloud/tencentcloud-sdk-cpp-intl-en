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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI outfit change parameter configuration.
                */
                class ChangeClothesConfig : public AbstractModel
                {
                public:
                    ChangeClothesConfig();
                    ~ChangeClothesConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Manually input the image list of **clothing** that needs to be replaced. currently support a maximum of 4 images.
                     * @return ClothesFileInfos Manually input the image list of **clothing** that needs to be replaced. currently support a maximum of 4 images.
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetClothesFileInfos() const;

                    /**
                     * 设置Manually input the image list of **clothing** that needs to be replaced. currently support a maximum of 4 images.
                     * @param _clothesFileInfos Manually input the image list of **clothing** that needs to be replaced. currently support a maximum of 4 images.
                     * 
                     */
                    void SetClothesFileInfos(const std::vector<SceneAigcImageTaskInputFileInfo>& _clothesFileInfos);

                    /**
                     * 判断参数 ClothesFileInfos 是否已赋值
                     * @return ClothesFileInfos 是否已赋值
                     * 
                     */
                    bool ClothesFileInfosHasBeenSet() const;

                private:

                    /**
                     * Manually input the image list of **clothing** that needs to be replaced. currently support a maximum of 4 images.
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_clothesFileInfos;
                    bool m_clothesFileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_
