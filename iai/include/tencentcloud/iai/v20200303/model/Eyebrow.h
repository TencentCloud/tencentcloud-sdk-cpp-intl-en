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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Eyebrow information
                */
                class Eyebrow : public AbstractModel
                {
                public:
                    Eyebrow();
                    ~Eyebrow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Eyebrow thickness.
The `Type` values of the `AttributeItem` include: 0: light; 1: thick.
                     * @return EyebrowDensity Eyebrow thickness.
The `Type` values of the `AttributeItem` include: 0: light; 1: thick.
                     */
                    AttributeItem GetEyebrowDensity() const;

                    /**
                     * 设置Eyebrow thickness.
The `Type` values of the `AttributeItem` include: 0: light; 1: thick.
                     * @param EyebrowDensity Eyebrow thickness.
The `Type` values of the `AttributeItem` include: 0: light; 1: thick.
                     */
                    void SetEyebrowDensity(const AttributeItem& _eyebrowDensity);

                    /**
                     * 判断参数 EyebrowDensity 是否已赋值
                     * @return EyebrowDensity 是否已赋值
                     */
                    bool EyebrowDensityHasBeenSet() const;

                    /**
                     * 获取Eyebrow curve.
The `Type` values of the `AttributeItem` include: 0: flat; 1: curved.
                     * @return EyebrowCurve Eyebrow curve.
The `Type` values of the `AttributeItem` include: 0: flat; 1: curved.
                     */
                    AttributeItem GetEyebrowCurve() const;

                    /**
                     * 设置Eyebrow curve.
The `Type` values of the `AttributeItem` include: 0: flat; 1: curved.
                     * @param EyebrowCurve Eyebrow curve.
The `Type` values of the `AttributeItem` include: 0: flat; 1: curved.
                     */
                    void SetEyebrowCurve(const AttributeItem& _eyebrowCurve);

                    /**
                     * 判断参数 EyebrowCurve 是否已赋值
                     * @return EyebrowCurve 是否已赋值
                     */
                    bool EyebrowCurveHasBeenSet() const;

                    /**
                     * 获取Eyebrow length.
The `Type` values of the `AttributeItem` include: 0: short; 1: long.
                     * @return EyebrowLength Eyebrow length.
The `Type` values of the `AttributeItem` include: 0: short; 1: long.
                     */
                    AttributeItem GetEyebrowLength() const;

                    /**
                     * 设置Eyebrow length.
The `Type` values of the `AttributeItem` include: 0: short; 1: long.
                     * @param EyebrowLength Eyebrow length.
The `Type` values of the `AttributeItem` include: 0: short; 1: long.
                     */
                    void SetEyebrowLength(const AttributeItem& _eyebrowLength);

                    /**
                     * 判断参数 EyebrowLength 是否已赋值
                     * @return EyebrowLength 是否已赋值
                     */
                    bool EyebrowLengthHasBeenSet() const;

                private:

                    /**
                     * Eyebrow thickness.
The `Type` values of the `AttributeItem` include: 0: light; 1: thick.
                     */
                    AttributeItem m_eyebrowDensity;
                    bool m_eyebrowDensityHasBeenSet;

                    /**
                     * Eyebrow curve.
The `Type` values of the `AttributeItem` include: 0: flat; 1: curved.
                     */
                    AttributeItem m_eyebrowCurve;
                    bool m_eyebrowCurveHasBeenSet;

                    /**
                     * Eyebrow length.
The `Type` values of the `AttributeItem` include: 0: short; 1: long.
                     */
                    AttributeItem m_eyebrowLength;
                    bool m_eyebrowLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_
