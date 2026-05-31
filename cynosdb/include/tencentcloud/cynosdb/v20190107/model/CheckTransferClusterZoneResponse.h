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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CheckTransferClusterZone response structure.
                */
                class CheckTransferClusterZoneResponse : public AbstractModel
                {
                public:
                    CheckTransferClusterZoneResponse();
                    ~CheckTransferClusterZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the check is successful
                     * @return CheckStatus Whether the check is successful
                     * 
                     */
                    bool GetCheckStatus() const;

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取Reason for check failure
                     * @return CheckMsg Reason for check failure
                     * 
                     */
                    std::string GetCheckMsg() const;

                    /**
                     * 判断参数 CheckMsg 是否已赋值
                     * @return CheckMsg 是否已赋值
                     * 
                     */
                    bool CheckMsgHasBeenSet() const;

                private:

                    /**
                     * Whether the check is successful
                     */
                    bool m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Reason for check failure
                     */
                    std::string m_checkMsg;
                    bool m_checkMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONERESPONSE_H_
