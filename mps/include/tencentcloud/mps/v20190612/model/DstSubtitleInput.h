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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DSTSUBTITLEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DSTSUBTITLEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI Dubbing external translation subtitle information
                */
                class DstSubtitleInput : public AbstractModel
                {
                public:
                    DstSubtitleInput();
                    ~DstSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>External translation subtitle information.</p>
                     * @return DstSubtitleInfo <p>External translation subtitle information.</p>
                     * 
                     */
                    MediaInputInfo GetDstSubtitleInfo() const;

                    /**
                     * 设置<p>External translation subtitle information.</p>
                     * @param _dstSubtitleInfo <p>External translation subtitle information.</p>
                     * 
                     */
                    void SetDstSubtitleInfo(const MediaInputInfo& _dstSubtitleInfo);

                    /**
                     * 判断参数 DstSubtitleInfo 是否已赋值
                     * @return DstSubtitleInfo 是否已赋值
                     * 
                     */
                    bool DstSubtitleInfoHasBeenSet() const;

                private:

                    /**
                     * <p>External translation subtitle information.</p>
                     */
                    MediaInputInfo m_dstSubtitleInfo;
                    bool m_dstSubtitleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DSTSUBTITLEINPUT_H_
