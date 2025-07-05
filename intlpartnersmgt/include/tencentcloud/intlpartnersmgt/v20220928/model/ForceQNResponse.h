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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * ForceQN response structure.
                */
                class ForceQNResponse : public AbstractModel
                {
                public:
                    ForceQNResponse();
                    ~ForceQNResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Status (deprecated).
                     * @return C Status (deprecated).
                     * @deprecated
                     */
                    int64_t GetC() const;

                    /**
                     * 判断参数 C 是否已赋值
                     * @return C 是否已赋值
                     * @deprecated
                     */
                    bool CHasBeenSet() const;

                    /**
                     * 获取Msg (deprecated).
                     * @return M Msg (deprecated).
                     * @deprecated
                     */
                    std::string GetM() const;

                    /**
                     * 判断参数 M 是否已赋值
                     * @return M 是否已赋值
                     * @deprecated
                     */
                    bool MHasBeenSet() const;

                private:

                    /**
                     * Status (deprecated).
                     */
                    int64_t m_c;
                    bool m_cHasBeenSet;

                    /**
                     * Msg (deprecated).
                     */
                    std::string m_m;
                    bool m_mHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNRESPONSE_H_
