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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/InterInstanceFlow.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CloseInterCommunication response structure.
                */
                class CloseInterCommunicationResponse : public AbstractModel
                {
                public:
                    CloseInterCommunicationResponse();
                    ~CloseInterCommunicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of instance and async task
                     * @return InterInstanceFlowSet IDs of instance and async task
                     * 
                     */
                    std::vector<InterInstanceFlow> GetInterInstanceFlowSet() const;

                    /**
                     * 判断参数 InterInstanceFlowSet 是否已赋值
                     * @return InterInstanceFlowSet 是否已赋值
                     * 
                     */
                    bool InterInstanceFlowSetHasBeenSet() const;

                private:

                    /**
                     * IDs of instance and async task
                     */
                    std::vector<InterInstanceFlow> m_interInstanceFlowSet;
                    bool m_interInstanceFlowSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONRESPONSE_H_
