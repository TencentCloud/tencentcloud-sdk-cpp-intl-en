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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSTATUSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSTATUSRESPONSE_H_

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
                * DescribeClusterEndpointStatus response structure.
                */
                class DescribeClusterEndpointStatusResponse : public AbstractModel
                {
                public:
                    DescribeClusterEndpointStatusResponse();
                    ~DescribeClusterEndpointStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The status of cluster access port. It can be `Created` (enabled); `Creating` (enabling) and `NotFound` (not enabled)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Status The status of cluster access port. It can be `Created` (enabled); `Creating` (enabling) and `NotFound` (not enabled)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Details of the error occurred while opening the access port
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ErrorMsg Details of the error occurred while opening the access port
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * The status of cluster access port. It can be `Created` (enabled); `Creating` (enabling) and `NotFound` (not enabled)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Details of the error occurred while opening the access port
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSTATUSRESPONSE_H_
