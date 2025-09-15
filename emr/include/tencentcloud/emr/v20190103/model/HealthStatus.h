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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HEALTHSTATUS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Process health status
                */
                class HealthStatus : public AbstractModel
                {
                public:
                    HealthStatus();
                    ~HealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Running normally.
                     * @return Code Running normally.
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Running normally.
                     * @param _code Running normally.
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Running normally.
                     * @return Text Running normally.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Running normally.
                     * @param _text Running normally.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Running normally.
                     * @return Desc Running normally.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Running normally.
                     * @param _desc Running normally.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Running normally.
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Running normally.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Running normally.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HEALTHSTATUS_H_
