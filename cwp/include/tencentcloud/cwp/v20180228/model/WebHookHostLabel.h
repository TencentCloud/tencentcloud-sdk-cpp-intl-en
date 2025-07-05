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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKHOSTLABEL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKHOSTLABEL_H_

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
                * Enterprise WeChat Robot Host Range
                */
                class WebHookHostLabel : public AbstractModel
                {
                public:
                    WebHookHostLabel();
                    ~WebHookHostLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host Range [1: Project |2: Tencent Cloud Tag | 3: Host Security Tag | 4: Optional] Empty array means all.
                     * @return Type Host Range [1: Project |2: Tencent Cloud Tag | 3: Host Security Tag | 4: Optional] Empty array means all.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Host Range [1: Project |2: Tencent Cloud Tag | 3: Host Security Tag | 4: Optional] Empty array means all.
                     * @param _type Host Range [1: Project |2: Tencent Cloud Tag | 3: Host Security Tag | 4: Optional] Empty array means all.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Host Project or Tag Content
                     * @return Values Host Project or Tag Content
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Host Project or Tag Content
                     * @param _values Host Project or Tag Content
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Host Range [1: Project |2: Tencent Cloud Tag | 3: Host Security Tag | 4: Optional] Empty array means all.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Host Project or Tag Content
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKHOSTLABEL_H_
