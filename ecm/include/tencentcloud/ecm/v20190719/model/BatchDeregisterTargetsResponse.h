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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * BatchDeregisterTargets response structure.
                */
                class BatchDeregisterTargetsResponse : public AbstractModel
                {
                public:
                    BatchDeregisterTargetsResponse();
                    ~BatchDeregisterTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of the listeners failed to be unbound
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FailListenerIdSet IDs of the listeners failed to be unbound
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFailListenerIdSet() const;

                    /**
                     * 判断参数 FailListenerIdSet 是否已赋值
                     * @return FailListenerIdSet 是否已赋值
                     * 
                     */
                    bool FailListenerIdSetHasBeenSet() const;

                private:

                    /**
                     * IDs of the listeners failed to be unbound
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_failListenerIdSet;
                    bool m_failListenerIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_
