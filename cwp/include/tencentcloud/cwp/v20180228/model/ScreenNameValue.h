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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * [Cloud security alarm] Visualized data Name Value Data on the large screen
                */
                class ScreenNameValue : public AbstractModel
                {
                public:
                    ScreenNameValue();
                    ~ScreenNameValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistics type: Different APIs correspond to different content
                     * @return Name Statistics type: Different APIs correspond to different content
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Statistics type: Different APIs correspond to different content
                     * @param _name Statistics type: Different APIs correspond to different content
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Statistics quantity
                     * @return Value Statistics quantity
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置Statistics quantity
                     * @param _value Statistics quantity
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Statistics type: Different APIs correspond to different content
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Statistics quantity
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_
