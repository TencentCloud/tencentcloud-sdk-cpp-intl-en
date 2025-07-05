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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BatchRegisterTargets response structure.
                */
                class BatchRegisterTargetsResponse : public AbstractModel
                {
                public:
                    BatchRegisterTargetsResponse();
                    ~BatchRegisterTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the listener failed to bind. Empty indicates all listeners are bound successfully.
                     * @return FailListenerIdSet ID of the listener failed to bind. Empty indicates all listeners are bound successfully.
                     * 
                     */
                    std::vector<std::string> GetFailListenerIdSet() const;

                    /**
                     * 判断参数 FailListenerIdSet 是否已赋值
                     * @return FailListenerIdSet 是否已赋值
                     * 
                     */
                    bool FailListenerIdSetHasBeenSet() const;

                    /**
                     * 获取Information of the binding failure cause.
                     * @return Message Information of the binding failure cause.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * ID of the listener failed to bind. Empty indicates all listeners are bound successfully.
                     */
                    std::vector<std::string> m_failListenerIdSet;
                    bool m_failListenerIdSetHasBeenSet;

                    /**
                     * Information of the binding failure cause.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHREGISTERTARGETSRESPONSE_H_
