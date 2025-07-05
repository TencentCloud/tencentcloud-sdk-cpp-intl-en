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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image blurring parameters.
                */
                class ImageBlur : public AbstractModel
                {
                public:
                    ImageBlur();
                    ~ImageBlur() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The blur type. Valid values:
<li>`Gaussian`</li>
                     * @return Type The blur type. Valid values:
<li>`Gaussian`</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The blur type. Valid values:
<li>`Gaussian`</li>
                     * @param _type The blur type. Valid values:
<li>`Gaussian`</li>
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
                     * 获取The radius of the blur. Value range: 1-50. This parameter is valid if `Type` is `Gaussian`.
                     * @return Radius The radius of the blur. Value range: 1-50. This parameter is valid if `Type` is `Gaussian`.
                     * 
                     */
                    int64_t GetRadius() const;

                    /**
                     * 设置The radius of the blur. Value range: 1-50. This parameter is valid if `Type` is `Gaussian`.
                     * @param _radius The radius of the blur. Value range: 1-50. This parameter is valid if `Type` is `Gaussian`.
                     * 
                     */
                    void SetRadius(const int64_t& _radius);

                    /**
                     * 判断参数 Radius 是否已赋值
                     * @return Radius 是否已赋值
                     * 
                     */
                    bool RadiusHasBeenSet() const;

                    /**
                     * 获取The standard deviation of the Gaussian distribution, which must be greater than 0. This parameter is valid if `Type` is `Gaussian`.
                     * @return Sigma The standard deviation of the Gaussian distribution, which must be greater than 0. This parameter is valid if `Type` is `Gaussian`.
                     * 
                     */
                    int64_t GetSigma() const;

                    /**
                     * 设置The standard deviation of the Gaussian distribution, which must be greater than 0. This parameter is valid if `Type` is `Gaussian`.
                     * @param _sigma The standard deviation of the Gaussian distribution, which must be greater than 0. This parameter is valid if `Type` is `Gaussian`.
                     * 
                     */
                    void SetSigma(const int64_t& _sigma);

                    /**
                     * 判断参数 Sigma 是否已赋值
                     * @return Sigma 是否已赋值
                     * 
                     */
                    bool SigmaHasBeenSet() const;

                private:

                    /**
                     * The blur type. Valid values:
<li>`Gaussian`</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The radius of the blur. Value range: 1-50. This parameter is valid if `Type` is `Gaussian`.
                     */
                    int64_t m_radius;
                    bool m_radiusHasBeenSet;

                    /**
                     * The standard deviation of the Gaussian distribution, which must be greater than 0. This parameter is valid if `Type` is `Gaussian`.
                     */
                    int64_t m_sigma;
                    bool m_sigmaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_
