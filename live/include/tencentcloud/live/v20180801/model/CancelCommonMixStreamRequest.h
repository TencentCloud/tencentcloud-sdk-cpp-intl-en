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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CancelCommonMixStream request structure.
                */
                class CancelCommonMixStreamRequest : public AbstractModel
                {
                public:
                    CancelCommonMixStreamRequest();
                    ~CancelCommonMixStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of stream mix session (from applying for stream mix to canceling stream mix).
This value is the same as the `MixStreamSessionId` in `CreateCommonMixStream`.
                     * @return MixStreamSessionId ID of stream mix session (from applying for stream mix to canceling stream mix).
This value is the same as the `MixStreamSessionId` in `CreateCommonMixStream`.
                     * 
                     */
                    std::string GetMixStreamSessionId() const;

                    /**
                     * 设置ID of stream mix session (from applying for stream mix to canceling stream mix).
This value is the same as the `MixStreamSessionId` in `CreateCommonMixStream`.
                     * @param _mixStreamSessionId ID of stream mix session (from applying for stream mix to canceling stream mix).
This value is the same as the `MixStreamSessionId` in `CreateCommonMixStream`.
                     * 
                     */
                    void SetMixStreamSessionId(const std::string& _mixStreamSessionId);

                    /**
                     * 判断参数 MixStreamSessionId 是否已赋值
                     * @return MixStreamSessionId 是否已赋值
                     * 
                     */
                    bool MixStreamSessionIdHasBeenSet() const;

                private:

                    /**
                     * ID of stream mix session (from applying for stream mix to canceling stream mix).
This value is the same as the `MixStreamSessionId` in `CreateCommonMixStream`.
                     */
                    std::string m_mixStreamSessionId;
                    bool m_mixStreamSessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_
