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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SOURCETAG_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SOURCETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * type SourceTag struct {
	Key   string `json:"Key"`
	Value string `json:"Value"`
}
                */
                class SourceTag : public AbstractModel
                {
                public:
                    SourceTag();
                    ~SourceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key of the source tag supports capital letters, numbers, underscores, and dashes from 1 to 50 digits
                     * @return Key The key of the source tag supports capital letters, numbers, underscores, and dashes from 1 to 50 digits
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置The key of the source tag supports capital letters, numbers, underscores, and dashes from 1 to 50 digits
                     * @param _key The key of the source tag supports capital letters, numbers, underscores, and dashes from 1 to 50 digits
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
                     * 获取The value of the source tag supports letters, numbers, underscores, dashes, periods, and percent signs (%) ranging from 1 to 200 characters

                     * @return Value The value of the source tag supports letters, numbers, underscores, dashes, periods, and percent signs (%) ranging from 1 to 200 characters

                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The value of the source tag supports letters, numbers, underscores, dashes, periods, and percent signs (%) ranging from 1 to 200 characters

                     * @param _value The value of the source tag supports letters, numbers, underscores, dashes, periods, and percent signs (%) ranging from 1 to 200 characters

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
                     * The key of the source tag supports capital letters, numbers, underscores, and dashes from 1 to 50 digits
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * The value of the source tag supports letters, numbers, underscores, dashes, periods, and percent signs (%) ranging from 1 to 200 characters

                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SOURCETAG_H_
