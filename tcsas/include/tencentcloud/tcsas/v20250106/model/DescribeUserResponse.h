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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERRESPONSE_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserDetailResp.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeUser response structure.
                */
                class DescribeUserResponse : public AbstractModel
                {
                public:
                    DescribeUserResponse();
                    ~DescribeUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Response data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Response data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeUserDetailResp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Response data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeUserDetailResp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERRESPONSE_H_
