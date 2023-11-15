/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DataSearchBug.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSearchBugInfo response structure.
                */
                class DescribeSearchBugInfoResponse : public AbstractModel
                {
                public:
                    DescribeSearchBugInfoResponse();
                    ~DescribeSearchBugInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability and asset information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data Vulnerability and asset information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    DataSearchBug GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Status code. Valid values: 0: successful; others: failed.
                     * @return ReturnCode Status code. Valid values: 0: successful; others: failed.
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
                     * 获取Status message. Valid values: success: successful query; fail: failed query.
                     * @return ReturnMsg Status message. Valid values: success: successful query; fail: failed query.
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * Vulnerability and asset information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    DataSearchBug m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Status code. Valid values: 0: successful; others: failed.
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * Status message. Valid values: success: successful query; fail: failed query.
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFORESPONSE_H_
