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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RequestStatus.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetRequestStatus response structure.
                */
                class GetRequestStatusResponse : public AbstractModel
                {
                public:
                    GetRequestStatusResponse();
                    ~GetRequestStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total running functions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCount Total running functions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Details of the function running status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Data Details of the function running status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RequestStatus> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Total running functions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Details of the function running status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<RequestStatus> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSRESPONSE_H_
