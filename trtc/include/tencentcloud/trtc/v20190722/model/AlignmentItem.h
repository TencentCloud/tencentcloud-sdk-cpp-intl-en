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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 
                */
                class AlignmentItem : public AbstractModel
                {
                public:
                    AlignmentItem();
                    ~AlignmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TimeBeginMs 
                     * 
                     */
                    uint64_t GetTimeBeginMs() const;

                    /**
                     * 设置
                     * @param _timeBeginMs 
                     * 
                     */
                    void SetTimeBeginMs(const uint64_t& _timeBeginMs);

                    /**
                     * 判断参数 TimeBeginMs 是否已赋值
                     * @return TimeBeginMs 是否已赋值
                     * 
                     */
                    bool TimeBeginMsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TimeEndMs 
                     * 
                     */
                    uint64_t GetTimeEndMs() const;

                    /**
                     * 设置
                     * @param _timeEndMs 
                     * 
                     */
                    void SetTimeEndMs(const uint64_t& _timeEndMs);

                    /**
                     * 判断参数 TimeEndMs 是否已赋值
                     * @return TimeEndMs 是否已赋值
                     * 
                     */
                    bool TimeEndMsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TextBegin 
                     * 
                     */
                    uint64_t GetTextBegin() const;

                    /**
                     * 设置
                     * @param _textBegin 
                     * 
                     */
                    void SetTextBegin(const uint64_t& _textBegin);

                    /**
                     * 判断参数 TextBegin 是否已赋值
                     * @return TextBegin 是否已赋值
                     * 
                     */
                    bool TextBeginHasBeenSet() const;

                    /**
                     * 获取
                     * @return TextEnd 
                     * 
                     */
                    uint64_t GetTextEnd() const;

                    /**
                     * 设置
                     * @param _textEnd 
                     * 
                     */
                    void SetTextEnd(const uint64_t& _textEnd);

                    /**
                     * 判断参数 TextEnd 是否已赋值
                     * @return TextEnd 是否已赋值
                     * 
                     */
                    bool TextEndHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_timeBeginMs;
                    bool m_timeBeginMsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_timeEndMs;
                    bool m_timeEndMsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_textBegin;
                    bool m_textBeginHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_textEnd;
                    bool m_textEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_
