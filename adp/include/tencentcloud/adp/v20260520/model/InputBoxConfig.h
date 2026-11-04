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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_INPUTBOXCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_INPUTBOXCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Input box configuration
                */
                class InputBoxConfig : public AbstractModel
                {
                public:
                    InputBoxConfig();
                    ~InputBoxConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input box buttons: 1: Upload image, 2: Upload documents, 3: Tencent Docs, 4: Online search
                     * @return InputBoxButtons Input box buttons: 1: Upload image, 2: Upload documents, 3: Tencent Docs, 4: Online search
                     * 
                     */
                    std::vector<int64_t> GetInputBoxButtons() const;

                    /**
                     * 设置Input box buttons: 1: Upload image, 2: Upload documents, 3: Tencent Docs, 4: Online search
                     * @param _inputBoxButtons Input box buttons: 1: Upload image, 2: Upload documents, 3: Tencent Docs, 4: Online search
                     * 
                     */
                    void SetInputBoxButtons(const std::vector<int64_t>& _inputBoxButtons);

                    /**
                     * 判断参数 InputBoxButtons 是否已赋值
                     * @return InputBoxButtons 是否已赋值
                     * 
                     */
                    bool InputBoxButtonsHasBeenSet() const;

                private:

                    /**
                     * Input box buttons: 1: Upload image, 2: Upload documents, 3: Tencent Docs, 4: Online search
                     */
                    std::vector<int64_t> m_inputBoxButtons;
                    bool m_inputBoxButtonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_INPUTBOXCONFIG_H_
