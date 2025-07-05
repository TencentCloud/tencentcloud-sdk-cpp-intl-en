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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutInstance response structure.
                */
                class ScaleOutInstanceResponse : public AbstractModel
                {
                public:
                    ScaleOutInstanceResponse();
                    ~ScaleOutInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Order number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealNames Order number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取Client token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientToken Client token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Scale-out workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowId Scale-out workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Big order ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillId Big order ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Order number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * Client token.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Scale-out workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Big order ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESPONSE_H_
