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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The placeholder element information of a video editing/compositing task.
                */
                class ComposeEmptyItem : public AbstractModel
                {
                public:
                    ComposeEmptyItem();
                    ~ComposeEmptyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates 3.5 seconds. </li>
                     * @return Duration The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates 3.5 seconds. </li>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates 3.5 seconds. </li>
                     * @param _duration The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates 3.5 seconds. </li>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates 3.5 seconds. </li>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_
