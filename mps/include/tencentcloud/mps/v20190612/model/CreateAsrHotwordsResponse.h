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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAsrHotwords response structure.
                */
                class CreateAsrHotwordsResponse : public AbstractModel
                {
                public:
                    CreateAsrHotwordsResponse();
                    ~CreateAsrHotwordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Hotword lexicon ID.
                     * @return HotwordsId Hotword lexicon ID.
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                private:

                    /**
                     * Hotword lexicon ID.
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSRESPONSE_H_
