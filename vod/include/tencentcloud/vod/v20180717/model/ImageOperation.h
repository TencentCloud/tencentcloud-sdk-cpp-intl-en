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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageScale.h>
#include <tencentcloud/vod/v20180717/model/ImageCenterCut.h>
#include <tencentcloud/vod/v20180717/model/ImageBlur.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class ImageOperation : public AbstractModel
                {
                public:
                    ImageOperation();
                    ~ImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Scale 
                     * 
                     */
                    ImageScale GetScale() const;

                    /**
                     * 设置
                     * @param _scale 
                     * 
                     */
                    void SetScale(const ImageScale& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取
                     * @return CenterCut 
                     * 
                     */
                    ImageCenterCut GetCenterCut() const;

                    /**
                     * 设置
                     * @param _centerCut 
                     * 
                     */
                    void SetCenterCut(const ImageCenterCut& _centerCut);

                    /**
                     * 判断参数 CenterCut 是否已赋值
                     * @return CenterCut 是否已赋值
                     * 
                     */
                    bool CenterCutHasBeenSet() const;

                    /**
                     * 获取
                     * @return Blur 
                     * 
                     */
                    ImageBlur GetBlur() const;

                    /**
                     * 设置
                     * @param _blur 
                     * 
                     */
                    void SetBlur(const ImageBlur& _blur);

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    ImageScale m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 
                     */
                    ImageCenterCut m_centerCut;
                    bool m_centerCutHasBeenSet;

                    /**
                     * 
                     */
                    ImageBlur m_blur;
                    bool m_blurHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
