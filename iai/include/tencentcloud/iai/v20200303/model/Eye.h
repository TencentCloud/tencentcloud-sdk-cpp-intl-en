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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_EYE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_EYE_H_

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
                * Eye information
                */
                class Eye : public AbstractModel
                {
                public:
                    Eye();
                    ~Eye() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether glasses are worn.
The `Type` values of the `AttributeItem` include: 0: no glasses; 1: general glasses; 2: sunglasses.
                     * @return Glass Whether glasses are worn.
The `Type` values of the `AttributeItem` include: 0: no glasses; 1: general glasses; 2: sunglasses.
                     * 
                     */
                    AttributeItem GetGlass() const;

                    /**
                     * 设置Whether glasses are worn.
The `Type` values of the `AttributeItem` include: 0: no glasses; 1: general glasses; 2: sunglasses.
                     * @param _glass Whether glasses are worn.
The `Type` values of the `AttributeItem` include: 0: no glasses; 1: general glasses; 2: sunglasses.
                     * 
                     */
                    void SetGlass(const AttributeItem& _glass);

                    /**
                     * 判断参数 Glass 是否已赋值
                     * @return Glass 是否已赋值
                     * 
                     */
                    bool GlassHasBeenSet() const;

                    /**
                     * 获取Whether the eyes are open.
The `Type` values of the `AttributeItem` include: 0: open; 1: closed.
                     * @return EyeOpen Whether the eyes are open.
The `Type` values of the `AttributeItem` include: 0: open; 1: closed.
                     * 
                     */
                    AttributeItem GetEyeOpen() const;

                    /**
                     * 设置Whether the eyes are open.
The `Type` values of the `AttributeItem` include: 0: open; 1: closed.
                     * @param _eyeOpen Whether the eyes are open.
The `Type` values of the `AttributeItem` include: 0: open; 1: closed.
                     * 
                     */
                    void SetEyeOpen(const AttributeItem& _eyeOpen);

                    /**
                     * 判断参数 EyeOpen 是否已赋值
                     * @return EyeOpen 是否已赋值
                     * 
                     */
                    bool EyeOpenHasBeenSet() const;

                    /**
                     * 获取Whether the person has double eyelids.
The `Type` values of the `AttributeItem` include: 0: no; 1: yes.
                     * @return EyelidType Whether the person has double eyelids.
The `Type` values of the `AttributeItem` include: 0: no; 1: yes.
                     * 
                     */
                    AttributeItem GetEyelidType() const;

                    /**
                     * 设置Whether the person has double eyelids.
The `Type` values of the `AttributeItem` include: 0: no; 1: yes.
                     * @param _eyelidType Whether the person has double eyelids.
The `Type` values of the `AttributeItem` include: 0: no; 1: yes.
                     * 
                     */
                    void SetEyelidType(const AttributeItem& _eyelidType);

                    /**
                     * 判断参数 EyelidType 是否已赋值
                     * @return EyelidType 是否已赋值
                     * 
                     */
                    bool EyelidTypeHasBeenSet() const;

                    /**
                     * 获取Eye size.
The `Type` values of the `AttributeItem` include: 0: small eyes; 1: general eyes; 2: big eyes.
                     * @return EyeSize Eye size.
The `Type` values of the `AttributeItem` include: 0: small eyes; 1: general eyes; 2: big eyes.
                     * 
                     */
                    AttributeItem GetEyeSize() const;

                    /**
                     * 设置Eye size.
The `Type` values of the `AttributeItem` include: 0: small eyes; 1: general eyes; 2: big eyes.
                     * @param _eyeSize Eye size.
The `Type` values of the `AttributeItem` include: 0: small eyes; 1: general eyes; 2: big eyes.
                     * 
                     */
                    void SetEyeSize(const AttributeItem& _eyeSize);

                    /**
                     * 判断参数 EyeSize 是否已赋值
                     * @return EyeSize 是否已赋值
                     * 
                     */
                    bool EyeSizeHasBeenSet() const;

                private:

                    /**
                     * Whether glasses are worn.
The `Type` values of the `AttributeItem` include: 0: no glasses; 1: general glasses; 2: sunglasses.
                     */
                    AttributeItem m_glass;
                    bool m_glassHasBeenSet;

                    /**
                     * Whether the eyes are open.
The `Type` values of the `AttributeItem` include: 0: open; 1: closed.
                     */
                    AttributeItem m_eyeOpen;
                    bool m_eyeOpenHasBeenSet;

                    /**
                     * Whether the person has double eyelids.
The `Type` values of the `AttributeItem` include: 0: no; 1: yes.
                     */
                    AttributeItem m_eyelidType;
                    bool m_eyelidTypeHasBeenSet;

                    /**
                     * Eye size.
The `Type` values of the `AttributeItem` include: 0: small eyes; 1: general eyes; 2: big eyes.
                     */
                    AttributeItem m_eyeSize;
                    bool m_eyeSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_EYE_H_
