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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMAGELIMITCONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMAGELIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Image size configuration
                */
                class ImageLimitConfig : public AbstractModel
                {
                public:
                    ImageLimitConfig();
                    ~ImageLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Supported maximum image size in GB, including custom image size for import and central cloud image size.
                     * @return MaxImageSize Supported maximum image size in GB, including custom image size for import and central cloud image size.
                     */
                    int64_t GetMaxImageSize() const;

                    /**
                     * 设置Supported maximum image size in GB, including custom image size for import and central cloud image size.
                     * @param MaxImageSize Supported maximum image size in GB, including custom image size for import and central cloud image size.
                     */
                    void SetMaxImageSize(const int64_t& _maxImageSize);

                    /**
                     * 判断参数 MaxImageSize 是否已赋值
                     * @return MaxImageSize 是否已赋值
                     */
                    bool MaxImageSizeHasBeenSet() const;

                private:

                    /**
                     * Supported maximum image size in GB, including custom image size for import and central cloud image size.
                     */
                    int64_t m_maxImageSize;
                    bool m_maxImageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMAGELIMITCONFIG_H_
