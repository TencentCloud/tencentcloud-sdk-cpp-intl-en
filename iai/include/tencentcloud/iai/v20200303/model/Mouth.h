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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_

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
                * Mouth information
                */
                class Mouth : public AbstractModel
                {
                public:
                    Mouth();
                    ~Mouth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the mouth is open.
The `Type` values of the `AttributeItem` include: 0: closed; 1: open.
                     * @return MouthOpen Whether the mouth is open.
The `Type` values of the `AttributeItem` include: 0: closed; 1: open.
                     * 
                     */
                    AttributeItem GetMouthOpen() const;

                    /**
                     * 设置Whether the mouth is open.
The `Type` values of the `AttributeItem` include: 0: closed; 1: open.
                     * @param _mouthOpen Whether the mouth is open.
The `Type` values of the `AttributeItem` include: 0: closed; 1: open.
                     * 
                     */
                    void SetMouthOpen(const AttributeItem& _mouthOpen);

                    /**
                     * 判断参数 MouthOpen 是否已赋值
                     * @return MouthOpen 是否已赋值
                     * 
                     */
                    bool MouthOpenHasBeenSet() const;

                private:

                    /**
                     * Whether the mouth is open.
The `Type` values of the `AttributeItem` include: 0: closed; 1: open.
                     */
                    AttributeItem m_mouthOpen;
                    bool m_mouthOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_
