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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSETITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSETITEM_H_

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
                * Information on a single hotword.
                */
                class AsrHotwordsSetItem : public AbstractModel
                {
                public:
                    AsrHotwordsSetItem();
                    ~AsrHotwordsSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hotword ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Hotword ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Hotword ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Hotword ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Hotword text.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Text Hotword text.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Hotword text.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _text Hotword text.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Hotword weight. The value can be 11 or 100 or be in the range of 1 to 10.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Weight Hotword weight. The value can be 11 or 100 or be in the range of 1 to 10.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Hotword weight. The value can be 11 or 100 or be in the range of 1 to 10.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _weight Hotword weight. The value can be 11 or 100 or be in the range of 1 to 10.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Hotword ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Hotword text.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Hotword weight. The value can be 11 or 100 or be in the range of 1 to 10.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSETITEM_H_
