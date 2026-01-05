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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CLIPRANGEINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CLIPRANGEINFO_H_

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
                * Spacer configuration.
                */
                class ClipRangeInfo : public AbstractModel
                {
                public:
                    ClipRangeInfo();
                    ~ClipRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The vod type is valid, the content is valid starting time, Entire and SpecifyTimeRange are optional.
                     * @return Type The vod type is valid, the content is valid starting time, Entire and SpecifyTimeRange are optional.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The vod type is valid, the content is valid starting time, Entire and SpecifyTimeRange are optional.
                     * @param _type The vod type is valid, the content is valid starting time, Entire and SpecifyTimeRange are optional.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Offset, valid when Type is SpecifyTimeRange.
                     * @return Offset Offset, valid when Type is SpecifyTimeRange.
                     * @deprecated
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, valid when Type is SpecifyTimeRange.
                     * @param _offset Offset, valid when Type is SpecifyTimeRange.
                     * @deprecated
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * @deprecated
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Start offset, Valid when the Type is SpecifyTimeRange.
                     * @return StartOffset Start offset, Valid when the Type is SpecifyTimeRange.
                     * 
                     */
                    uint64_t GetStartOffset() const;

                    /**
                     * 设置Start offset, Valid when the Type is SpecifyTimeRange.
                     * @param _startOffset Start offset, Valid when the Type is SpecifyTimeRange.
                     * 
                     */
                    void SetStartOffset(const uint64_t& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取End offset, valid when Type is SpecifyTimeRange.
                     * @return EndOffset End offset, valid when Type is SpecifyTimeRange.
                     * 
                     */
                    uint64_t GetEndOffset() const;

                    /**
                     * 设置End offset, valid when Type is SpecifyTimeRange.
                     * @param _endOffset End offset, valid when Type is SpecifyTimeRange.
                     * 
                     */
                    void SetEndOffset(const uint64_t& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                private:

                    /**
                     * The vod type is valid, the content is valid starting time, Entire and SpecifyTimeRange are optional.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Offset, valid when Type is SpecifyTimeRange.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Start offset, Valid when the Type is SpecifyTimeRange.
                     */
                    uint64_t m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * End offset, valid when Type is SpecifyTimeRange.
                     */
                    uint64_t m_endOffset;
                    bool m_endOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CLIPRANGEINFO_H_
