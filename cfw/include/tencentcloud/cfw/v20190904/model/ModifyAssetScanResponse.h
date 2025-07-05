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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAssetScan response structure.
                */
                class ModifyAssetScanResponse : public AbstractModel
                {
                public:
                    ModifyAssetScanResponse();
                    ~ModifyAssetScanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return message
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ReturnMsg Return message
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取Error code. 0: success; non-0: failed
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ReturnCode Error code. 0: success; non-0: failed
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取Status value. 0: success; 1: scanning; others: failed
                     * @return Status Status value. 0: success; 1: scanning; others: failed
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Return message
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * Error code. 0: success; non-0: failed
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * Status value. 0: success; 1: scanning; others: failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANRESPONSE_H_
