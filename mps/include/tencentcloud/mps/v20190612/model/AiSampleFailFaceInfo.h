/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFAILFACEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFAILFACEINFO_H_

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
                * AI-based sample management - face information failing to be processed.
                */
                class AiSampleFailFaceInfo : public AbstractModel
                {
                public:
                    AiSampleFailFaceInfo();
                    ~AiSampleFailFaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Corresponds to incorrect image subscripts in the `FaceContents` input parameter, starting from 0.
                     * @return Index Corresponds to incorrect image subscripts in the `FaceContents` input parameter, starting from 0.
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置Corresponds to incorrect image subscripts in the `FaceContents` input parameter, starting from 0.
                     * @param Index Corresponds to incorrect image subscripts in the `FaceContents` input parameter, starting from 0.
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Error code. Valid values:
<li>0: Succeeded;</li>
<li>Other values: Failed.</li>
                     * @return ErrCode Error code. Valid values:
<li>0: Succeeded;</li>
<li>Other values: Failed.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. Valid values:
<li>0: Succeeded;</li>
<li>Other values: Failed.</li>
                     * @param ErrCode Error code. Valid values:
<li>0: Succeeded;</li>
<li>Other values: Failed.</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error description.
                     * @return Message Error description.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error description.
                     * @param Message Error description.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Corresponds to incorrect image subscripts in the `FaceContents` input parameter, starting from 0.
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Error code. Valid values:
<li>0: Succeeded;</li>
<li>Other values: Failed.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error description.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEFAILFACEINFO_H_
