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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DealData.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GenerateDealsAndPayNew response structure.
                */
                class GenerateDealsAndPayNewResponse : public AbstractModel
                {
                public:
                    GenerateDealsAndPayNewResponse();
                    ~GenerateDealsAndPayNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing order response structure

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Billing order response structure

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DealData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取1: Success, 0: Failure
                     * @return Status 1: Success, 0: Failure
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Returned message

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReturnMessage Returned message

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 判断参数 ReturnMessage 是否已赋值
                     * @return ReturnMessage 是否已赋值
                     * 
                     */
                    bool ReturnMessageHasBeenSet() const;

                    /**
                     * 获取Purchased instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Purchased instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Billing order response structure

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DealData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 1: Success, 0: Failure
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Returned message

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                    /**
                     * Purchased instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWRESPONSE_H_
