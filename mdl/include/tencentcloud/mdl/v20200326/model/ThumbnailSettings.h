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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_THUMBNAILSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_THUMBNAILSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * 
                */
                class ThumbnailSettings : public AbstractModel
                {
                public:
                    ThumbnailSettings();
                    ~ThumbnailSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Generate thumbnail ,0: Disabled ,1: Enabled , Default: 0
                     * @return ThumbnailEnabled Generate thumbnail ,0: Disabled ,1: Enabled , Default: 0
                     * 
                     */
                    int64_t GetThumbnailEnabled() const;

                    /**
                     * 设置Generate thumbnail ,0: Disabled ,1: Enabled , Default: 0
                     * @param _thumbnailEnabled Generate thumbnail ,0: Disabled ,1: Enabled , Default: 0
                     * 
                     */
                    void SetThumbnailEnabled(const int64_t& _thumbnailEnabled);

                    /**
                     * 判断参数 ThumbnailEnabled 是否已赋值
                     * @return ThumbnailEnabled 是否已赋值
                     * 
                     */
                    bool ThumbnailEnabledHasBeenSet() const;

                private:

                    /**
                     * Generate thumbnail ,0: Disabled ,1: Enabled , Default: 0
                     */
                    int64_t m_thumbnailEnabled;
                    bool m_thumbnailEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_THUMBNAILSETTINGS_H_
