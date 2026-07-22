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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageEncodeConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageEnhanceConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageBeautyConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image async processing configuration.
                */
                class ProcessImageAsyncTask : public AbstractModel
                {
                public:
                    ProcessImageAsyncTask();
                    ~ProcessImageAsyncTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image transcoding output configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncodeConfig <p>Image transcoding output configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>Image transcoding output configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encodeConfig <p>Image transcoding output configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncodeConfig(const ImageEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnhanceConfig <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enhanceConfig <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image beauty effect configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeautyConfig <p>Image beauty effect configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageBeautyConfig GetBeautyConfig() const;

                    /**
                     * 设置<p>Image beauty effect configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beautyConfig <p>Image beauty effect configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeautyConfig(const ImageBeautyConfig& _beautyConfig);

                    /**
                     * 判断参数 BeautyConfig 是否已赋值
                     * @return BeautyConfig 是否已赋值
                     * 
                     */
                    bool BeautyConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Image transcoding output configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>Image beauty effect configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageBeautyConfig m_beautyConfig;
                    bool m_beautyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_
