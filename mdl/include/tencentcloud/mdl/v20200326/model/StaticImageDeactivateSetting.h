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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEDEACTIVATESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEDEACTIVATESETTING_H_

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
                * Static image deactivate setting.
                */
                class StaticImageDeactivateSetting : public AbstractModel
                {
                public:
                    StaticImageDeactivateSetting();
                    ~StaticImageDeactivateSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The overlay level to be canceled, range 0-7, default value 0.
                     * @return Layer The overlay level to be canceled, range 0-7, default value 0.
                     * 
                     */
                    int64_t GetLayer() const;

                    /**
                     * 设置The overlay level to be canceled, range 0-7, default value 0.
                     * @param _layer The overlay level to be canceled, range 0-7, default value 0.
                     * 
                     */
                    void SetLayer(const int64_t& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * @return FadeOut Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * 
                     */
                    int64_t GetFadeOut() const;

                    /**
                     * 设置Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * @param _fadeOut Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * 
                     */
                    void SetFadeOut(const int64_t& _fadeOut);

                    /**
                     * 判断参数 FadeOut 是否已赋值
                     * @return FadeOut 是否已赋值
                     * 
                     */
                    bool FadeOutHasBeenSet() const;

                private:

                    /**
                     * The overlay level to be canceled, range 0-7, default value 0.
                     */
                    int64_t m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     */
                    int64_t m_fadeOut;
                    bool m_fadeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEDEACTIVATESETTING_H_
