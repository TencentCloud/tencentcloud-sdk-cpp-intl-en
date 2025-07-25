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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateECMInstances response structure.
                */
                class CreateECMInstancesResponse : public AbstractModel
                {
                public:
                    CreateECMInstancesResponse();
                    ~CreateECMInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM ID list
                     * @return EcmIdSet ECM ID list
                     * 
                     */
                    std::vector<std::string> GetEcmIdSet() const;

                    /**
                     * 判断参数 EcmIdSet 是否已赋值
                     * @return EcmIdSet 是否已赋值
                     * 
                     */
                    bool EcmIdSetHasBeenSet() const;

                private:

                    /**
                     * ECM ID list
                     */
                    std::vector<std::string> m_ecmIdSet;
                    bool m_ecmIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESRESPONSE_H_
