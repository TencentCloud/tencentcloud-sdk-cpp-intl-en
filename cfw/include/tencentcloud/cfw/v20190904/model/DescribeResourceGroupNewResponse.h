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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_

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
                * DescribeResourceGroupNew response structure.
                */
                class DescribeResourceGroupNewResponse : public AbstractModel
                {
                public:
                    DescribeResourceGroupNewResponse();
                    ~DescribeResourceGroupNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returns a tree structure
                     * @return Data Returns a tree structure
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Number of uncategorizd instances
                     * @return UnResourceNum Number of uncategorizd instances
                     * 
                     */
                    int64_t GetUnResourceNum() const;

                    /**
                     * 判断参数 UnResourceNum 是否已赋值
                     * @return UnResourceNum 是否已赋值
                     * 
                     */
                    bool UnResourceNumHasBeenSet() const;

                    /**
                     * 获取Response message
                     * @return ReturnMsg Response message
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
                     * 获取Return code. 0: Request successful
                     * @return ReturnCode Return code. 0: Request successful
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * Returns a tree structure
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Number of uncategorizd instances
                     */
                    int64_t m_unResourceNum;
                    bool m_unResourceNumHasBeenSet;

                    /**
                     * Response message
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * Return code. 0: Request successful
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_
