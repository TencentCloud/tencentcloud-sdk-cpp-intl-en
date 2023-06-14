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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWAREDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWAREDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Image software details.
                */
                class SoftwareDetail : public AbstractModel
                {
                public:
                    SoftwareDetail();
                    ~SoftwareDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique detail key
                     * @return Key Unique detail key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Unique detail key
                     * @param _key Unique detail key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Detail title.
                     * @return Title Detail title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Detail title.
                     * @param _title Detail title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Detail value.
                     * @return Value Detail value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Detail value.
                     * @param _value Detail value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Unique detail key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Detail title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Detail value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWAREDETAIL_H_
