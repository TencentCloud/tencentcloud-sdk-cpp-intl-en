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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKEVENTKV_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKEVENTKV_H_

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
                * Enterprise WeChat Robot Event Types
                */
                class WebHookEventKv : public AbstractModel
                {
                public:
                    WebHookEventKv();
                    ~WebHookEventKv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event type
                     * @return Type Event type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Event type
                     * @param _type Event type
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
                     * 获取Event content
                     * @return ControlBit Event content
                     * 
                     */
                    std::string GetControlBit() const;

                    /**
                     * 设置Event content
                     * @param _controlBit Event content
                     * 
                     */
                    void SetControlBit(const std::string& _controlBit);

                    /**
                     * 判断参数 ControlBit 是否已赋值
                     * @return ControlBit 是否已赋值
                     * 
                     */
                    bool ControlBitHasBeenSet() const;

                private:

                    /**
                     * Event type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event content
                     */
                    std::string m_controlBit;
                    bool m_controlBitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKEVENTKV_H_
